//----------------------------------------------------------------------
// MSlotItemManager.h
//----------------------------------------------------------------------
#include "Client_PCH.h"
#include "MItem.h"
#include "MSlotItemManager.h"
#include "DebugInfo.h"

#ifdef __GAME_CLIENT__
//	#define	new			DEBUG_NEW
#endif
//#define	delete		DEBUG_DELETE

//----------------------------------------------------------------------
// 
// constructor / destructor
//
//----------------------------------------------------------------------
MSlotItemManager::MSlotItemManager()
{
	m_Size = 0;
	m_ItemSlot = NULL;
}

MSlotItemManager::~MSlotItemManager()
{
	Release();
}

//----------------------------------------------------------------------
//
// member functions
//
//----------------------------------------------------------------------
//----------------------------------------------------------------------
// Init 
//----------------------------------------------------------------------
void		
MSlotItemManager::Init(BYTE size)
{
	Release();

	m_Size = size;
	m_ItemSlot = new MItem* [ m_Size ];

	// NULL로 초기화
	for (int i=0; i<m_Size; i++)
	{
		m_ItemSlot[i] = NULL;
	}
}

//----------------------------------------------------------------------
// Release
//----------------------------------------------------------------------
void		
MSlotItemManager::Release()
{
	MItemManager::Release();

	if (m_ItemSlot!=NULL)
	{
		delete [] m_ItemSlot;
		m_ItemSlot = NULL;

		m_Size = 0;
	}
}

//----------------------------------------------------------------------
// Add Item (pItem)
//----------------------------------------------------------------------
// slot(n)에 pItem을 추가한다.
//----------------------------------------------------------------------
bool			
MSlotItemManager::AddItem(MItem* pItem, BYTE n)		
{
	//---------------------------------------------------------
	// ItemSlot 범위를 넘어가는 경우..
	//---------------------------------------------------------	
	if (n>=m_Size)
	{
		return false;
	}

	//-------------------------------------------------
	// 이미 다른 Item이 존재하면
	//-------------------------------------------------
	if (m_ItemSlot[n]!=NULL)
	{
		return false;
	}

	m_ItemSlot[n] = pItem;

	//-------------------------------------------------
	// item의 slot에서의 위치를 지정한다.
	//-------------------------------------------------
	pItem->SetItemSlot( n );

	//-------------------------------------------------
	// ItemManager의 map에 추가
	//-------------------------------------------------
	return MItemManager::AddItem( pItem );
}

//----------------------------------------------------------------------
// Get Item( n )
//----------------------------------------------------------------------
// n번째 slot의 item을 얻어온다.
//----------------------------------------------------------------------
MItem*	
MSlotItemManager::GetItem(BYTE n) const
{
	//---------------------------------------------------------
	// ItemSlot 범위를 넘어가는 경우..
	//---------------------------------------------------------	
	if (n>=m_Size)
	{
		return NULL;
	}

	return m_ItemSlot[n];
}

//----------------------------------------------------------------------
// Remove Item ( n )
//----------------------------------------------------------------------
// slot(n)의 item을 제거한다.
//----------------------------------------------------------------------
MItem*			
MSlotItemManager::RemoveItem(BYTE n)
{
	//---------------------------------------------------------
	// ItemSlot 범위를 넘어가는 경우..
	//---------------------------------------------------------	
	if (n>=m_Size)
	{
		return NULL;
	}

	MItem* pItem = m_ItemSlot[n];

	//-------------------------------------------------
	// 아무것도 없는 slot인 경우
	//-------------------------------------------------
	if (pItem==NULL)
	{
		return NULL;
	}

	//-------------------------------------------------
	// n번째 Item의 id로.. map의 item을 제거한다.
	//-------------------------------------------------
	pItem = MItemManager::RemoveItem( pItem->GetID() );

	// map에 제거된게 없는 경우..
	if (pItem==NULL)
	{
		return NULL;
	}

	m_ItemSlot[n] = NULL;

	//---------------------------------------------------------
	// 좌표 지워주기
	//---------------------------------------------------------
	// 의미 없는 코드.. - -;
	//---------------------------------------------------------
	//pItem->SetItemSlot( 0 );

	return pItem;
}

