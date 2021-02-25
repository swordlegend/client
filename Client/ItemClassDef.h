#ifndef __ITEMCLASSDEF_H__
#define __ITEMCLASSDEF_H__

//------------------------------------------------------
// Item class 설정.
//------------------------------------------------------
// (!) 이거 바뀌면 
//     s_NewItemClassTable의 순서도 바꿔야 한다.!
//------------------------------------------------------
enum ITEM_CLASS
{
	ITEM_CLASS_MOTORCYCLE,			// 0
	ITEM_CLASS_POTION,				// 1
	ITEM_CLASS_WATER,				// 2
	ITEM_CLASS_HOLYWATER,			// 3
	ITEM_CLASS_MAGAZINE,			// 4
	ITEM_CLASS_BOMB_MATERIAL,		// 5
	ITEM_CLASS_ETC,					// 6
	ITEM_CLASS_KEY,					// 7
	ITEM_CLASS_RING,				// 8
	ITEM_CLASS_BRACELET,			// 9
	ITEM_CLASS_NECKLACE,			// 10
	ITEM_CLASS_COAT,				// 11
	ITEM_CLASS_TROUSER,				// 12
	ITEM_CLASS_SHOES,				// 13
	ITEM_CLASS_SWORD,				// 14
	ITEM_CLASS_BLADE,				// 15
	ITEM_CLASS_SHIELD,				// 16
	ITEM_CLASS_CROSS,				// 17
	ITEM_CLASS_GLOVE,				// 18
	ITEM_CLASS_HELM,				// 19
	ITEM_CLASS_SG,					// 20
	ITEM_CLASS_SMG,					// 21
	ITEM_CLASS_AR,					// 22
	ITEM_CLASS_SR,					// 23
	ITEM_CLASS_BOMB,				// 24
	ITEM_CLASS_MINE,				// 25
	ITEM_CLASS_BELT,				// 26
	ITEM_CLASS_LEARNINGITEM,		// 27
	ITEM_CLASS_MONEY,				// 28
	ITEM_CLASS_CORPSE,				// 29
	
	// vampire용 item
	ITEM_CLASS_VAMPIRE_RING,		// 30
	ITEM_CLASS_VAMPIRE_BRACELET,	// 31
	ITEM_CLASS_VAMPIRE_NECKLACE,	// 32
	ITEM_CLASS_VAMPIRE_COAT,		// 33
	ITEM_CLASS_SKULL,				// 34
	ITEM_CLASS_MACE,				// 35
	ITEM_CLASS_SERUM,				// 36
	ITEM_CLASS_VAMPIRE_ETC,			// 37

	// 2001.10.22추가
	ITEM_CLASS_SLAYER_PORTAL_ITEM,	// 38
	ITEM_CLASS_VAMPIRE_PORTAL_ITEM,	// 39

	// 2001.12.10
	ITEM_CLASS_EVENT_GIFT_BOX,		// 40
	ITEM_CLASS_EVENT_STAR,			// 41

	ITEM_CLASS_VAMPIRE_EARRING,		// 42

	// 2002.6.7
	ITEM_CLASS_RELIC,				// 43

	// 2002.8.16
	ITEM_CLASS_VAMPIRE_WEAPON,		// 44
	ITEM_CLASS_VAMPIRE_AMULET,		// 45

	// 2002.9.7
	ITEM_CLASS_QUEST_ITEM,			// 46

	// 2002.12.09
	ITEM_CLASS_EVENT_TREE,			// 47
	ITEM_CLASS_EVENT_ETC,			// 48

	// 2003.1.29
	ITEM_CLASS_BLOOD_BIBLE,			// 49

	// 2003.2.12
	ITEM_CLASS_CASTLE_SYMBOL,		// 50

	ITEM_CLASS_COUPLE_RING,			// 51
	ITEM_CLASS_VAMPIRE_COUPLE_RING,	// 52			
	ITEM_CLASS_EVENT_ITEM,			// 53

	// 2003.5.15
	ITEM_CLASS_DYE_POTION,			// 54
	ITEM_CLASS_RESURRECT_ITEM,		// 55
	ITEM_CLASS_MIXING_ITEM,			// 56

	ITEM_CLASS_OUSTERS_ARMSBAND,     // 57
	ITEM_CLASS_OUSTERS_BOOTS,        // 58
	ITEM_CLASS_OUSTERS_CHAKRAM,      // 59
	ITEM_CLASS_OUSTERS_CIRCLET,      // 60
	ITEM_CLASS_OUSTERS_COAT,         // 61
	ITEM_CLASS_OUSTERS_PENDENT,      // 62
	ITEM_CLASS_OUSTERS_RING,         // 63
	ITEM_CLASS_OUSTERS_STONE,        // 64
	ITEM_CLASS_OUSTERS_WRISTLET,     // 65
	
	ITEM_CLASS_LARVA,                // 66
	ITEM_CLASS_PUPA,                 // 67
	ITEM_CLASS_COMPOS_MEI,           // 68
	ITEM_CLASS_OUSTERS_SUMMON_ITEM,  // 69
	ITEM_CLASS_EFFECT_ITEM,			 // 70
	
	ITEM_CLASS_CODE_SHEET,			 // 71
	ITEM_CLASS_MOON_CARD,			 // 72
	
	ITEM_CLASS_SWEEPER,				 // 73
	ITEM_CLASS_PET_ITEM,			 // 74
	ITEM_CLASS_PET_FOOD,             // 75
	ITEM_CLASS_PET_ENCHANT_ITEM,     // 76
	ITEM_CLASS_LUCKY_BAG,			// 77

    ITEM_CLASS_SMS_ITEM,             // 78

	ITEM_CLASS_CORE_ZAP,             // 79

	ITEM_CLASS_GQUEST_ITEM,             // 80

	ITEM_CLASS_TRAP_ITEM,           // 81

	ITEM_CLASS_BLOOD_BIBLE_SIGN,    // 82

	ITEM_CLASS_WAR_ITEM,				// 83
	// by csm 12.27 2차 전직 아이템 
	ITEM_CLASS_CARRYING_RECEIVER,       // 84
	ITEM_CLASS_SHOULDER_ARMOR,      // 85
	ITEM_CLASS_DERMIS,              // 86
	ITEM_CLASS_PERSONA,             // 87
	ITEM_CLASS_FASCIA,              // 88
	ITEM_CLASS_MITTEN,              // 89
	//add by zdj
	ITEM_CLASS_SUB_INVENTORY,
	MAX_ITEM_CLASS,

	ITEM_CLASS_NULL
};


#endif