//----------------------------------------------------------------------
// Remove Item ( id )
//----------------------------------------------------------------------
// id가 같은 item을 제거한다.
//----------------------------------------------------------------------
MItem*			
MSlotItemManager::RemoveItem(TYPE_OBJECTID id)
{
	//-------------------------------------------------
	// Item의 id로.. map의 item을 제거한다.
	//-------------------------------------------------
	MItem* pItem = MItemManager::RemoveItem( id );

	// map에 제거된게 없는 경우..
	if (pItem==NULL)
	{
		return NULL;
	}

	// pItem의 slot을 제거시켜준다.
	m_ItemSlot[ pItem->GetItemSlot() ] = NULL;

	//---------------------------------------------------------
	// 좌표 지워주기
	//---------------------------------------------------------
	// 의미 없는 코드.. - -;
	// 안해주는게 낫다.. 외부에서 원래있던 곳을 참조할 경우도 있다.
	//---------------------------------------------------------
	//pItem->SetItemSlot( 0 );

	return pItem;
}

//----------------------------------------------------------------------
// Replace Item
//----------------------------------------------------------------------
// pItem을 n위치에 넣는다.
// n위치에 다른 item이 있다면 그게 pOldItem으로 return된다.
//
// return값은 pItem이 들어갔느냐 마느냐..다.. 들어갔으면 true
//----------------------------------------------------------------------
bool			
MSlotItemManager::ReplaceItem(MItem* pItem, BYTE n, MItem*& pOldItem)
{	
	//---------------------------------------------------------
	// ItemSlot 범위를 넘어가는 경우..
	//---------------------------------------------------------	
	if (n>=m_Size)
	{		
		// NULL로 설정한다.
		pOldItem = NULL;

		return false;
	}

	//---------------------------------------------------------	
	// n slot에 다른 item이 있는지 본다.
	//---------------------------------------------------------	
	MItem* pCheckItem = m_ItemSlot[n];

	//---------------------------------------------------------	
	// 아무것도 없으면..
	//---------------------------------------------------------	
	// 그냥 추가하면 된다.
	//---------------------------------------------------------	
	if (pCheckItem==NULL)
	{
		//-------------------------------------------------
		// 이전에 있던 item은 없다.
		//-------------------------------------------------
		pOldItem = NULL;

		m_ItemSlot[n] = pItem;

		//-------------------------------------------------
		// item의 slot에서의 위치를 지정한다.
		//-------------------------------------------------
		pItem->SetItemSlot( n );

		//-------------------------------------------------
		// ItemManager의 map에 추가
		//-------------------------------------------------
		return MItemManager::AddItem( pItem );
	}

	//---------------------------------------------------------	
	// 뭔가 있다면.. 
	//---------------------------------------------------------	
	// replace시키고 pOldItem으로 넘겨줘야 한다.
	//---------------------------------------------------------	
	
	//-------------------------------------------------
	// n번째 Item의 id로.. map의 item을 제거한다.
	//-------------------------------------------------
	pOldItem = MItemManager::RemoveItem( pCheckItem->GetID() );

	// map에 제거된게 없는 경우..
	if (pOldItem==NULL)
	{
		// 위에서 한번 체크했는데..
		// 음. 이런 경우는 없지 싶다. - -;
		return false;
	}

	//-------------------------------------------------
	// pOldItem의 위치를 없애준다.
	//-------------------------------------------------
	//pOldItem->SetItemSlot( 0 );
	

	//-------------------------------------------------
	// n slot에 pItem을 추가한다.
	//-------------------------------------------------
	m_ItemSlot[n] = pItem;		

	//-------------------------------------------------
	// item의 slot에서의 위치를 지정한다.
	//-------------------------------------------------
	pItem->SetItemSlot( n );

	//-------------------------------------------------
	// ItemManager의 map에 추가
	//-------------------------------------------------
	return MItemManager::AddItem( pItem );	
}

//----------------------------------------------------------------------
// Can ReplaceItem : (n) slot에 pItem을 추가하거나 
//						원래 있던 Item과 교체가 가능한가?
//----------------------------------------------------------------------
bool			
MSlotItemManager::CanReplaceItem(MItem* pItem, BYTE n, MItem*& pOldItem)
{
	//---------------------------------------------------------
	// ItemSlot 범위를 넘어가는 경우..
	//---------------------------------------------------------	
	if (n>=m_Size)
	{		
		// NULL로 설정한다.
		pOldItem = NULL;

		return false;
	}

	//---------------------------------------------------------	
	// 무조건 교체가능이다.
	//---------------------------------------------------------	
	pOldItem = m_ItemSlot[n];

	return true;
}