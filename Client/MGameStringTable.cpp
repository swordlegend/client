//----------------------------------------------------------------------
// MGameStringTable.cpp
//----------------------------------------------------------------------
#include "Client_PCH.h"
#include "MGameStringTable.h"


//----------------------------------------------------------------------
// Global
//----------------------------------------------------------------------
MStringArray*		g_pGameStringTable = NULL;
//2004, 6, 18, sobeit add start - about nick name string table
MStringArray*		g_pNickNameStringTable = NULL;
//2004, 6, 18, sobeit add end - about nick name string table


#ifndef __GAME_CLIENT__

void				
InitGameStringTable()
{	
	(*g_pGameStringTable).Init( MAX_GAME_STRING );


	(*g_pGameStringTable)[STRING_NETWORK_CONDITION_BAD] = "회선 상태가 안 좋습니다.";
	(*g_pGameStringTable)[STRING_RESURRECTION_AFTER_SECONDS] = "%d초 후에 되살아날 수 있습니다.";
	(*g_pGameStringTable)[STRING_DRAW_ZONE_NAME] = "%s (%d,%d)";
	(*g_pGameStringTable)[STRING_DRAW_GAME_DATE] = "%d/%d/%d";
	(*g_pGameStringTable)[STRING_DRAW_GAME_TIME] = "%02d:%02d:%02d";
	(*g_pGameStringTable)[STRING_DRAW_ITEM_NAME_MONEY] = "%s(%d)";

	(*g_pGameStringTable)[STRING_USER_REGISTER_DENY] = "새 사용자 등록이 불가능합니다.";
	(*g_pGameStringTable)[STRING_USER_REGISTER_HOMEPAGE] = "홈페이지에서 등록할 수 있습니다.";
	(*g_pGameStringTable)[STRING_USER_REGISTER_EMPTY_FIELD] = "필수항목이 입력되지 않았습니다.";
	(*g_pGameStringTable)[STRING_USER_REGISTER_INVALID_ID] = "잘못된 아이디(ID)입니다.";
	(*g_pGameStringTable)[STRING_USER_REGISTER_ID_LENGTH] = "아이디(ID)는 %d~%d자입니다";
	(*g_pGameStringTable)[STRING_USER_REGISTER_ID_SPECIAL] = "아이디(ID)에서 특수문자를 빼주세요.";
	(*g_pGameStringTable)[STRING_USER_REGISTER_PASSWORD_LENGTH] = "패스워드는 %d~%d자입니다";
	(*g_pGameStringTable)[STRING_USER_REGISTER_PASSWORD_SPECIAL] = "패스워드에서 특수문자를 빼주세요.";
	(*g_pGameStringTable)[STRING_USER_REGISTER_PASSWORD_NUMBER] = "패스워드는 숫자만 사용할 수 없습니다.";
	(*g_pGameStringTable)[STRING_USER_REGISTER_NAME_LENGTH] = "이름은 %d자까지입니다";
	(*g_pGameStringTable)[STRING_USER_REGISTER_INVALID_SSN] = "잘못된 주민등록번호입니다.";
	(*g_pGameStringTable)[STRING_USER_REGISTER_SSN_FORMAT] = "주민등록번호 형식 : 123456-1234567";

	(*g_pGameStringTable)[STRING_MESSAGE_CANNOT_BUY_NO_SPACE] = "빈 자리가 없습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_CANNOT_BUY_NO_MONEY] = "돈이 부족합니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_CANNOT_BUY_NO_ITEM] = "아이템이 없습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_CANNOT_SELL] = "팔 수 없습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_CANNOT_REPAIR] = "수리할 수 없습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_CANNOT_SILVERING] = "은도금 할 수 없습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_CANNOT_BUY_MORE] = "더 이상 살 수 없습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_CANNOT_STORAGE] = "보관함에 넣을수 없습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_STORAGE_BUY] = "보관함을 샀습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_NO_STORAGE] = "보관함이 없습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_TRADE_REJECTED] = "거래가 거부되었습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_TRADE_NOBODY] = "거래할 사람이 없습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_TRADE_CANNOT_ON_MOTORCYCLE] = "오토바이를 타고 거래할 수 없습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_TRADE_SAFETY_ZONE_ONLY] = "안전지대에서만 거래할 수 있습니다.";	
	(*g_pGameStringTable)[STRING_MESSAGE_TRADE_BUSY] = "교환할 수 없는 상태입니다.";	
	(*g_pGameStringTable)[STRING_MESSAGE_CANNOT_TRADE] = "거래할 수 없습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_CANNOT_TRADE_ALREADY_TRADING] = "이미 거래중입니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_CANNOT_TRADE_NO_SPACE] = "교환할 공간이 부족합니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_SKILL_DIFFER_DOMAIN] = "기술 도메인이 다릅니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_SKILL_EXCEED_LEVEL] = "기술 레벨이 높습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_SKILL_CANNOT_LEARN] = "아직 배울 수 없습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_SKILL_NOT_SUPPORT] = "아직 지원되지 않는 기술입니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_FIND_MOTOR_NO_WHERE] = "어디있는지 모르겠군요.";
	(*g_pGameStringTable)[STRING_MESSAGE_FIND_MOTOR_NO_KEY] = "오토바이 열쇠가 없군요";
	(*g_pGameStringTable)[STRING_MESSAGE_FIND_MOTOR_OK] = "%s의 (%d, %d)에 있군요.";
	(*g_pGameStringTable)[STRING_MESSAGE_CANNOT_USE_BONUS_POINT] = "보너스 포인트를 사용할 수 없습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_WHAT_SKILL_TO_LEARN] = "%s 기술들 중에서 무슨 기술을 배우겠습니까?";
	(*g_pGameStringTable)[STRING_MESSAGE_NO_SKILL_TO_LEARN] = "현재는 배울 수 있는 기술이 없군요.";
	(*g_pGameStringTable)[STRING_MESSAGE_NEW_SKILL_AVAILABLE] = "새로운 기술을 배울 수 있습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_NEW_DOMAIN_LEVEL_1] = "%s 도메인 레벨이 %d가 되었습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_NEW_DOMAIN_LEVEL_2] = "%s 도메인 레벨이 %d이 되었습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_CANNOT_MOVE_SAFETY_ZONE_RELIC] = "성물을 들고 있으면 자기편의 안전지대에는 들어갈 수 없습니다!";

	(*g_pGameStringTable)[STRING_MESSAGE_TEAM_REGIST_FAIL_ALREADY_JOIN] = "어디 한번 볼까? 자네는 이미 다른팀 소속이라고 나와 있군";
	(*g_pGameStringTable)[STRING_MESSAGE_TEAM_REGIST_FAIL_QUIT_TIMEOUT] = "자네는 다른 팀을 탈퇴한지 얼마 되지 않았군. 조금 더 신중하게 생각하고 행동하게";
	(*g_pGameStringTable)[STRING_MESSAGE_TEAM_REGIST_FAIL_CANCEL_TIMEOUT] = "자네는 팀을 취소 당한 지 얼마 되지 않았군. 등록 조건에 부합하도록 자신을 좀 더 기르고 오게. 좀 더 신중하게 기회를 엿보도록 하게";
	(*g_pGameStringTable)[STRING_MESSAGE_TEAM_REGIST_FAIL_LEVEL] = "훌륭하지만 리더로써의 자질은 좀 부족한 것 같군. 실력을 닦고 오게나";
	(*g_pGameStringTable)[STRING_MESSAGE_TEAM_REGIST_FAIL_MONEY] = "팀을 만들려면 많은 돈이 필요하다네. 자네는 돈이 없어 보이는군...";
	(*g_pGameStringTable)[STRING_MESSAGE_TEAM_REGIST_FAIL_FAME] = "%s이라.. 난 아직 그런 이름은 들어보지도 못했다네. 그건 자네가 풋내기라는 것을 의미하지. 실력을 닦고 다시 찾아오게나";
	(*g_pGameStringTable)[STRING_MESSAGE_TEAM_REGIST_FAIL_NAME] = "팀 이름이 이미 쓰이고 있군, 다른 이름을 생각해 보게";
	(*g_pGameStringTable)[STRING_MESSAGE_TEAM_REGIST_FAIL_DENY] = "가입신청이 거부되었습니다";

	(*g_pGameStringTable)[STRING_MESSAGE_TEAM_STARTING_FAIL_ALREADY_JOIN] = "당신은 이미 다른 팀에 가입되어 있습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_TEAM_STARTING_FAIL_QUIT_TIMEOUT] = "자네는 다른 팀을 탈퇴한지 얼마 되지 않았군. 조금 더 신중하게 생각하고 행동하게";
	(*g_pGameStringTable)[STRING_MESSAGE_TEAM_STARTING_FAIL_CANCEL_TIMEOUT] = "자네는 팀을 취소 당한 지 얼마 되지 않았군. 조건에 부합하도록 자신을 좀 더 기르고 오게. 좀 더 신중하게 기회를 엿보도록 하게";
	(*g_pGameStringTable)[STRING_MESSAGE_TEAM_STARTING_FAIL_LEVEL] = "자네는 아직 부족한 점이 많아 보이는구만. 조금 더 실력을 닦고 찾게나.";
	(*g_pGameStringTable)[STRING_MESSAGE_TEAM_STARTING_FAIL_MONEY] = "%s, 팀 등록을 위해서는 돈이 더 필요하다네";
	(*g_pGameStringTable)[STRING_MESSAGE_TEAM_STARTING_FAIL_FAME] = "%s이라.. 난 아직 그런 이름은 들어보지도 못했다네. 그건 자네가 풋내기라는 것을 의미하지. 실력을 닦고 다시 찾아오게나";
	(*g_pGameStringTable)[STRING_MESSAGE_TEAM_STARTING_FAIL_DENY] = "가입신청이 거부되었습니다";

	(*g_pGameStringTable)[STRING_MESSAGE_CLAN_REGIST_FAIL_ALREADY_JOIN] = "어디 한번 볼까? 자네는 이미 다른클랜과 서약을 맺은 상태라고 나와 있군";
	(*g_pGameStringTable)[STRING_MESSAGE_CLAN_REGIST_FAIL_QUIT_TIMEOUT] = "자네는 다른 클랜을 탈퇴한지 얼마되지 않았군. 너무 이리저리 옮겨 다니는 것은 좋지 않지. 신중을 기하게";
	(*g_pGameStringTable)[STRING_MESSAGE_CLAN_REGIST_FAIL_CANCEL_TIMEOUT] = "자네는 클랜을 취소 당한 지 얼마 되지 않았군. 좀 더 신중하게 기회를 엿보도록 하게";
	(*g_pGameStringTable)[STRING_MESSAGE_CLAN_REGIST_FAIL_LEVEL] = "훌륭하지만 우두머리로써의 자질은 좀 부족한 것 같군. 실력을 닦고 오게나.";
	(*g_pGameStringTable)[STRING_MESSAGE_CLAN_REGIST_FAIL_MONEY] = "클랜을 등록하려면 많은 돈이 필요하다네. 자네는 돈이 없어보이는군...";
	(*g_pGameStringTable)[STRING_MESSAGE_CLAN_REGIST_FAIL_FAME] = "%s이라.. 아직 어린 뱀파이어인가보군. 더 많은 피를 마시고 다시 찾아오게나.";
	(*g_pGameStringTable)[STRING_MESSAGE_CLAN_REGIST_FAIL_NAME] = "클랜 이름이 이미 쓰이고 있군, 다른 이름을 생각해 보게";
	(*g_pGameStringTable)[STRING_MESSAGE_CLAN_REGIST_FAIL_DENY] = "가입신청이 거부되었습니다";

	(*g_pGameStringTable)[STRING_MESSAGE_CLAN_STARTING_FAIL_ALREADY_JOIN] = "당신은 이미 다른 클랜에 가입되어 있습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_CLAN_STARTING_FAIL_QUIT_TIMEOUT] = "자네는 다른 클랜을 탈퇴한지 얼마되지 않았군. 너무 이리저리 옮겨 다니는 것은 좋지 않지. 신중을 기하게";
	(*g_pGameStringTable)[STRING_MESSAGE_CLAN_STARTING_FAIL_CANCEL_TIMEOUT] = "자네는 클랜을 취소 당한 지 얼마 되지 않았군. 좀 더 신중하게 기회를 엿보도록 하게";
	(*g_pGameStringTable)[STRING_MESSAGE_CLAN_STARTING_FAIL_LEVEL] = "훌륭한 조력자가 되기에는 자질이 좀 부족한 것 같군. 가서 좀더 수련을 하고 오게나";
	(*g_pGameStringTable)[STRING_MESSAGE_CLAN_STARTING_FAIL_MONEY] = "기술이 월등해도 클랜을 유지할 수 있는 돈이 부족하면 그 클랜은 무너지기 쉽상이지";
	(*g_pGameStringTable)[STRING_MESSAGE_CLAN_STARTING_FAIL_FAME] = "%s이라.. 난 아직 그런 이름은 들어보지도 못했다네. 그건 자네가 풋내기라는 것을 의미하지. 실력을 닦고 다시 찾아오게나";
	(*g_pGameStringTable)[STRING_MESSAGE_CLAN_STARTING_FAIL_DENY] = "가입신청이 거부되었습니다";

	(*g_pGameStringTable)[STRING_MESSAGE_GUILD_REGIST_FAIL_INTRO] = "입력되지 않은 항목이 있습니다.";

	(*g_pGameStringTable)[STRING_STATUS_HP_MAX_1] = "생명력(HP) 최대치가 %d가 되었습니다.";
	(*g_pGameStringTable)[STRING_STATUS_HP_MAX_2] = "생명력(HP) 최대치가 %d이 되었습니다.";
	(*g_pGameStringTable)[STRING_STATUS_MP_MAX_1] = "마법력(MP) 최대치가 %d가 되었습니다.";
	(*g_pGameStringTable)[STRING_STATUS_MP_MAX_2] = "마법력(MP) 최대치가 %d이 되었습니다.";
	(*g_pGameStringTable)[STRING_STATUS_STR_1] = "힘(STR)이 %d가 되었습니다.";
	(*g_pGameStringTable)[STRING_STATUS_STR_2] = "힘(STR)이 %d이 되었습니다.";
	(*g_pGameStringTable)[STRING_STATUS_DEX_1] = "민첩성(DEX)이 %d가 되었습니다.";
	(*g_pGameStringTable)[STRING_STATUS_DEX_2] = "민첩성(DEX)이 %d이 되었습니다.";
	(*g_pGameStringTable)[STRING_STATUS_INT_1] = "지식(INT)이 %d가 되었습니다.";
	(*g_pGameStringTable)[STRING_STATUS_INT_2] = "지식(INT)이 %d이 되었습니다.";
	(*g_pGameStringTable)[STRING_STATUS_LEVEL] = "%d 레벨(Level)이 되었습니다.";

	(*g_pGameStringTable)[STRING_LEARN_SKILL] = "[%s] 기술을 배웠습니다.";
	(*g_pGameStringTable)[STRING_CHANGE_ALIGNMENT] = "성향이 %s으로 바뀌었습니다.";
	(*g_pGameStringTable)[STRING_CHANGE_ALIGNMENT2] = "성향이 %s로 바뀌었습니다.";
	(*g_pGameStringTable)[STRING_CHANGE_TO_BAD_ALIGNMENT] = "성향이 나빠졌습니다.";
	(*g_pGameStringTable)[STRING_CHANGE_TO_GOOD_ALIGNMENT] = "성향이 좋아졌습니다.";

	(*g_pGameStringTable)[STRING_ERROR_INVALID_ID_PASSWORD] = "아이디(ID)나 암호(Password)가 틀렸습니다."; 
	(*g_pGameStringTable)[STRING_ERROR_ALREADY_CONNECTED] = "이미 접속 되어 있습니다."; 
	(*g_pGameStringTable)[STRING_ERROR_ALREADY_REGISTER_ID] = "이미 등록된 아이디(ID)입니다."; 
	(*g_pGameStringTable)[STRING_ERROR_ALREADY_REGISTER_SSN] = "이미 등록된 주민등록번호입니다."; 
	(*g_pGameStringTable)[STRING_ERROR_EMPTY_ID] = "아이디(ID)가 없습니다."; 
	(*g_pGameStringTable)[STRING_ERROR_SMALL_ID_LENGTH] = "아이디(ID)길이가 짧습니다."; 
	(*g_pGameStringTable)[STRING_ERROR_EMPTY_PASSWORD] = "암호(Password)가 없습니다."; 
	(*g_pGameStringTable)[STRING_ERROR_SMALL_PASSWORD_LENGTH] = "암호(Password) 길이가 짧습니다"; 
	(*g_pGameStringTable)[STRING_ERROR_EMPTY_NAME] = "이름이 없습니다."; 
	(*g_pGameStringTable)[STRING_ERROR_EMPTY_SSN] = "주민등록번호가 없습니다."; 
	(*g_pGameStringTable)[STRING_ERROR_INVALID_SSN] = "주민등록번호가 틀렸습니다."; 
	(*g_pGameStringTable)[STRING_ERROR_NOT_FOUND_PLAYER] = "플래이어가 없습니다."; 
	(*g_pGameStringTable)[STRING_ERROR_NOT_FOUND_ID] = "아이디가 없습니다."; 
	(*g_pGameStringTable)[STRING_ERROR_LOGIN_DENY] = "이 계정은 비정상적인 상태입니다. 고객지원센터(darkeden@darkeden.com)로 문의해주세요.";
	(*g_pGameStringTable)[STRING_ERROR_ETC_ERROR] = "잘못되었습니다."; 
	(*g_pGameStringTable)[STRING_ERROR_NOT_ALLOW_ACCOUNT] = "이 계정은 비정상적인 상태입니다. 고객지원센터(darkeden@darkeden.com)로 문의해주세요.";
	(*g_pGameStringTable)[STRING_ERROR_NOT_PAY_ACCOUNT] = "사용기간이 만료되었습니다. 고객지원센터(darkeden@darkeden.com)로 문의해주세요.";

	(*g_pGameStringTable)[STRING_MESSAGE_ITEM_BROKEN] = "아이템이 부서졌습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_WHISPER_FAILED] = "귓속말이 전해지지 않았습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_WHISPER_SELF] = "자신에게는 귓속말을 할 수 없습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_CHAT_IGNORE] = "%s님과의 대화를 거부합니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_CHAT_ACCEPT] = "%s님과의 대화를 허용합니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_CHAT_IGNORE_ALL] = "대화를 모두 거부합니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_CHAT_ACCEPT_ALL] = "대화를 모두 허용합니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_CHAT_BE_GOOD] = "바르고 고운 말을 사용합시다. :)";
	(*g_pGameStringTable)[STRING_MESSAGE_CHAT_ACCEPT_CURSE] = "모든 말을 그대로 다 출력합니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_CHAT_FILTER_CURSE] = "좋지 않은 말은 제거하고 출력합니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_CANNOT_LOGOUT_DIED] = "죽은 상태에서는 로그아웃(Logout)할 수 없습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_CANNOT_GLOBAL_SAY] = "지금은 외치기를 할 수 없습니다.";

	(*g_pGameStringTable)[STRING_MESSAGE_WAIT] = "잠시 기다려 주세요.";
	(*g_pGameStringTable)[STRING_MESSAGE_CONNECTING_SERVER] = "서버에 접속하는 중입니다.";

	(*g_pGameStringTable)[STRING_MESSAGE_DONATION_OK] = "기부했습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_DONATION_FAIL] = "기부 할 수 없습니다.";

	(*g_pGameStringTable)[STRING_MESSAGE_PARTY_REJECTED] = "초대가 거부되었습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_PARTY_NOBODY] = "초대할 사람이 없습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_PARTY_SAFETY_ZONE_ONLY] = "안전지대에서만 할 수 있습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_PARTY_BUSY] = "초대를 할 수 없습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_RACE_DIFFER] = "종족이 다릅니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_NOT_NORMAL_FORM] = "변신 상태에서는 할 수 없습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_NO_AUTHORITY] = "파티 가입후 한 시간이 지나야됩니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_ERROR_PARTY] = "파티를 할 수 없습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_KICK_PARTY_MEMBER_OK] = "%s 님을 파티에서 추방했습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_KICKED_FROM_PARTY] = "%s 님에게 추방당했습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_KICK_PARTY_MEMBER] = "%s 님이 %s 님을 파티에서 추방했습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_REMOVE_PARTY] = "파티가 해체되었습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_REMOVE_PARTY_HIMSELF] = "%s 님이 파티에서 떠났습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_REMOVE_PARTY_MYSELF] = "파티에서 떠났습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_IN_ANOTHER_PARTY] = "이미 다른 파티에 속해 있습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_PARTY_FULL] = "파티 인원이 꽉 찼습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_SOMEONE_JOINED_PARTY] = "%s 님이 파티에 들어왔습니다.";

	(*g_pGameStringTable)[STRING_MESSAGE_LOGOUT_AFTER_SECOND] = "%d초 후에 로그아웃 됩니다.";

	(*g_pGameStringTable)[STRING_MESSAGE_CANNOT_BUY_NO_STAR] = "별이 부족합니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_CANNOT_BUY] = "살 수 없습니다.";

	(*g_pGameStringTable)[STRING_MESSAGE_CAN_REGISTER_NAME] = "등록하실 수 있습니다.";

	// 2002.3.20 추가
	(*g_pGameStringTable)[STRING_MESSAGE_HELP_KEY] = "도움말은 CTRL+H입니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_HOW_TO_GET_BASIC_WEAPON] = "야전사령부의 자크에게서 기본 무기를 받을 수 있습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_WAIT_FOR_CHARACTER_SELECT_MODE] = "   캐릭터 선택창으로 가는 중입니다.     잠시 기다려주세요.";	

	(*g_pGameStringTable)[STRING_MESSAGE_ITEM_TO_ITEM_IMPOSIBLE] = "인챈트(Enchant)할 수 없습니다.";	

	// UI 추가	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CAN_ENCHANT]= "인챈트(Enchant) 할 수 있습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ONLY_PICK_UP_ITEM_ONE]= "한 개씩 들고 하셔야 합니다.";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_SELL_CONFIRM] = "이 아이템을 파시겠습니까?";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ALL_SELL_CONFIRM] = "파시겠습니까?";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ALL_PRICE]= "모두 $%s 입니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_REPAIR_CONFIRM] = "고치시겠습니까?";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CLICK_TRADE_ITEM] = "거래할 아이템을 클릭하세요.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CLICK_REPAIR_ITEM] = "고칠 아이템을 클릭하세요.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CLICK_OK_BUTTON_TO_END] = "끝내시려면 확인 버튼을 클릭하세요.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CLICK_SILVERING_ITEM] = "은도금 할 아이템을 클릭하세요.";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_THIS_ITEM_REPAIR_CONFIRM] = "이 아이템을 고칠까요?";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_THIS_ITEM_CHARGE_CONFIRM] = "이 아이템을 충전 할까요?";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_THIS_ITEM_SILVERING_CONFIRM] = "이 아이템을 은도금 할까요?";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SHOW_ALPHA_WINDOW] ="창을 반투명으로 출력합니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SHOW_NO_ALPHA_WINDOW] = "창을 반투명으로 출력하지 않습니다";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CAN_EQUIP] = "장착 할 수 있습니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CANNOT_EQUIP] = "장착 할 수 없습니다";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_THROW_MONEY] = "돈을 버립니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SHOW_ITEM_DESCRIPTION] = "아이템 설명을 봅니다";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_DEPOSIT_MONEY] = "돈을 보관합니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_INVITE_PARTY] =	"파티 가입초청 메세지가 들어와 있습니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_REQUEST_PARTY] = "파티 가입신청 메세지가 들어와 있습니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_RESURRECTION] = "지정 위치에서 부활한다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_EVACUATION]	= "지정 위치로 후송된다";		
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CANNOT_UP_LEVEL] = "더이상 레벨업이 되지 않습니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CANNOT_UP_STAT]= "더이상 능력치가 올라가지 않습니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TEAM_INFO_JOIN] = "가입합니다";
	
	
	// UI_TIP
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TIP_SELL_ALL_VAMPIRE_HEAD]="팁 : 뱀파이어의 머리들을 한꺼번에 팔려면 오른쪽 클릭을 하세요.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TIP_REPAIR_ALL_ITEM] = "팁 : 장비들을 한꺼번에 고치려면 오른쪽 클릭을 하세요.";

	// UI 메인창 Description	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_AUTO_HIDE_ON] = "자동숨김 켬";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_AUTO_HIDE_OFF] = "자동숨김 끔";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GAME_MENU] = "게임메뉴";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MENU] = "메뉴(Menu)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_EXP] = "경험치(Exp)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TEAM] = "팀(Team)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MESSAGE] = "메세지(Message)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_HELP] = "도움말(Help)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_INVENTORY] = "아이템창(Inventory)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GEAR_WINDOW] = "장착창(Gear Window)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_INFO_WINDOW] = "정보창(Info Window)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_PARTY_WINDOW] = "파티창(Party Window)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_QUEST_WINDOW] = "퀘스트(Quest Window)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TEAM_INFO] = "팀 정보(Team Info)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TEAM_MEMBER_LIST] = "팀원 리스트(Team Member List)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BASIC_HELP] = "기본 도움말";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CHATTING_HELP] = "채팅 도움말";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_WAR_HELP] = "전투 도움말";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SKILL_HELP] = "기술 도움말";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TEAM_HELP] = "팀 도움말";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CLAN] = "클랜(Clan)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CLAN_INFO] = "클랜 정보(Clan Info)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CLAN_MEMBER_LIST] = "클랜원 리스트(Clan Member List)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CLAN_HELP] = "클랜 도움말";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MAGIC_HELP] = "마법 도움말";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_CURRENT_EXP] = "현재 경험치 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_NEXT_LEVEL] =  "다음   레벨 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_LEFT_EXP] = "남은 경험치 : ";	

	(*g_pGameStringTable)[UI_STRING_MESSAGE_EQUIP_HELM] = "모자를 장착합니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_EQUIP_NECKLACE] = "목걸이를 장착합니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_EQUIP_ARMOR] = "갑옷을 장착합니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_EQUIP_SHIELD] = "방패를 장착합니다";	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_EQUIP_WEAPON] = "무기를 장착합니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_EQUIP_GLOVE] = "장갑을 장착합니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_EQUIP_BELT]	= "벨트를 장착합니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_EQUIP_TROUSER] = "바지를 장착합니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_EQUIP_BRACELET]	= "팔찌를 장착합니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_EQUIP_RING]	= "반지를 장착합니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_EQUIP_SHOES] = "신발을 장착합니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_EQUIP_VAMPIRE_COAT] = "옷을 장착합니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_EQUIP_EARRING] = "귀걸이를 장착합니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_EQUIP_AMULET] =	"아뮬렛을 장착합니다";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_FIRST_GEAR_SET] = "첫번째 무기셋";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SECOND_GEAR_SET] = "두번째 무기셋";

	// 채팅
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SPECIAL_CHARACTER] = "특수문자";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SET_LETTER_COLOR] = "글씨색지정";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CHANGE_INPUT_LANGUAGE] ="한/영 전환";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SHOW_WHISPER_ID] ="귓속말 했던 아이디 보기";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_NORMAL_CHATING]	= "일반채팅 하기";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ZONE_CHATTING]	= "존채팅 하기";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_WHISPER_CHATTING] =	"귓속말 하기";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_PARTY_CHATTING]	= "파티채팅 하기";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TEAM_CHATTING] = "팀채팅 하기";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SHOW_NORMAL_CHATTING] = "일반채팅 보기";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SHOW_ZONE_CHATTING]	= 	"존채팅 보기";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SHOW_WHISPER_CHATTING] = "귓속말 보기";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SHOW_PARTY_CHATTING] = "파티채팅 보기";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SHOW_TEAM_CHATTING]	= "팀채팅 보기";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_NOT_SHOW_NORMAL_CHATTING] = "일반채팅 안보기";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_NOT_SHOW_ZONE_CHATTING]	= "존채팅 안보기";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_NOT_SHOW_WHISPER_CHATTING] = "귓속말 안보기";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_NOT_SHOW_PARTY_CHATTING] = "파티채팅 안보기";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_NOT_SHOW_TEAM_CHATTING]	= "팀채팅 안보기";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_NOT_SHOW_CLAN_CHATTING]	= "클랜채팅 안보기";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SHOW_CLAN_CHATTING]	= "클랜채팅 보기";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CLAN_CHATTING] = "클랜채팅 하기";

	// Party Window
	(*g_pGameStringTable)[UI_STRING_MESSAGE_EXPEL] = "탈퇴";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SECEDE] = "추방";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SET_INVITE_DENY_MODE] = "초청 거부모드 설정";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CANCEL_INVITE_DENY_MODE] = "초청 거부모드 해제";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SET_JOIN_DENY_MODE] = "가입 거부모드 설정";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CANCEL_JOIN_DENY_MODE] = "가입 거부모드 해제";
		
	// Level Up
	(*g_pGameStringTable)[UI_STRING_MESSAGE_UP_STR] = "힘을 올립니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_UP_DEX]	= "민첩성을 올립니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_UP_INT]	= "지식을 올립니다";

	// INFO WINDOW
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SHOW_BLADE_INFO] = "도계열의 정보를 봅니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SHOW_SWORD_INFO] = "검계열의 정보를 봅니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SHOW_GUN_INFO] = "총계열의 정보를 봅니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SHOW_HEAL_INFO] = "회복계열의 정보를 봅니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SHOW_ENCHANT_INFO] = "축복계열의 정보를 봅니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SHOW_ALL_INFO] = "전체계열의 정보를 봅니다";	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SHOW_POISON_INFO] =	"독계열의 정보를 봅니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SHOW_ACID_INFO]	= "산계열의 정보를 봅니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SHOW_CURSE_INFO] = "저주계열의 정보를 봅니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SHOW_SUMMON_INFO] = "소환계열의 정보를 봅니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SHOW_BLOOD_INFO] = "혈계열의 정보를 봅니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SHOW_ESSENCE_INFO] = "고유계열의 정보를 봅니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SHOW_SKILL_INFO_WINDOW]	= "스킬 정보창을 봅니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SHOW_CHARACTER_INFO_WINDOW]	= "캐릭터 정보창을 봅니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SHOW_MAGIC_INFO_WINDOW]	= "마법 정보창을 봅니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SHOW_ADVANTE_INFO_WINODW] = "전직 정보창을 봅니다";
	
	// SHOW HELP WINDOW
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SHOW_HELP_INVENTORY_WINDOW] = "인벤토리(Inventory)창의 도움말을 봅니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SHOW_HELP_GEAR_WINDOW] = "장착(Gear)창의 도움말을 봅니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SHOW_HELP_CHARACTER_INFO_WINDOW]= "캐릭터 정보창의 도움말을 봅니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SHOW_HELP_MAGIC_INFO_WINDOW]= "마법 정보창의 도움말을 봅니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SHOW_HELP_SKILL_INFO_WINDOW]= "스킬 정보창의 도움말을 봅니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SHOW_HELP_PARTY_MANAGER] = "파티(PartyManager)창의 도움말을 봅니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SHOW_HELP_SHOP_WINDOW] ="상점(Shop)창의 도움말을 봅니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SHOW_HELP_STORAGE_WINDOW]="보관함(Storage)창의 도움말을 봅니다";
	
	// Close Window
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CLOSE_MAGIC_INFO_WINDOW] = "마법 정보창을 닫습니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CLOSE_SKILL_INFO_WINDOW] = "스킬 정보창을 닫습니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CLOSE_PARTY_MANAGER] = "파티(PartyManager)창을 닫습니다";	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CLOSE_CHARACTER_INFO_WINDOW] = "캐릭터 정보창을 닫습니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CLOSE_INVENTORY_WINDOW] = "인벤토리(Inventory)창을 닫습니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CLOSE_GEAR_WINDOW] = "장착(Gear) 창을 닫습니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CLOSE_DESC_WINDOW] ="설명창을 닫습니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CLOSE_WINDOW]="창을 닫습니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CLOSE_SHOP_WINDOW] ="장착(Shop)창을 닫습니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CLOSE_STORAGE_WINDOW]="보관함(Storage)창을 닫습니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CLOSE_BOOKCASE]= "책장을 닫습니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CLOSE_BOOK] = "책을 닫습니다";
	
	// 기타
	(*g_pGameStringTable)[UI_STRING_MESSAGE_NOT_JOIN_ANY_TEAM] ="등록된 팀 없음";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_NOT_JOIN_ANY_CLAN] ="등록된 클랜 없음";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_INFRA_RED_HELMET]="인프라레드 스캐닝 헬멧";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_INFRA_HELMET]="인프라 스캐닝 헬멧";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_QUIT_COMPUTER] ="컴퓨터를 종료합니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SHOW_NEXT_PAGE]="다음 페이지를 봅니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SHOW_PREV_PAGE] = "이전 페이지를 봅니다";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_ENG_STR] = "STR ";						// STR
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ENG_DEX] = "DEX ";						// DEX
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ENG_INT] = "INT ";				// INT

	(*g_pGameStringTable)[UI_STRING_MESSAGE_MASTER_NAME] = "GM";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_LIMIT_STRING_COUNT] = "도배하지 마세요!!!";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_HELP_MESSAGE] = "도움말";	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_STR]= "힘";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DEX]= "민첩성";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_INT]= "지식";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_HP]	= "생명력";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MP] = "마법력";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ACCURACY] = "명중률";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DAMAGE]	= "데미지";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_AVOID]	= "회피율";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DEFENCE]= "방어율";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ALIGNMENT] = "성향";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_ALIGN_VERY_BAD]="매우 악함";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ALIGN_BAD] ="악함";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ALIGN_NORMAL] ="중립";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ALIGN_GOOD]	 ="선함";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ALIGN_VERY_GOOD] ="매우 선함";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_STR_PURE] =	"순   수   힘 : %d";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DEX_PURE] =	"순수  민첩성 : %d";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_INT_PURE] =	"순 수  지 식 : %d";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_STATUS_SUM_PURE] =	"순수능력치합 : %d";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_STATUS_SUM]	="능 력 치  합 : %d";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_SPEED_SLOW] ="느림";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SPEED_NORMAL] =	"보통";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SPEED_FAST]	="빠름";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ATTACK_SPEED] =	"공격속도 : %s[%d]";

	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_PASSIVE]= "Passive";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_HAN_PASSIVE] ="패시브";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_HPBAR_LEVEL_DESCRIPTION] ="레벨 :%d";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_HPBAR_EXP_DESCRIPTION] ="경험치(EXP):%s/%s (남은 경험치:%s)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_HPBAR_MP_DESCRIPTION] =	"마법력(MP):%d/%d";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_HPBAR_HP_DESCRIPTION_WITH_SILVERING] = "생명력(HP):%d/%d(S:%d)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_HPBAR_HP_DESCRIPTION] =	"생명력(HP):%d/%d";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_HPBAR_CHANGE_VAMPIRE_DAY] =	"%d일 %d시간 %d분 후에 뱀파이어로 변합니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_HPBAR_CHANGE_VAMPIRE_HOUR] ="%d시간 %d분 후에 뱀파이어로 변합니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_HPBAR_CHANGE_VAMPIRE_MINUTE] ="%d분 후에 뱀파이어로 변합니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_HPBAR_CHANGE_VAMPIRE_SOON]	="곧 뱀파이어로 변합니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_HPBAR_SET_LARGE] ="생명력(HP) 창을 세로로 봅니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_HPBAR_SET_SMALL] ="생명력(HP) 창을 작게 봅니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_HPBAR_SET_WIDTH] ="생명력(HP) 창을 가로로 봅니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_HPBAR_SET_HEIGHT] = "생명력(HP) 창을 크게 봅니다";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_SHOW_WIDTH] ="가로로 봅니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SHOW_HEIGHT] ="세로로 봅니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SHOW_HELP]=	"도움말을 봅니다";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_REGIST]	="등록합니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_LIST_UP]="윗목록";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_LIST_DOWN]	="아래목록";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_REFRESH_LIST]="목록을 다시 받아옵니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SORT_TEAM_NAME]	="팀이름으로 정렬합니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SORT_LEADER_NAME]	="리더이름으로 정렬합니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SORT_EXPIRE_DATE]="만기일로 정렬합니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SORT_NUMBER_MEMBER]="멤버수로 정렬합니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SORT_RANKING]="순위로 정렬합니다";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_CHANGE_FIND_MODE]="검색 방법 변경";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_FIND]="검색하기";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_TEAM_GRADE_MASTER]="마스터";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TEAM_GRADE_SUB_MASTER]="서브 마스터";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TEAM_GRADE_WAIT]="등록 대기자";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TEAM_GRADE_MEMBER]="회원";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_TEAM_INFO_GRADE] = "등급(Grade) : %s";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TEAM_INFO_NAME] = "이름(Name) : %s";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TEAM_INFO_LEADER] = "리더(Leader) : %s";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TEAM_INFO_REG_FEE] = "가입비(Reg. Fee) : $%s";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TEAM_INFO_MEMBERS] = "회원(Members) : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TEAM_INFO_INTRODUCTION] = "소개(Introduction) : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TEAM_INFO_CLAN_INTRODUCTION] = "클랜 소개(Clan Introduction) : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TEAM_INFO_TEAM_INTRODUCTION] = "팀 소개(Team Introduction) : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TEAM_INFO_RANKING]="순위(Ranking) : %d";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_TEAM_INFO_TEAM_NAME] = "팀 이름(Team Name) : %s";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TEAM_INFO_CLAN_NAME] = "클랜 이름(Clan Name) : %s";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TEAM_INFO_REGISTRATION_FEE] = "가입비(Registration Fee) : $%s";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TEAM_INFO_SELF_INTRODUCTION]= "자기 소개(Self Introduction) : ";


	(*g_pGameStringTable)[UI_STRING_MESSAGE_UP] = "위로";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DOWN] = "아래로";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TEAM_INFO_EXPEL] = "추방합니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TEAM_INFO_JOIN_ACCEPT]="가입허가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TEAM_INFO_JOIN_DENY] = "가입거부";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CANCEL]="취소";

	
	// Zone Name

	(*g_pGameStringTable)[UI_STRING_MESSAGE_LIMBOLAIR]="림보성";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ESLANIA]="에슬라니안";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_RODIN]=	"로딘산";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DROBETA]="드로베타";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_PERONA]="페로나국도";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TIMORE]="티모르 호수";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_ZONEINFO_XY] = "X:%d Y:%d";
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_ESLANIA_NE]	="에슬라니안 NE"; 
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_ESLANIA_NW]	="에슬라니안 NW"; 
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_ESLANIA_SE]	="에슬라니안 SE"; 
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_ESLANIA_SW]	="에슬라니안 SW";
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_LIMBOLAIR_NE]="림보성 NE"; 
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_LIMBOLAIR_NW]="림보성 NW"; 
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_LIMBOLAIR_SE]="림보성 SE"; 
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_LIMBOLAIR_SW]="림보성 SW";
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_DROBETA_NE]	="드로베타 NE"; 
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_DROBETA_NW]	="드로베타 NW"; 
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_DROBETA_SE]	="드로베타 SE"; 
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_DROBETA_SW]	="드로베타 SW";
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_RODIN_NE]="로딘산 NE"; 
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_RODIN_NW]="로딘산 NW"; 
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_RODIN_SE]="로딘산 SE"; 
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_RODIN_SW]="로딘산 SW";
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_TIMORE_NE]="티모르 호수 NE"; 
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_TIMORE_NW]="티모르 호수 NW"; 
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_TIMORE_SE]="티모르 호수 SE"; 
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_TIMORE_SW]="티모르 호수 SW";
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_PERONA_NE]="페로나 NE"; 
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_PERONA_NW]="페로나 NW"; 
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_PERONA_SE]="페로나 SE"; 
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_PERONA_SW]="페로나 SW";
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_UNDERGROUND_WATERWAY]="지하 수로"; 
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_ESLANIA_DUNGEON]="에슬라니안 던전"; 
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_IN_LIMBOLAIR]="림보성 내부";
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_LIMBOLAIR_DEONGEON]	="림보성 던전"; 
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_EVENTOX]="이벤트 OX"; 		
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_EVENT_STADIUM]	="이벤트 경기장"; 
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_IN_RASENCASTLE]	="라센성 내부"; 
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_KALI_CAVE]	="칼리 석굴"; 
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_RASEN_TRAINING]	="라센 에이나몬"; 
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_PEIAC_TUNNEL]="페이악 터널";
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_BATHORY_B1]	="바토리 던전 B1"; 
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_BATHORY_B2]	="바토리 던전 B2"; 
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_BATHORY_B3]	="바토리 던전 B3"; 
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_BATHORY_B4]	="바토리 던전 B4"; 
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_BATHORY_LAIR]	="바토리 레어"; 
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_GHORGOBA_TUNNEL]="고르고바 터널";
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_RASEN_YARD]	="라센 외성 1F"; 
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_CASTLE_RASEN_1F]="라센 내성 1F"; 
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_CASTLE_RASEN_2F]="라센 내성 2F"; 
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_TEPES_LAIR]	="테페즈 레어";
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_SLAYER_BATTLEZONE1]="라옴 성지";
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_SLAYER_BATTLEZONE2]="테메리에 성지"; 
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_BATHORY_BATTLEZONE]	="힐라놈 성지"; 
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_RASEN_BATTLEZONE]="아이센 성지";
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_GUILD_ARMY_B1]="군인 길드 B1"; 
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_GUILD_ARMY_1F]="군인 길드 1F"; 
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_GUILD_ARMY_2F]="군인 길드 2F"; 
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_GUILD_ARMY_3F]="군인 길드 3F"; 
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_GUILD_ARMY_4F]="군인 길드 옥상";
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_GUILD_CELRIC_B1]="성직자 길드 B1"; 
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_GUILD_CELRIC_1F]="성직자 길드 1F"; 
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_GUILD_CELRIC_2F]="성직자 길드 2F"; 
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_GUILD_CELRIC_3F]="성직자 길드 3F"; 
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_GUILD_CELRIC_4F]="성직자 길드 옥상";
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_GUILD_KNIGHT_B1]="무사 길드 B1";
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_GUILD_KNIGHT_1F]="무사 길드 1F";
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_GUILD_KNIGHT_2F]="무사 길드 2F";
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_GUILD_KNIGHT_3F]="무사 길드 3F"; 
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_GUILD_KNIGHT_4F]="무사 길드 옥상";
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_TUTORIAL_N]	="야전사령부"; 
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_TUTORIAL_S]	="시 외곽지역";
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_GUILD_HOUSE]="길드 아지트";
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_CLAN_HOUSE]	="클랜 아지트";
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_LOST_TAIYAN_B1]	="로스트 타이얀 B1";
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_LOST_TAIYAN_B2]	="로스트 타이얀 B2";	
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_ASYLION_DUNGEON]="아실리온 던젼";
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_TAKE_HELICOPTER]="헬기 탑승";
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_TAKE_ELIVATOR]=	"엘리베이터";
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_UNKNOW]	= "알 수 없음";

	// Accelerator Name
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ACCELERATOR_NULL]	="AcceleratorNULL";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ACCELERATOR_F1]	="F1";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ACCELERATOR_F2]	="F2";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ACCELERATOR_F3]	="F3";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ACCELERATOR_F4]	="F4";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ACCELERATOR_F5]	="F5";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ACCELERATOR_F6]	="F6";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ACCELERATOR_F7]	="F7";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ACCELERATOR_F8]	="F8";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ACCELERATOR_F9]	="F9";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ACCELERATOR_F10]="F10";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ACCELERATOR_F11]="F11";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ACCELERATOR_F12]="F12";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ACCELERATOR_ESC]="ESC";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ACCELERATOR_SKILL]="SKILL";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ACCELERATOR_INVENTORY]=	"INVENTORY";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ACCELERATOR_GEAR]="GEAR";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ACCELERATOR_CHARINFO]="CHARINFO";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ACCELERATOR_SKILLINFO]=	"SKILLINFO";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ACCELERATOR_MINIMAP]="MINIMAP";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ACCELERATOR_PARTY]="PARTY";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ACCELERATOR_MARK]="MARK";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ACCELERATOR_HELP]="HELP";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ACCELERATOR_QUICKITEM_SLOT]="QUICKITEM_SLOT";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ACCELERATOR_EXTEND_CHAT]="EXTEND_CHAT";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ACCELERATOR_CHAR]="CHAT";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ACCELERATOR_GUILD_CHAT]="GUILD_CHAT";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ACCELERATOR_ZONE_CHAT]=	"ZONE_CHAT";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ACCELERATOR_WHISPER]="WHISPER";

	// Item Class Name
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ITEM_CLASS_SWORD]="검(SWORD)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ITEM_CLASS_BLADE]="도(BLADE)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ITEM_CLASS_CROSS]="십자가(CROSS)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ITEM_CLASS_MACE]="메이스(MACE)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ITEM_CLASS_MINE]="지뢰(MINE)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ITEM_CLASS_BOMB]="폭탄(BOMB)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ITEM_CLASS_MINE_MATERIAL]="지뢰 재료(MINE MATERIAL)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ITEM_CLASS_BOMB_MATERIAL]=	"폭탄 재료(BOMB MATERIAL)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ITEM_CLASS_SG]=	"산탄총(SG)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ITEM_CLASS_SMG]="자동소총(SMG)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ITEM_CLASS_AR]=	"소총(AR)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ITEM_CLASS_SR]="저격총(SR)";
	
	// Description Dialog
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_CLASS]="계열 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_DURABILITY]="내구성 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_SILVERING]="은도금 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_DAMAGE]="데미지 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_CRITICALHIT]="크리티컬 히트 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_DEFENSE]	="회피율 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_PROTECTION]="방어율 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_ACCURACY]="명중률 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_HP]="생명력(HP) : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_MP]="마법력(MP) : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_RANGE]	="사정거리 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_MAGAZINE_NUM]	="탄환수 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_POCKET_NUM]	="주머니 개수 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_ITEM_NUM]	="아이템 개수 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_LEFT_NUM]	="남은 사용회수 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_ARRIVAL_LOCATION]	="도착위치 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_NOT_EXIST]	="없음";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_NUMBER] = "개";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_MAGAZINE_COUNT]= "발";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_TILE_PIECE] = "칸";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_PARTY_NAME] = "파티";		
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_OPTION] ="옵션 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_REQUIRE] = "요구조건 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_REQUIRE_STAT] = "%d 이상";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_ONLY_MALE] = "남성용";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_ONLY_FEMALE] = "여성용";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_ONLY_SLAYER] = "슬레이어 전용";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_ONLY_VAMPIRE] = "뱀파이어 전용";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_ALL_STAT_SUM] = "능력치 총합 ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_LEVEL]="레벨 ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_PRICE] = "가격 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_SILVERING_PRICE] ="은도금 가격 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_CHARGE_PRICE] = "충전가격 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_REPAIR_PRICE] = "수리가격 : ";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_CONSUME_HP]	= "생명력(HP)소모량 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CONSUME_MP] = "마법력(MP)소모량 : ";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_REQUIRE_LEVEL] = "요구 레벨 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_EXP]="경험치 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_LIMIT_LEVEL]="성장제한레벨 : ";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_CANNOT_LEARN_SKILL]= "\"아직 배울 수 없습니다.\"";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_CAN_LEARN_SKILL] ="\"배울 수 있습니다.\"";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_MOVE] ="이동합니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CANCEL_MOVE] = "이동을 취소합니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MOVE_F1] = "1층으로 갑니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MOVE_F2] = "2층으로 갑니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MOVE_F3] = "3층으로 갑니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MOVE_F4] = "4층으로 갑니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MOVE_B1] = "지하1층으로 갑니다";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_CLICK_EXCHANGE] =	"교환하시려면 눌러주세요";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_CANCEL_OK_BUTTON] = "OK한것을 취소합니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_CANCEL_EXCHANGE] = "교환하기로 한 걸 취소합니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_SHOW_EXCHANGE_WINDOW] ="교환(Exchange)창의 도움말을 봅니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_BRING_MONEY] =	"교환하기로 한 돈을 되찾습니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_EXCHANGE_MONEY] ="돈을 교환합니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_EXCHANGE_YOUR_MONEY] ="상대방이 교환하기로 한 돈";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_LEFT_MONEY_AFTER_EXCHANGE] ="교환하고 나면 남는 금액";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_WILL_EXCHANGE_MONEY] = "교환할 금액";


	(*g_pGameStringTable)[UI_STRING_MESSAGE_TRHOW_MONEY_IN_DIALOG] = "버릴 금액을 입력하세요.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SAVE_MONEY_IN_DIALOG] = "보관할 금액을 입력하세요.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BRING_MONEY_IN_DIALOG] = "찾을 금액을 입력하세요.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TRADE_MONEY_IN_DIALOG] = "거래할 금액을 입력하세요.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DIVIDE_MONEY_IN_DIALOG] = "빼낼 금액을 입력하세요.";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_BUY_ITEM] ="이 아이템을 사시겠습니까?";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BUY_ITEM_NUM] = "이 아이템            개를 사시겠습니까?";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ASK_DIALOG_BUY_STORAGE] = "보관함을 $%d에 사시겠습니까?";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ASK_DIALOG_TRADE_OTHER_PLAYER]= "%s 님과 거래하겠습니까?";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ASK_DIALOG_WAIT_OTHER_PLAYER]= "%s 님의 응답을 기다립니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ASK_DIALOG_CANCEL]	="취소하시려면 취소버튼을 누르세요.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ASK_DIALOG_REQUEST_JOIN]= "%s 님이 당신의 %s에 가입을 요청하고 있습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ASK_DIALOG_INVITE]= "%s 님이 당신을 %s에 초청하셨습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CANNOT_FIND_RESULT]= "검색 결과를 찾을 수 없습니다." ;
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ENCHANT_CONFIRM]= "이 아이템을 인챈트(Enchant)하시겠습니까?";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_DIALOG_ITEM_CLASS_SG] = "\t계열 : SG";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_DIALOG_ITEM_CLASS_SMG] = "\t계열 : SMG";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_DIALOG_ITEM_CLASS_AR] = "\t계열 : AR";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_DIALOG_ITEM_CLASS_SR] = "\t계열 : SR";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_DIALOG_DURABILITY]="\t내구성 : %d";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_DIALOG_SILVERING]= "\t은도금 : %d";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_DIALOG_DAMAGE]= "\t데미지 : %d~%d";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_DIALOG_CRITICALHIT]= "\t크리티컬 히트 : %d";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_DIALOG_DEFENSE]= "\t회피율 : %d";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_DIALOG_PROTECTION]= "\t방어율 : %d";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_DIALOG_ACCURACY]= "\t명중률 : %d";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_DIALOG_HP]= "\tHP : +%d";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_DIALOG_MP]= "\tMP : +%d";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_DIALOG_RANGE]= "\t사정거리 : %d 칸";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_DIALOG_MAGAZINE_NUM]= "\t탄환수 : %d 발";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_DIALOG_POCKET_NUM]= "\t주머니 개수 : %d 개";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_DIALOG_OPTION]="\t옵션 : %s +%d";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_DIALOG_OPTION2]="\t옵션 : %s";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_DIALOG_OPTION_EMPTY]="\t       %s +%d";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_DIALOG_OPTION_EMPTY2]="\t       %s";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_DIALOG_REQUIRE_EMPTY]= "\t           ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_DIALOG_REQUIRE]="\t요구조건 : ";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_DIALOG_REQUIRE_STR]= "STR %d 이상";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_DIALOG_REQUIRE_DEX] ="DEX %d 이상";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_DIALOG_REQUIRE_INT]  ="INT %d 이상";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_DIALOG_REQUIRE_ALL_STAT_SUM] = "능력치 총합 %d 이상";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_DIALOG_REQUIRE_LEVEL] ="레벨 %d 이상";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_DIALOG_PRICE] = "\t가격 : %s";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_FILE_DIALOG_SELECT_PROFILE_PICTURE]="프로필에 쓰일 사진을 선택하세요.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_FILE_DIALOG_SELECT_FILE]="전송할 파일들을 선택하세요(복수선택CTRL).";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_FILE_DIALOG_SELECT_FILE_OK]="해당 파일을 선택합니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_FILE_DIALOG_CANCEL]="취소하고 창을 닫습니다";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_ENG_DOMAIN_BLADE]="BLADE";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ENG_DOMAIN_SWORD]="SWORD";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ENG_DOMAIN_ENCHANT]="ENCHANT";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ENG_DOMAIN_GUN]	="GUN";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ENG_DOMAIN_HEAL]="HEAL";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_NOT_SUPPORT_MENU]    ="아직 지원되지 않는 메뉴입니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_NOT_INPUT_ID_OR_PASSWORD]    ="아이디(ID) 또는 암호(Password)를 입력하지 않았습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_WRONG_SSN]="주민등록번호입력이 바르지 않습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_INPUT_NAME] ="이름을 입력하세요.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CANNOT_CONNECT_SERVER]    ="서버에 연결할 수 없습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SELECT_CHARACTER] ="캐릭터를 선택하세요.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DELETE_CHARACTER] ="캐릭터가 삭제되었습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ALL_SLOT_EMPTY] ="캐릭터를 새로 만들고, 만들어진 캐릭터를 선택하셔야 합니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_NO_MORE_CREATE_CHARACTER] ="캐릭터를 더 이상 만들 수 없습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_FAIL_CREATE_CHARACTER] ="캐릭터 생성에 실패하였습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_NO_INPUT_NEED_INFO] ="필수항목이 모두 입력되지 않았습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ALREADY_USE_ID] ="사용중인 아이디(ID) 입니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CAN_USE_ID] ="사용하실 수 있는 아이디(ID) 입니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_RE_INPUT_PASSWORD] ="비밀번호를 다시 입력하세요.";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_NAME_TNDEAD] ="터닝데드";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_NAME_ARKHAN] ="알칸";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_NAME_ESTROIDER] ="에스트로이더";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_NAME_GOLEMER] =	"골레머";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_NAME_DARKSCREAMER] ="다크스크리머";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_NAME_DEADBODY] ="데드바디";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_NAME_MODERAS] =	"모데라스";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_NAME_VANDALIZER] ="밴덜라이저";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_NAME_DIRTYSTRIDER] ="더티스트라이더";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_NAME_HELLWIZARD] ="헬위자드";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_NAME_TNSOUL] ="터닝소울";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_NAME_IRONTEETH] ="아이언티쓰";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_NAME_REDEYE] ="레드아이";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_NAME_CRIMSONSLAUGTHER] ="크림슨슬로터";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_NAME_HELLGUARDIAN] ="헬가디언";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_NAME_SOLDIER] =	"솔져";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_NAME_RIPPER] ="리퍼";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_NAME_BIGFANG] =	"빅팽";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_NAME_LORDCHAOS] ="로드카오스";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_NAME_CHAOSGUARDIAN] ="카오스가디언";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_NAME_HOBBLE] ="호블";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_NAME_CHAOSNIGHT] ="카오스나이트";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_NAME_WIDOWS] ="위도우스";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_NAME_KID] ="키드";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_NAME_SHADOWWING] ="섀도우윙";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_SERVER_STATUS_VERY_GOOD]="매우 좋음";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SERVER_STATUS_GOOD]	="좋음";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SERVER_STATUS_NORMAL]="원활";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SERVER_STATUS_BAD]="보통";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SERVER_STATUS_VERY_BAD]	="타서버 이용권장";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SERVER_STATUS_DOWN]	="서버 다운";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SERVER_STATUS_OPEN]	="열림";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SERVER_STATUS_CLOSE]="닫힘";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_ITEM_TYPE_NORMAL] ="일반 아이템";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ITEM_TYPE_SPECIAL] ="특수 아이템";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ITEM_TYPE_MISTERIOUS] ="알수없는 아이템";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_STORAGE_FIRST]="첫번째 보관함";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_STORAGE_SECOND]="두번째 보관함";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_STORAGE_THIRD]="세번째 보관함";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_STORAGE_FOURTH]="네번째 보관함";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_STORAGE_FIVE]="다섯번째 보관함";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_BRING_MONEY_FROM_STORAGE]="돈을 찾습니다";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_CHAR_DELETE]="삭제합니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CHAR_CANCEL]="취소합니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CHAR_DELETE_CONFIRM]="이 캐릭터를 정말 삭제하시겠습니까?";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_RE_INPUT_CORRECT_SSN]="주민등록번호를 정확히 입력하세요.";	

	// 캐릭터 관리 화면
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CHAR_MANAGER_NAME]="이름 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CHAR_MANAGER_LEVEL]="레벨 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CHAR_MANAGER_STR_PURE]="순수힘 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CHAR_MANAGER_DEX_PURE]="순수민첩성 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CHAR_MANAGER_INT_PURE]="순수지식 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CHAR_MANAGER_SWORD_LEVEL]="검 도메인 레벨 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CHAR_MANAGER_BLADE_LEVEL]="도 도메인 레벨 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CHAR_MANAGER_GUN_LEVEL]="총 도메인 레벨 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CHAR_MANAGER_HEAL_LEVEL]="회복 도메인 레벨 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CHAR_MANAGER_ENCHANT_LEVEL]="축복 도메인 레벨 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CHAR_MANAGER_FAME]="명성 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CHAR_MANAGER_CREATEMSG1]="만들기를 누르시면 새 캐릭터를";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CHAR_MANAGER_CREATEMSG2]="만드실 수 있습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CHAR_MANAGER_GRADE] = "계급 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CHAR_MANAGER_GRADE_EXP] = "계급 경험치 : ";

	// Title Version
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CLIENT_VERSION]="버전";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_NETMARBLE_CLIENT_VERSION]="넷마블 버전";


	// Option Menu
	(*g_pGameStringTable)[UI_STRING_MESSAGE_OPTION_MENU_3D_ACCEL]="3D 가속 사용하기";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_OPTION_MENU_ALPHA_HPBAR]="투명한 HP(MP)바";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_OPTION_MENU_SHED_BLOOD]="(HP 30% 이하일 때) 피흘리기";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_OPTION_MENU_HIDE_SOFT]=	"창 자동숨김 부드럽게";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_OPTION_MENU_GAME_BRIGHT]="게임 밝기";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_OPTION_MENU_CHATTING_TALK]=	"채팅 말풍선으로 보기";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_OPTION_MENU_PUT_FPS]="FPS출력";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_OPTION_MENU_WINDOW_ALPHA]="기본창 반투명하기";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_OPTION_MENU_DENSITY_ALPHA]=	"반투명 농도";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_OPTION_MENU_SOUND_VOLUME]="효과음 크기";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_OPTION_MENU_MUSIC_VOLUME]="배경음악 크기";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_OPTION_MENU_SHOW_BASIC_HELP]="초보자용 도움말 보기";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_OPTION_MENU_NO_LISTEN_BAD_TALK]="나쁜말 듣지 않기",
	(*g_pGameStringTable)[UI_STRING_MESSAGE_OPTION_MENU_LOAD_ALL_IMAGE]	="맵이동할 때 몬스터 이미지 불러오기";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_OPTION_MENU_CHATTING_COLOR_WHITE]="채팅 모두 흰색으로 보기",
	(*g_pGameStringTable)[UI_STRING_MESSAGE_OPTION_MENU_RUN_TEEN_VERSION]="틴버젼으로 보기";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_OPTION_MENU_OPEN_WINDOW_WHEN_WHISPER]="귓속말 왔을때 채팅창 띄우기";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_OPTION_NOT_SEND_MY_INFO]= "내 캐릭터 정보 비공개";

	// Grade
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GRADE_PIVATE] =	"피베이트";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GRADE_SERENT] =	"서런트";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GRADE_FEACEL] =	"피셀";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GRADE_LITENA] =	"리테나";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GRADE_KAINEL] =	"케이널";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GRADE_GENEAL] =	"지니얼";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GRADE_FORE_GENEAL] = "포어 지니얼";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GRADE_MAJORIS_GENEAL] =	"메이저리스 지니얼";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GRADE_CLOEL_GENEAL] = "클로엘 지니얼";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GRADE_MARSHAL] = "마샬";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_GRADE_RITTER]="리터";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GRADE_REICHSRITTER]	="라히스리터";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GRADE_BARONET]="바로네트";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GRADE_PREYHER]="프라이헤르";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GRADE_GRAF]	="그라프";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GRADE_MARKGRAF]	="마르크그라프";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GRADE_PFALZGRAF]="팔츠그라프";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GRADE_FURST]="퓌르스트";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GRADE_HERZOG]="헤르초크";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GRADE_LANDESHER]="란데스헤르";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_OPTION_MENU_MSG1]= "새로 지정할 단축키를 입력하세요.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_OPTION_MENU_MSG2]= "취소하고 싶으시면 ESC키를 누르세요.";

	// OTHER INFO
	(*g_pGameStringTable)[UI_STRING_MESSAGE_OTHER_INFO_STR_PURE]="순수힘 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_OTHER_INFO_DEX_PURE]="순수민첩성 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_OTHER_INFO_INT_PURE]="순수지능  : ";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_OTHER_INFO_STR_CUR]="현재힘 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_OTHER_INFO_DEX_CUR]="현재민첩성 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_OTHER_INFO_INT_CUR]="현재지능  : ";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_OTHER_INFO_FAME] = "명성";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_OTHER_INFO_TEAM_NAME] = "팀 이름 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_OTHER_INFO_CLAN_NAME] = "클랜 이름 : ";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_TIP_CHANGE_PICTURE_CLICK_HERE] = "사진을 바꿀 수 있습니다";


	(*g_pGameStringTable)[STRING_MESSAGE_UP_TO_GRADE] = "계급이 승급했습니다.";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GRADE_NAME] ="계급 이름 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GRADE_LEVEL] ="계급 레벨 : ";
	

	(*g_pGameStringTable)[UI_STRING_MESSAGE_ENG_DOMAIN_BLADE2]="Blade";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ENG_DOMAIN_SWORD2]="Sword";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ENG_DOMAIN_ENCHANT2]="Enchant";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ENG_DOMAIN_GUN2]	="Gun";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ENG_DOMAIN_HEAL2]="Heal";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_CLASS2]="계열";

	(*g_pGameStringTable)[STRING_MESSAGE_ITEM_TO_ITEM_FAIL_NO_PREMIUM_SLAYER] =  "프리미엄 사용자이어야 하거나, 길드내에선 사용할 수 없습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_ITEM_TO_ITEM_FAIL_NO_PREMIUM_VAMPIRE] = "프리미엄 사용자이어야 하거나, 마을내에선 사용할 수 없습니다.";

	(*g_pGameStringTable)[STRING_MESSAGE_DISMISS_AFTER_SECOND] = "%d초 후에 쫓겨납니다.";
	
    (*g_pGameStringTable)[UI_STRING_MESSAGE_OPTION_MENU_ENTER_CHATTING]= "엔터채팅";
    (*g_pGameStringTable)[UI_STRING_MESSAGE_OPTION_MENU_NORMAL_CHATTING]="일반채팅";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_MODIFY_INFO] = "소개 말을 변경합니다.";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_START_TRACE] = "추적 시작";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CANCEL_TRACE] ="추적 취소";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TRACE] = "%s 캐릭터 추적중";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CANNOT_TRACE] = "%s 캐릭터 추적 실패";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_OPTION_DO_NOT_WAR_MSG] ="전쟁관련 메시지 보지 않기";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_OPTION_DO_NOT_LAIR_MSG] = "레어마스터관련 메시지 보지 않기";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_SHOW_GRADE1_INFO_WINDOW] = "하위 계급 스킬창을 봅니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SHOW_GRADE2_INFO_WINDOW] = "상위 계급 스킬창을 봅니다";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_INCREASE_CRITICAL_10]="크리티컬(Critical) 공격력 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_INCREASE_DEFENSE_5]="회피율(Defense) 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_INCREASE_TOHIT_5]="명중률(To hit) 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_INCREASE_HP_10]="생명력(HP) 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_INCREASE_MP_15]="마법력(MP) 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_INCREASE_DAMAGE_3]="데미지(Damage) 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_INCREASE_ATTACKSPEED_15]="공격속도 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_INCREASE_HP_20]="생명력(HP) 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_INCREASE_DEFENSE_10]="회피율(Defense) 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_INCREASE_PROTECTION_10]="방어율(Protection) 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DECREASE_HP_EXHAUSTION_10_PERCENT]="스킬 사용시 생명력(HP) 소모량 감소";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_INCREASE_ENCHANT_DAMAGE_10_PERCENT]="인챈트(Enchant) 계열 공격기술 데미지 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_INCREASE_HEAL_DAMAGE_10_PERCENT]="힐(Heal) 계열 공격기술 데미지 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_INCREASE_NEAR_ATTACK_DAMAGE_10_PERCENT]="근접 공격 계열 스킬 데미지 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_INCREASE_HP_RESTORE_SPEED_15_PERCENT]="생명력(HP) 회복속도 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_INCREASE_RESISTANCE_ACID_15_PERCENT]="애시드(Acid) 저항 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_INCREASE_RESISTANCE_BLOODY_15_PERCENT]="블러드(Blood) 저항 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_INCREASE_RESISTANCE_CURSE_15_PERCENT]="커스(Curse) 저항 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_INCREASE_RESISTANCE_POISON_15_PERCENT]="포이즌(Poison) 저항 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_INCREASE_DAMAGE_STORM_20_PERCENT]="스톰(Storm) 계열 스킬 데미지 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_INCREASE_RANGE_STORM_5_BY_5]="스톰(Storm) 계열 스킬 범위 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_INCREASE_SUCCESS_RATIO_POISON_10_PERCENT]="독(Poison) 계열 성공률 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_INCREASE_SUCCESS_RATIO_ACID_10_PERCENT]="산(Acid) 계열 성공률 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_INCREASE_SUCCESS_RATIO_CURSE_10_PERCENT]="커스(Curse) 계열 성공률 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_INCREASE_SUCCESS_RATIO_BLOODY_10_PERCENT]="피(Blood) 계열 성공률 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_INCREASE_SUCCESS_RATIO_INNATE_10_PERCENT]="고유(Innate) 계열 성공률 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_INCREASE_SUCCESS_RATIO_SUMMON_10_PERCENT]="소환(Summon) 계열 성공률 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DECREASE_MP_EXHAUSTION_10_PERCENT]="스킬 사용시 MP 소모량 감소";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_INCREASE_HP_STEAL_2_PERCENT]="생명력(HP) 스틸 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_INCREASE_MP_STEAL_2_PERCENT]="마법력(MP) 스틸 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_INCREASE_LUCKY_2]="행운(Lucky) 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_INCREASE_KEEP_TIME_ACID_SWAMP_20_PERCENT]="애시드 스웜프(Acid Swamp) 지속시간 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_INCREASE_KEEP_TIME_PARALYZE_20_PERCENT]="패럴라이즈(Paralyze) 지속시간 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_INCREASE_KEEP_TIME_DARKNESS_30_PERCENT]="다크니스(Darkness) 지속시간 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_INCREASE_RANGE_DARKNESS_5_BY_5]="다크니스(Darkness) 범위 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CANNOT_UP_GRADE]="더이상 계급이 오르지 않습니다.";

	(*g_pGameStringTable)[STRING_MESSAGE_SELECT_PC_CANNOT_PLAY] = "유료계정이 아니라서 게임을 할 수 없습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_SELECT_PC_NOT_BILLING_CHECK] = "아직 결제 정보가 확인되지 않았습니다. 잠시만 기다려주세요.";
	(*g_pGameStringTable)[STRING_MESSAGE_SELECT_PC_CANNOT_PLAY_BY_ATTR] = "캐릭터 능력치가 무료 서비스 제한에 도달해서 유료 서비스를 사용하셔야만 접속할 수 있습니다.";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_NEVER_CANNOT_LEARN_SKILL] = "\"배울 수 없는 스킬입니다.\"";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ALREADY_LEARNED_SKILL] =    "\"이미 배운 스킬입니다.\"   ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CANNOT_LEARN_SKILL_YET] =   "\"아직 배울 수 없습니다.\"  ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CAN_LEARN_SKILL_NOW]=       "\"지금 배울 수 있습니다.\"  ";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_ACCELERATOR_GRADE1]="GRADE1";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ACCELERATOR_GRADE2]="GRADE2";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_LEARN_GRADE_SKILL_CONFIRM]= "이 스킬을 배우면 현재 계급의 다른 계급 스킬을 배울 수 없습니다. 정말로 배우시겠습니까?";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_TREE_OK] = "트리를 사용합니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TREE_CANCEL] = "트리 사용을 취소합니다.";

	(*g_pGameStringTable)[STRING_MESSAGE_TRADE_GIFT_BOX_OK] = "메리 크리스마스~*";
	(*g_pGameStringTable)[STRING_MESSAGE_TRADE_GIFT_BOX_NO_ITEM] = "친구들에게서 선물을 받아서 다시 오게나.";
	(*g_pGameStringTable)[STRING_MESSAGE_TRADE_GIFT_BOX_ALREADY_TRADE] = "욕심쟁이 같으니라고, 썩 꺼지지 못해!";

	(*g_pGameStringTable)[STRING_MESSAGE_XMAS_TREE_CANNOT_USE] = "주위의 다른 트리와 너무 가깝습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_XMAS_CARD_CANNOT_USE] = "빈 항목이 있습니다. 모든 항목을 채워주세요.";
	(*g_pGameStringTable)[STRING_MESSAGE_NOT_USE_SAFETY_POSITION] = "안전지대에서는 사용할수 없습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_NOT_USE_SAFETY_ZONE] = "마을안이나 길드안에서는 사용할수 없습니다.";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_ENCHANT_CONFIRM_2] = "실패 하면 아이템이 부서질 수 있습니다.";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_DEPOSIT_LIMIT] = "보관함에 20억 이상 보관할 수 없습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_WITHDRAW_LIMIT] = "20억 이상 소지할 수 없습니다.";

	// 2003.1.14
	(*g_pGameStringTable)[STRING_MESSAGE_EVENT_PREMIUM_HALF_SLAYER] = "현재 존에서는 앰플을 절반 가격으로 구입하실 수 있습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_EVENT_PREMIUM_HALF_VAMPIRE] = "현재 존에서는 혈청을 절반 가격으로 구입하실 수 있습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_EVENT_PREMIUM_HALF_SLAYER_END] = "앰플을 절반 가격으로 구입할 수 있는 이벤트가 종료되었습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_EVENT_PREMIUM_HALF_VAMPIRE_END] = "혈청을 절반 가격으로 구입할 수 있는 이벤트가 종료되었습니다.";

	// 2003.1.15
	(*g_pGameStringTable)[STRING_MESSAGE_REWARD_OK] = "보상을 받았습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_REWARD_FAIL] = "보상을 받을 수 없습니다.";
    (*g_pGameStringTable)[STRING_MESSAGE_NO_EMPTY_SLOT] = "빈 자리가 없습니다.";

	// 2003.1.20
	(*g_pGameStringTable)[UI_STRING_MESSAGE_OPTION_DO_NOT_HOLY_LAND_MSG]= "아담의 성지관련 메시지 보지 않기";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_HOLY_LAND_TOTAL_FEE] = "총 세금";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_HOLY_LAND_CAN_BRING_FEE] = "가져올 세금";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_HOLY_LAND_TOTAL_FEE_DESC] = "가져올 수 있는 총 세금";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_HOLY_LAND_CLICK_INPUT_FEE] = "클릭하시면 가져올 세금을 입력합니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_HOLY_LAND_OK] ="입력한 세금을 가져옵니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_HOLY_LAND_INPUT_BRING_FEE] = "가져올 세금을 입력하세요";

	(*g_pGameStringTable)[STRING_MESSAGE_NO_TEAM] = "팀에 소속되어 있지 않습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_NO_CLAN] = "클랜에 소속되어 있지 않습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_NOT_TEAM_MASTER] = "팀 마스터가 아닙니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_NOT_CLAN_MASTER] = "클랜 마스터가 아닙니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_TEAM_HAS_NO_CASTLE] = "팀이 가진 성이 없습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_CLAN_HAS_NO_CASTLE] = "클랜이 가진 성이 없습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_TEAM_NOT_YOUR_CASTLE] = "팀이 소유한 성이 아닙니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_CLAN_NOT_YOUR_CASTLE] = "클랜이 소유한 성이 아닙니다.";

	(*g_pGameStringTable)[STRING_MESSAGE_SUCCESS_BRING_FEE] = "세금을 찾았습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_FAIL_BRING_FEE] = "세금을 찾는데 실패하였습니다.";	

	(*g_pGameStringTable)[UI_STRING_MESSAGE_BRING_FEE_MSG] = " 성을 소유한 팀이나 클랜 마스터는 이 성에서 얻은 세금을 가져갈 수 있습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BRING_FEE_LIMIT] = "가져갈 세금과 현재 소지중인 돈의 합이 20억을 넘을 수 없습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_RACE_WAR]= "종족간 전쟁";

	(*g_pGameStringTable)[STRING_MESSAGE_WAR_SCHEDULE_FULL] = "전쟁 스케쥴이 꽉 찼습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_WAR_ALREADY_REGISTERED] = "이미 전쟁 신청을 했습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_WAR_NOT_ENOUGH_MONEY] = "돈이 부족합니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_WAR_REGISTRATION_OK] = "전쟁 스케쥴에 등록 되었습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_CANNOT_MOVE_SAFETY_ZONE_BLOOD_BIBLE] = "피의성서를 들고 있으면, 자기편의 안전지대에는 들어갈 수 없습니다!";
	(*g_pGameStringTable)[STRING_MESSAGE_ALREADY_HAS_CASTLE] = "이미 성을 가지고 있습니다.";
	//(*g_pGameStringTable)[STRING_MESSAGE_WAR_UNAVAILABLE] = "지금은 전쟁 신청이 되지 않습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_WAR_UNAVAILABLE] = "전쟁 신청을 할 수 없습니다.";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_STATUS_TIME_FORMAT] = "%d시간 %d분";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_STATUS_LEFT_TIME] = "남은 시간";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GUILD_WAR] = "동족간 전쟁";

	(*g_pGameStringTable)[STRING_MESSAGE_BLOOD_BIBLE_BONUS_ARMEGA] = "기술 사용시 마법력(MP) 혹은 생명력(HP) 소모량 50% 감소";  
	(*g_pGameStringTable)[STRING_MESSAGE_BLOOD_BIBLE_BONUS_MIHOLE] = "행운 +10";  
	(*g_pGameStringTable)[STRING_MESSAGE_BLOOD_BIBLE_BONUS_KIRO] = "지식 +7, 민첩성 +7";  
	(*g_pGameStringTable)[STRING_MESSAGE_BLOOD_BIBLE_BONUS_INI] = "물리공격 데미지 +10";  
	(*g_pGameStringTable)[STRING_MESSAGE_BLOOD_BIBLE_BONUS_GREGORI] = "시야 +5, 모든 능력치 +4";  
	(*g_pGameStringTable)[STRING_MESSAGE_BLOOD_BIBLE_BONUS_CONCILIA] = "모든 저항력 +9";  
	(*g_pGameStringTable)[STRING_MESSAGE_BLOOD_BIBLE_BONUS_LEGIOS] = "마법공격데미지 +10";  
	(*g_pGameStringTable)[STRING_MESSAGE_BLOOD_BIBLE_BONUS_HILLEL] = "타종족의 언어 통역";  
	(*g_pGameStringTable)[STRING_MESSAGE_BLOOD_BIBLE_BONUS_JAVE] = "겜블가격 50% 할인";  
	(*g_pGameStringTable)[STRING_MESSAGE_BLOOD_BIBLE_BONUS_NEMA] = "물약값 50% 할인";  
	(*g_pGameStringTable)[STRING_MESSAGE_BLOOD_BIBLE_BONUS_AROSA] = "생명력(HP) +50";  
	(*g_pGameStringTable)[STRING_MESSAGE_BLOOD_BIBLE_BONUS_CHASPA] = "힘 +7, 지식 +7";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_BLOOD_BIBLE_ARMEGA] = "아르메가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BLOOD_BIBLE_MIHOLE] = "미호레";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BLOOD_BIBLE_KIRO] = "키로";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BLOOD_BIBLE_LEGIOS] = "레지오스";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BLOOD_BIBLE_HILLEL] = "힐릴";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BLOOD_BIBLE_JAVE] = "쟈브";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BLOOD_BIBLE_INI] = "아이니";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BLOOD_BIBLE_GREGORI] = "그레고리";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BLOOD_BIBLE_CONCILIA] = "콘칠리아";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BLOOD_BIBLE_NEMA] = "네마";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BLOOD_BIBLE_AROSA] = "아로사";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BLOOD_BIBLE_CHASPA] = "차스파";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_BLOOD_BIBLE_ARMEGA_ENG] = "ARMEGA";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BLOOD_BIBLE_MIHOLE_ENG] = "MIHOLE";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BLOOD_BIBLE_KIRO_ENG] = "KIRO";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BLOOD_BIBLE_INI_ENG] = "INI";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BLOOD_BIBLE_GREGORI_ENG] = "GREGORI";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BLOOD_BIBLE_CONCILIA_ENG] = "CONCILIA";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BLOOD_BIBLE_LEGIOS_ENG] = "LEGIOS";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BLOOD_BIBLE_HILLEL_ENG] = "HILLEL";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BLOOD_BIBLE_JAVE_ENG] = "JAVE";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BLOOD_BIBLE_NEMA_ENG] = "NEMA";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BLOOD_BIBLE_AROSA_ENG] = "AROSA";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BLOOD_BIBLE_CHASPA_ENG] = "CHASPA";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_BLOOD_BIBLE_STATUS_DROP] = "땅에 떨어져 있습니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BLOOD_BIBLE_STATUS_HAS_SLAYER] = "슬레이어가 가지고 있습니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BLOOD_BIBLE_STATUS_HAS_VAMPIRE] = "뱀파이어가 가지고 있습니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BLOOD_BIBLE_STATUS_NONE] = "정보를 알 수 없습니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BLOOD_BIBLE_STATUS_SLAYER] = "슬레이어의 수호성단에 있습니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BLOOD_BIBLE_STATUS_VAMPIRE] = "뱀파이어의 수호성단에 있습니다";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_BLOOD_BIBLE_DESC_POSITION] = "위치 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BLOOD_BIBLE_DESC_STATUS] = "상태 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BLOOD_BIBLE_DESC_PLAYER] = "소지자 : ";	

	(*g_pGameStringTable)[UI_STRING_MESSAGE_BLOOD_BIBLE_STATUS_ATTACK_GUILD] = "공격";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BLOOD_BIBLE_STATUS_DEFENSE_GUILD] = "방어";

	(*g_pGameStringTable)[STRING_MESSAGE_RACE_WAR_JOIN_FAILED] = "%s님 레벨대의 종족 전쟁 신청인원이 꽉 찼습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_RACE_WAR_JOIN_OK] = "종족 전쟁 참가 신청을 했습니다.";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_BLOOD_BIBLE_DESC_SHRINE_RACE] = "최종 소유 : ";

	(*g_pGameStringTable)[STRING_MESSAGE_SLAYER] = "슬레이어";
	(*g_pGameStringTable)[STRING_MESSAGE_VAMPIRE] = "뱀파이어";

	(*g_pGameStringTable)[STRING_MESSAGE_RACE_WAR_GO_FIRST_SERVER] = "종족 전쟁은 각 월드의 첫번째 서버에서만 신청 및 참가가 가능합니다.";

	(*g_pGameStringTable)[STRING_MESSAGE_GIVE_EVENT_ITEM_FAIL_NOW] = "지금은 이벤트 아이템을 받을 수 없습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_GIVE_EVENT_ITEM_FAIL] = "이벤트 아이템을 받을 수 없습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_GIVE_EVENT_ITEM_OK] = "이벤트에 따른 아이템을 받았습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_GIVE_PREMIUM_USER_ONLY] = "프리미엄서비스 사용자만 받을 수 있습니다.";

//	(*g_pGameStringTable)[STRING_MESSAGE_WAIT_FOR_MEET_COUPLE] = "커플 신청 할 상대의 이름을 입력하세요.";
	(*g_pGameStringTable)[STRING_MESSAGE_COUPLE_MEET_SUCCESS] = "커플이 성사되었습니다. 인벤토리에 커플아이템이 추가되었습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_COUPLE_CANNOT_MEET] = "커플이 성사될 수 없습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_MEET_WAIT_TIME_EXPIRED] = "시간이 지나서 신청이 취소되었습니다.";

//	(*g_pGameStringTable)[STRING_MESSAGE_WAIT_FOR_APART_COUPLE] = "헤어질 상대의 이름을 입력하세요.";
	(*g_pGameStringTable)[STRING_MESSAGE_COUPLE_APART_SUCCESS] = "헤어졌습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_NOT_COUPLE] = "지금은 헤어질 수 없습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_APART_WAIT_TIME_EXPIRED] = "시간이 지나서 신청이 취소되었습니다.";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_HOPE_COUPLE_MSG] = "커플은 서로간의 합의 하에 이루어져야 합니다. \n신청 방법은, 커플이 되길 원하는 연인의 이름을 입력한 후 신청 받은 연인이 1분 안에 저에게 와서 동의 하시면, 커플이 성립됩니다. 이 사항들을 기억하십시오.\n그럼, 연인이 되길 원하시는 분의 이름을 입력하여 주십시오.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BREAK_UP_COUPLE_MSG] = "합의 결별은 서로간의 합의 하에 이루어 져야 하며, 현재 헤어지고자 하는 연인의 이름을 입력한 후 연인이 1분 안에 저에게 와서 동의 하시면, 결별이 성립됩니다. 헤어짐과 함께 두 사람의 사랑의 증표인 커플링은 사라집니다. 이 사항들을 기억하십시오.\n그럼, 연인의 이름을 입력하여 주십시오.";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_COMPLETE] = "완료";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_OTHER_PLAYER_NAME] = "상대방의 캐릭터 이름";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_FORCE_BREAK_UP_COUPLE] = "일방적인 헤어짐은 상대방의 동의 없이 결별이 가능하나, 자신의 성향에서 상당량이 감소합니다. 현재 자신의 연인의 이름을 입력하시면, 결별이 성립됩니다. 결별 성립과 함께 두 사람의 사랑의 증표인 커플링은 사라집니다.  이 사항들을 기억하십시오.\n그럼, 연인의 이름을 입력하여 주십시오.";
	
	(*g_pGameStringTable)[STRING_MESSAGE_COUPLE] = "커플";
	(*g_pGameStringTable)[STRING_MESSAGE_MOVE_DELAY_SEC] = "%d초 후에 이동합니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_COUPLE_MOVE_START] = "커플 캐릭터를 찾고 있습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_COUPLE_CAN_NOT_FIND] = "커플 캐릭터를 찾을 수 없습니다.";

	(*g_pGameStringTable)[STRING_MESSAGE_COUPLE_NOT_EVENT_TERM] = "커플 이벤트 기간이 아닙니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_COUPLE_ALREADY_WAITING] = "이미 상대를 기다리고 있습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_COUPLE_LOGOFF] = "상대방이 로그인 하지 않았습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_COUPLE_DIFFERENT_RACE] = "서로 다른 종족입니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_COUPLE_SAME_SEX] = "남녀 사이에만 커플이 성립됩니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_COUPLE_NOT_PAY_PLAYER] = "유료 사용자가 아닙니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_COUPLE_ALREADY_COUPLE] = "이미 커플입니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_COUPLE_WAS_COUPLE] = "커플을 맺은 적이 있습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_COUPLE_NOT_ENOUGH_GOLD] = "소지금이 부족합니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_COUPLE_NOT_ENOUGH_ATTR] = "능력치가 부족합니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_COUPLE_NOT_ENOUGH_LEVEL] = "레벨이 부족합니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_COUPLE_INVENTORY_FULL] = "커플링을 받을 공간이 부족합니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_COUPLE_NO_WAITING] = "당신을 기다리는 파트너가 없습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_COUPLE_NOT_COUPLE] = "커플이 아닙니다.";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_LOVE_CHAIN] = "커플이 있는곳으로 이동할 수 있는 스킬입니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_WILL_YOU_GO_BILING_PAGE] = "결제 페이지로 이동하시겠습니까?";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GO_BILING_PAGE] = "결제 페이지로 이동합니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_LOGOUT_BY_PAYTIME] = "유료 사용시간이 만료되었습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_LOGOUT_BY_FREEPLAY_LEVEL] = "능력치가 무료 서비스 제한에 도달했습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_LOGOUT_BY_LEVEL] = "레벨이 무료 서비스 제한에 도달했습니다.";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CANNOT_UP_LEVEL_BY_FAME] = "명성이 부족하여 레벨업을 할 수 없습니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_NEED_FAME] = "필요 명성치";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_QUEST_HAN] = "리미티드";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_QUEST_ENG] = "Limited";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DAY] = "%d일";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_HOUR] = "%d시간";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MINUTE] = "%d분";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SECOND] = "%d초";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_LEFT_TIME] = "남은 사용 시간 :";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_EXPIRED_ITEM] = "로그아웃하시면 사라집니다.";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SELECT_QUEST_SLAYER] = "이번 임무는 E.V.E에서 직접 의뢰 한 사항으로, 급격히 늘어가는 뱀파이어를 효과적으로 퇴치하기 위해서 새로운 지령을 지시하였습니다. 미리 일정 뱀파이어를 선택하고는 주어지는 수량을 퇴치하는 것입니다. 퀘스트는 한번에 하나씩 선택하여 수행하셔야 하며, 퀘스트 도중 로그 아웃 시에는 퀘스트가 취소됩니다. 뱀파이어 수량은 선택한 종류에 따라 차이가 있습니다. 이 임무를 수행하실 경우에는 E.V.E에서 특별한 보상이 주어집니다. 원하시는 퀘스트를 선택해 주세요.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SELECT_QUEST_VAMPIRE] = "제가 원하는 일을 맡아주실 수 있겠습니까? 흐흐..제 취미 생활 때문이지만 저는 아름답지 못한 것들을 극도로 혐오 한답니다. 우리들 뱀파이어의 순수하고 고결한 혈통을 위하여, 출처를 알 수 없는 하급 한 것들을 정리할 필요가 있다고 생각하는데…흐흐.. 어떠십니까? 저와 협력하여 미천한 무리를 정리해 주시기 않으시겠습니까? 퀘스트는 한번에 하나씩 선택하여 수행하셔야 하며, 퀘스트 도중 로그 아웃 시에는 퀘스트가 취소됩니다. 몬스터 수량은 선택한 몬스터 종류에 따라 차이가 있으며, 사냥을 해오시면 됩니다. 어떻게 하시겠습니까? 대가는 확실히 드리겠습니다. 원하시는 퀘스트를 선택해 주십시오.";	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CANCEL_SELECT_QUEST] = "다음 기회에 참여하지.";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_CANCEL_LEARN_SKILL] = "다음에 배우겠습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_NUMBER_OF_ANIMALS]= "마리";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_FINISH_MONSTER_KILL_QUEST] = "몬스터 잡기 퀘스트의 시간이 종료되었습니다.";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_EXPIRED_TIME_MONSTER_KILL_QUEST] = "몬스터 사냥 퀘스트의 시간이 종료되었습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_FINISH_MONSTER_KILL_QUEST] = "몬스터 사냥 퀘스트 목표가 달성되었습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CAN_REQUITAL_FROM_NPC] = "내에 NPC에게 보상을 받을 수 있습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_START_MONSTER_KILL_QUEST] = "몬스터 사냥 퀘스트가 시작되었습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_FAIL_ALREADY_START_MONSTER_KILL_QUEST] = "이미 퀘스트가 진행중입니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_FAIL_MONSTER_KILL_QUEST_BY_STATUS] = "능력치가 맞지 않아 퀘스트를 진행할수 없습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SUCCESS_MONSTER_KILL_QUEST] = "몬스터 사냥 퀘스트를 성공하였습니다. 인벤토리에 퀘스트 아이템이 추가되었습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_NOT_YET_COMPLETE_MONSTER_KILL_QUEST] = "몬스터 사냥 퀘스트가 아직 완료되지 않았습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_INVENTORY_FULL_MONSTER_KILL_QUEST] = "인벤토리에 공간이 없습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_NOT_IN_QUEST] = "퀘스트중이 아닙니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_FAIL_QUEST_EXPIRED_TIME] = "제한시간이 초과되어 퀘스트를 실패했습니다.";	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TIME_LIMIT] = "제한시간 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CANNOT_APPLY_QUEST] = "지금은 퀘스트를 신청할 수 없습니다.";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_COMPLETE_QUEST] = "퀘스트 목표 달성";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_FAIL_TIME_OVER_QUEST] = "제한시간 초과";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MEET_NPC] = "%s 만나기";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_FAIL_INVALID_NPC] = "해당 NPC 에게 보상 받을 수 없습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_FAIL_BUG] = "문제가 발생하였습니다. 다시 시도하세요.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GATHER_ITEM] = "%s 찾기";

	(*g_pGameStringTable)[STRING_MESSAGE_MONSTER_KILL_QUEST_STRING_SET] = "그럼 %s %d마리를 %s 내에 잡아오도록 하게.";
	(*g_pGameStringTable)[STRING_MESSAGE_MONSTER_KILL_QUEST_STRING_SET_VAMPIRE] = "그럼 %s %d마리를 %s 내에 잡아오도록 하십시오.";
	(*g_pGameStringTable)[STRING_MESSAGE_CANCEL_MONSTER_KILL_QUEST] = "장비를 점검한 후에 다시 돌아오겠습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_YES_I_SEE] = "예, 알겠습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_QUEST_MONSTER_KILL] = "몬스터 사냥 퀘스트";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_QUEST_MEET_NPC] = "NPC 만나기 퀘스트";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_QUEST_GATHER_ITEM] = "아이템 구하기 퀘스트";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_QUEST_DESCRIPTION_TIME_TOTAL] = "총 제한시간 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_QUEST_DESCRIPTION_TIME_ELAPSE] = "경 과 시 간 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_QUEST_DESCRIPTION_TIME_REMAIN] = "남 은 시 간 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_QUEST_DESCRIPTION_TIME_NO_REMAIN] = "없음";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_FAIL_QUEST] = "퀘스트 실패";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SELECT_EVENT_GIFT] = "%d단계 이벤트 상품중 하나를 고르세요";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_PLEASE_SCRATCH_IMAGE] = "상단의 이미지를 긁어 주세요.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_WIN_A_PRIZE_SAME_IMAGE] = "같은 그림이 3개면 당첨입니다.";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_CONGRATULATIONS] = "축하합니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_WIN_A_PRIZE] = "에 당첨 되셨습니다.";
	
	(*g_pGameStringTable)[STRING_MESSAGE_MEET_NPC_SLAYER] = "아우스터즈로 추측되는 기묘한 생김새의 사람을 보았다는 주민은 에슬라니아 부근에 거주하는 것으로 보고되었다. 알겠으면 지금 당장 목격자를 찾아 최대한 많은 정보를 얻어오도록.";
	(*g_pGameStringTable)[STRING_MESSAGE_MEET_NPC_VAMPIRE] ="아우스터즈로 추측되는 기묘한 생김새의 사람을 보았다는 주민 둘이 림보성 부근을 겁도 없이 돌아다니고 있다고 하네요. 지금 당장 그들을 찾아 최대한 많은 정보를 얻어오도록 하세요.";
	(*g_pGameStringTable)[STRING_MESSAGE_CANCEL_QUEST_VAMPIRE] = "마력을 보충한 후 다시 돌아오겠습니다.";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_FAIL_LOTTERY] = "아쉽게도 당첨되지 않으셨습니다.\\n다음 기회를 이용해주세요.\\n이벤트 퀘스트를 다시 수행하시면 복권을 받으실 수 있는 기회를 드립니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_WIN_A_PRIZE2] = "상품에 당첨 되셨습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_USER_1] = "님께서";

	(*g_pGameStringTable)[STRING_MESSAGE_RIPATY_SCRIPT_1] = "당신이 가져다준 정령석이 카리사스님의 영혼을 죽음의 세계에서 해방시켜주었습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_RIPATY_SCRIPT_2] = "자, 보십시오. 부활한 우리들의 동족들을… 이 모두 당신 덕분입니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_RIPATY_SCRIPT_3] = "13번째 피의 성서라고요? 호호호호호호호홋… ";
	(*g_pGameStringTable)[STRING_MESSAGE_RIPATY_SCRIPT_4] = "역시 인간들이란 정말… 어리석기 짝이 없군요.";
	(*g_pGameStringTable)[STRING_MESSAGE_RIPATY_SCRIPT_5] = "그것은 세속적인 당신들의 손에 들어가기에는 너무 위험한 물건입니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_RIPATY_SCRIPT_6] = "우리 일족들은 그것을 지키기 위해 깨어난 것입니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_RIPATY_SCRIPT_7] = "본래 이곳에 온 이후로는 아담의 성지를 지키고 있었지요.";
	(*g_pGameStringTable)[STRING_MESSAGE_RIPATY_SCRIPT_8] = "그건 그렇고 당신은 너무 많은 사실을 알아버렸습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_RIPATY_SCRIPT_9] = "그러니 이제 영원한 어둠 속에서 침묵을 지켜주셨으면 고맙겠습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_AMATA_SCRIPT_1] = "당신이 가져다준 정령석이 카리사스님의 영혼을 죽음의 세계에서 해방시켜주었습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_AMATA_SCRIPT_2] = "자, 보십시오. 부활한 우리들의 동족들을… 이 모두 당신 덕분입니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_AMATA_SCRIPT_3] = "13번째 피의 성서라고요? 호호호호호호호홋… ";
	(*g_pGameStringTable)[STRING_MESSAGE_AMATA_SCRIPT_4] = "그 더러운 욕망은 500년이 지나도 변함이 없군요.";
	(*g_pGameStringTable)[STRING_MESSAGE_AMATA_SCRIPT_5] = "그것은 늘 피에 젖어 살아가는 당신들의 손에 들어가기에는 너무 위험한 물건입니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_AMATA_SCRIPT_6] = "우리 일족들은 그것을 지키기 위해 깨어난 것입니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_AMATA_SCRIPT_7] = "본래 이곳에 온 이후로는 아담의 성지를 지키고 있었지요.";
	(*g_pGameStringTable)[STRING_MESSAGE_AMATA_SCRIPT_8] = "그건 그렇고 당신은 너무 많은 사실을 알아버렸습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_AMATA_SCRIPT_9] = "그러니 이제 영원한 어둠 속에서 침묵을 지켜주셨으면 고맙겠습니다.";	
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_QUEST_NAME_FIND_ANCIENT_DOCUMENT] = "고대 문헌 찾기 퀘스트";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_QUEST_NAME_FIND_ANCIENT_MAP] = "고대 지도 찾기 퀘스트";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_QUEST_NAME_FIND_SOUL_STONE] = "정령석 찾기 퀘스트";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_NOT_IN_QUEST2] = "현재 진행중인 퀘스트가 없습니다.";
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_EVENT_QUEST_1] = "1.아우스터즈의 흔적\\n목적:몬스터 Killing";
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_EVENT_QUEST_2] = "2.고대전설의 그림자\\n목적:정보를가진 NPC 찾기";
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_EVENT_QUEST_3] = "3.유물에 남겨진 눈물  목적:고대 문헌 조각 수집";
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_EVENT_QUEST_4] = "4.발자취를 찾아서\\n목적:퀘스트 몬스터 Killing & 지도 획득";
//	(*g_pGameStringTable)[UI_STRING_MESSAGE_EVENT_QUEST_5] = "5.아우스터즈와의 조우\\n목적:아우스터즈를 부활시킬 정령석 찾기";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_TAKE_OUT_OK] = "아이템을 인벤토리로 가져왔습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TAKE_OUT_FAIL] = "아이템을 인벤토리로 가져오지 못했습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_CANNOT_TAKE_OUT_ITEM_FROM_SHOP] = "지금은 구입한 아이템을 찾을 수 없습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CONFIRM_SELECT_ITEM_FROM_SHOP] = "선택하신 아이템을 가져오시겠습니까?";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ITEM_SHOP] = "아이템 이름을 클릭하시면 선택한 아이템을 가져옵니다.";
	
	(*g_pGameStringTable)[STRING_MESSAGE_CLEAR_RANK_BONUS_OK] = "선택하신 계급의 스킬이 삭제 되었습니다.";
    (*g_pGameStringTable)[STRING_MESSAGE_NO_RANK_BONUS] = "해당 자격이 없습니다.";
    (*g_pGameStringTable)[STRING_MESSAGE_ALREADY_CLEAR_RANK_BONUS] = "선택하신 계급 스킬을 삭제한 적이 있습니다.";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BULLETIN_BOARD_OK] = "게시판을 사용합니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BULLETIN_BOARD_CANCEL] = "게시판 사용을 취소합니다.";

	(*g_pGameStringTable)[STRING_MESSAGE_BULLETIN_BOARD_CANNOT_USE] = "주위의 다른 게시판과 너무 가깝습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CAN_TRANS] = "아이템의 착용제한 성별을 전환할 수 있습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TRANS_ITEM] = "이 아이템의 착용제한 성별을 전환하시겠습니까?";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_RESURRECT_BY_ELIXIR] = "엘릭서를 사용하여 부활합니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_RESURRECT_BY_SCROLL] = "부활 스크롤을 사용하여 부활합니다.";
	(*g_pGameStringTable)[UI_STRING_CANNOT_USE] = "사용할 수 없습니다.";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MIXING_FORGE_OK] = "믹싱포지를 사용합니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MIXING_FORGE_CANCEL] = "믹싱포지 사용을 취소합니다.";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_COMPLETE_MERGE_ITEM] = "두 아이템이 성공적으로 합쳐졌습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_FAIL_MERGE_ITEM] = "아이템을 합치는데 실패하였습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_USE_GUILD_MEMBER_ONLY] = "성을 소유한 길드원만 사용 가능합니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_CANNOT_USE_RIDE_MOTORCYCLE] = "오토바이를 타고 사용할 수 없습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CANNOT_MIXING_SPECIAL_ITEM]= "유니크 아이템이나 리미티드 아이템은 믹싱할 수 없습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CANNOT_MIXING_OPTION_COUNT] = "옵션이 한개인 아이템만 믹싱할 수 있습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CANNOT_MIXING_ITEM_CLASS] = "아이템 종류가 달라서 선택할 수 없습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CANNOT_MIXING_ITEM_TYPE] = "아이템 타입이 달라서 선택할 수 없습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CANNOT_MIXING_ITEM_OPTION] = "두 아이템의 옵션이 같아서 선택할 수 없습니다.";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_WHAT_OPTION_REMOVE] = "어떤 옵션을 제거하시겠습니까?";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CONFIRM_REMOVE_OPTION] = "선택하신 옵션을 정말로 제거하시겠습니까?";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CAN_REMOVE_OPTION] = "아이템의 옵션을 제거할 수 있습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSGAE_CANNOT_REMOVE_OPTION] = "아이템의 옵션을 제거할 수 없습니다.";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_SELECT_OPTION] = "%s 옵션을";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_QUESTION_REMOVE_OPTION] = "제거 하시겠습니까?";
	(*g_pGameStringTable)[STRING_MESSAGE_FAILED_REMOVE_OPTION] = "옵션을 지우는데 실패하였습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_SUCCESS_REMOVE_OPTION] = "선택한 옵션이 제거되었습니다.";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_OTHER_TRIBE] = "타종족 전용";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CONSUME_EP] = "EP소모량 : ";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_EQUIP_OUSTERS_CIRCLET] = "서클릿을 장착합니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_EQUIP_OUSTERS_COAT] = "옷을 장착합니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_EQUIP_OUSTERS_WEAPON] = "챠크람/리스틀릿을 장착합니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_EQUIP_OUSTERS_BOOTS] = "부츠를 장착합니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_EQUIP_OUSTERS_ARMSBAND] = "암스밴드을 장착합니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_EQUIP_OUSTERS_RING] = "반지를 장착합니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_EQUIP_OUSTERS_PENDENT] = "목걸이를 장착합니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_EQUIP_OUSTERS_STONE] = "정령석을 장착합니다.";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_OUSTERS_STONE] = "%s의 정령 레벨 : ";

	// 아우스터즈 계급
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GRADE_MALCHUT] =	"마르쿠트";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GRADE_YESOD] =	"예소드";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GRADE_HOD] =	"호드";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GRADE_NETRETH] =	"네차크";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GRADE_TIPHRETH] =	"티파레트";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GRADE_GEBURAH] =	"게브라";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GRADE_CHESED] = "쳬세드";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GRADE_BINAH] =	"바이나";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GRADE_CHOKMA] = "호크마";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GRADE_KEATHER] = "케테르";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_SKILL_LEVEL] = "스킬 레벨 : %d";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_REQUIRE_ELEMENTAL_LEVEL] = "요구 속성 레벨 (%s)(%d)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_LEARN_SKILL] = "이 스킬을 배우시겠습니까?";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_LEARN_SKILL2] = "이 스킬을 익히시면 계열이 결정됩니다. 다음 스킬부터는 이 계열에 해당되는 스킬만 배울 수 있게 됩니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SKILL_LEVEL_UP] = "이 스킬의 레벨을 올리시겠습니까?";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_REQUIRE_SKILL_POINT] = "필요 스킬 포인트 : %d 포인트";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_ELEMENTAL_FIRE] = "불";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ELEMENTAL_WATER] = "물";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ELEMENTAL_EARTH] = "대지";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ELEMENTAL_WIND] = "바람";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ELEMENTAL_SUM] = "합";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_EP] = "영력";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_NOT_SHOW_GUILD_CHATTING] = "길드채팅 안보기";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SHOW_GUILD_CHATTING] = "길드채팅 보기";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GUILD_CHATTING] = "길드채팅 하기";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_RANK_BONUS_WOOD_SKIN] = "방어율(Protection) 증가";
    (*g_pGameStringTable)[UI_STRING_MESSAGE_RANK_BONUS_WIND_SENSE] = "회피율(Defense) 증가";
    (*g_pGameStringTable)[UI_STRING_MESSAGE_RANK_BONUS_HOMING_EYE] = "명중률(To Hit) 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_RANK_BONUS_LIFE_ENERGY] = "생명력(HP) 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_RANK_BONUS_SOUL_ENERGY] = "영력(EP) 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_RANK_BONUS_STONE_MAUL] = "전투기술 계열 데미지(Damage) 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_RANK_BONUS_SWIFT_ARM] = "공격속도 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_RANK_BONUS_FIRE_ENDOW] = "불(Fire) 계열 공격마법 데미지(Damage) 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_RANK_BONUS_WATER_ENDOW] = "물(Water) 계열 공격마법 데미지(Damage) 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_RANK_BONUS_EARTH_ENDOW] = "대지(Earth) 계열 공격마법 데미지(Damage) 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_RANK_BONUS_ANTI_ACID_SKIN] = "산(Acid) 저항력 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_RANK_BONUS_ANTI_BLOODY_SKIN] = "피(Bloody) 저항력 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_RANK_BONUS_ANTI_CURSE_SKIN] = "저주(Curse) 저항력 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_RANK_BONUS_ANTI_POISON_SKIN] = "독(Poison) 저항력 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_RANK_BONUS_ANTI_SILVER_DAMAGE_SKIN] = "은 데미지 감소";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_RANK_BONUS_BLESS_OF_NATURE] = "스킬사용시 영력(EP) 소모량 감소";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_RANK_BONUS_LIFE_ABSORB] = "생명력(HP) 스틸 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_RANK_BONUS_SOUL_ABSORB] = "영력(EP) 스틸 증가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_RANK_BONUS_MYSTIC_RULE] = "행운(Lucky) 증가";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_HPBAR_EP_DESCRIPTION] = "영력(EP):%d/%d";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_LEFT_BONUS_POINT] = "보너스 포인트를 분배하셔야 합니다.";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_GUILD] = "길드(Guild)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GUILD_INFO] = "길드 정보(Guild Info)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GUILD_MEMBER_LIST] = "길드원 리스트(Guild Member List)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GUILD_HELP] = "길드 도움말";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_ELEMENTAL_FIRE_DESCRIPTION] =  "Fire :%d";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ELEMENTAL_WATER_DESCRIPTION] = "Water:%d";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ELEMENTAL_EARTH_DESCRIPTION] = "Earth:%d";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ELEMENTAL_WIND_DESCRIPTION] =  "Wind :%d";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_EP]="EP : ";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_PREV_MAP] = "이전 맵을 봅니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_NEXT_MAP] = "다음 맵을 봅니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CLOSE_HORN] = "대지 정령의 뿔을 취소합니다.";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_ATTACK_SPEED] = "공격속도 : ";

	(*g_pGameStringTable)[STRING_STATUS_EP_MAX_1] = "영력(EP) 최대치가 %d가 되었습니다.";
	(*g_pGameStringTable)[STRING_STATUS_EP_MAX_2] = "영력(EP) 최대치가 %d이 되었습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_MAGIC_DAMAGE] = "마법 데미지 : ";
	
	(*g_pGameStringTable)[STRING_MESSAGE_OPEN_LAIR]	= "%s가 열렸습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_CLOSED_LAIR]= "%s가 닫혔습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_LEFT_TIME_LAIR]= "%s의 출입 가능 시간이 %d분 남았습니다.";	
	
	(*g_pGameStringTable)[STRING_MESSAGE_CONTRACT_GNOMES_HORN]="시오람에게 가서 계약을 맺으셔야 사용하실 수 있습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_CONTRACT_GNOMES_HORN_OK] = "대지 정령의 뿔을 사용하기 위한 계약을 맺었습니다.";
	
	(*g_pGameStringTable)[STRING_MESSAGE_CANNOT_DOWN_SKILL] = "스킬레벨을 낮출 수 없습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_NOT_ENOUGH_MONEY_FOR_DOWN_SKILL] = "소지금이 부족하여 스킬레벨을 낮출 수 없습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CONFIRM_DOWN_SKILL] = "%s 스킬의 스킬 레벨이 %d 에서 %d로 변경됩니다. 소요비용은 $%s 입니다. 변경하시겠습니까?";
	(*g_pGameStringTable)[STRING_MESSAGE_SUCCESS_CHANGE] = "성공적으로 변경되었습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_WITHDRAW_POINT] = "회수 스킬 포인트 : %d";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_DOWN_SKILL] = "이 스킬의 레벨을 낮추시겠습니까?";

	(*g_pGameStringTable)[STRING_MESSAGE_NOT_OUSTERS] = "아우스터즈가 아닙니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_TOO_LOW_SKILL_LEVEL] = "스킬레벨이 너무 낮습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_TOO_HIGH_SKILL_LEVEL] = "스킬레벨이 너무 높습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_INVALID_SKILL] = "잘못된 스킬입니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_NOT_LEARNED_SKILL] = "아직 배우지 않은 스킬입니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CONFIRM_UP_TO_LAST_SKILL_LEVEL] = "스킬레벨을 최고단계인 30까지 올릴 경우 이를 회수할 수 없습니다. 30레벨로 상승시키도록 하겠습니까?";

	(*g_pGameStringTable)[STRING_MESSAGE_CANNOT_USE_OUSTERS] = "아우스터즈는 사용할 수 없습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_MIXING_FORGE_FAILED_SAME_OPTION_GROUP]= "아이템의 옵션 그룹이 같아서 섞을 수 없습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CONFIRM_CHANGE_SEX]= "정말로 성별을 전환하시겠습니까?";
	(*g_pGameStringTable)[STRING_MESSAGE_CANNOT_CHANGE_SEX_BY_WEAR] = "옷을 입은상태에서는 성별을 전환할 수 없습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_CANNOT_CHANGE_SEX_BY_COUPLE] = "커플이 있는 캐릭터는 성별을 전환할 수 없습니다.";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_EVENT_QUEST2_1] = "1.지혜의 심판\\n목적:주어진 퍼즐 수행";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_EVENT_QUEST2_2] = "2.결계의 열쇠\\n목적:레벨에 따라 지정된 광물 수집(8개)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_EVENT_QUEST2_3] = "3.보이지 않는 벽\\n목적:미로를 통과하여 리피니움 획득";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_EVENT_QUEST2_4] = "4.말하는 인형\\n지정된 던전에서 퍼즐 조각을 찾아 조합";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_EVENT_QUEST2_5] = "5.미래를 여는문\\n특정 클래스의 몬스터들에게서 마석을 찾아 코드표 조합";	

	(*g_pGameStringTable)[STRING_MESSAGE_SELECT_MINI_GAME] = "두 가지 시험이 마련되어 있습니다. 이중 한가지를 선택하십시오.";
	(*g_pGameStringTable)[STRING_MESSAGE_SELECT_ARROW_TILES] = "Arrow Tiles. 화살표를 따라 골 지점까지 무사히 이동하는 게임입니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_SELECT_CRAZY_MINE] = "Crazy Mine. 숫자 야구와 지뢰 찾기가 합쳐진 퍼즐게임입니다.";

	(*g_pGameStringTable)[STRING_MESSAGE_GET_RIFINIUM] = "리피니움을 획득하였습니다.";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_QUEST_STATUS_ARROW_TILES] = "Arrow Tiles";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_QUEST_STATUS_CRAZY_MINE] = "Crazy Mine";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SUCCESS_MINIGAME] ="All Stage Clear!";

	(*g_pGameStringTable)[STRING_MESSAGE_GUILD_REGIST_FAIL_ALREADY_JOIN] = "어디 한번 볼까? 자네는 이미 %s 길드 소속이라고 나와 있군";
	(*g_pGameStringTable)[STRING_MESSAGE_GUILD_REGIST_FAIL_QUIT_TIMEOUT] = "자네는 다른 길드를 탈퇴한지 얼마 되지 않았군. 조금 더 신중하게 생각하고 행동하게";
	(*g_pGameStringTable)[STRING_MESSAGE_GUILD_REGIST_FAIL_CANCEL_TIMEOUT] = "자네는 길드를 취소 당한 지 얼마 되지 않았군. 등록 조건에 부합하도록 자신을 좀 더 기르고 오게. 좀 더 신중하게 기회를 엿보도록 하게";
	(*g_pGameStringTable)[STRING_MESSAGE_GUILD_REGIST_FAIL_LEVEL] = "훌륭하지만 리더로써의 자질은 좀 부족한 것 같군. 실력을 닦고 오게나";
	(*g_pGameStringTable)[STRING_MESSAGE_GUILD_REGIST_FAIL_MONEY] = "길드를 만들려면 많은 돈이 필요하다네. 자네는 돈이 없어 보이는군...";
	(*g_pGameStringTable)[STRING_MESSAGE_GUILD_REGIST_FAIL_FAME] = "%s이라.. 난 아직 그런 이름은 들어보지도 못했다네. 그건 자네가 풋내기라는 것을 의미하지. 실력을 닦고 다시 찾아오게나";
	(*g_pGameStringTable)[STRING_MESSAGE_GUILD_REGIST_FAIL_NAME] = "길드 이름이 이미 쓰이고 있군, 다른 이름을 생각해 보게";
	(*g_pGameStringTable)[STRING_MESSAGE_GUILD_REGIST_FAIL_DENY] = "거부되었습니다.";

	(*g_pGameStringTable)[STRING_MESSAGE_GUILD_STARTING_FAIL_ALREADY_JOIN] = "당신은 이미 다른 길드에 가입되어 있습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_GUILD_STARTING_FAIL_QUIT_TIMEOUT] = "자네는 다른 길드를 탈퇴한지 얼마 되지 않았군. 조금 더 신중하게 생각하고 행동하게";
	(*g_pGameStringTable)[STRING_MESSAGE_GUILD_STARTING_FAIL_CANCEL_TIMEOUT] = "자네는 길드를 취소 당한 지 얼마 되지 않았군. 조건에 부합하도록 자신을 좀 더 기르고 오게. 좀 더 신중하게 기회를 엿보도록 하게";
	(*g_pGameStringTable)[STRING_MESSAGE_GUILD_STARTING_FAIL_LEVEL] = "자네는 아직 부족한 점이 많아 보이는구만. 조금 더 실력을 닦고 찾게나.";
	(*g_pGameStringTable)[STRING_MESSAGE_GUILD_STARTING_FAIL_MONEY] = "%s, 길드 등록을 위해서는 돈이 더 필요하다네";
	(*g_pGameStringTable)[STRING_MESSAGE_GUILD_STARTING_FAIL_FAME] = "%s이라.. 난 아직 그런 이름은 들어보지도 못했다네. 그건 자네가 풋내기라는 것을 의미하지. 실력을 닦고 다시 찾아오게나";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CLICK_TO_SHOW_DETIAL] = "클릭하시면 세부 내용을 보실 수 있습니다.";
	
	(*g_pGameStringTable)[STRING_MESSAGE_OUSTERS] = "아우스터즈";

	(*g_pGameStringTable)[STRING_MESSAGE_EVENT_FLAG_WAR_READY] = "5분뒤에 Capture the Flag! 이벤트를 실시합니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_EVENT_FLAG_WAR_START] = "Capture the Flag! 이벤트가 시작되었습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_EVENT_FLAG_WAR_FINISH] = "Capture the Flag! 이벤트가 종료되었습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_EVENT_FLAG_WAR_WINNER] = "%s 종족이 %d개의 깃발을 모아서 승리하였습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_EVENT_FLAG_WILL_POUR_ITEM_AFTER_3MIN] = "3분후에 깃발지역에서 아이템이 터집니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_EVENT_FLAG_POURED_ITEM] = "Capture the Flag 이벤트 아이템이 나왔습니다.";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_GET_EVENT_FLAG_STATUS] = "획득한 깃발수 : %d";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MUTE] = "운영자에 의해서 채팅이 금지되었습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_CANNOT_MOVE_SAFETY_ZONE_FLAG] = "깃발을 들고 안전지대로 들어갈 수 없습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_CANNOT_DROP_ITEM_BY_FLAG] = "깃대 주변에는 아이템을 버릴 수 없습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_POUR_ITEM_AFTER_SECOND] = "%d 초 후에 깃발지역에서 아이템이 터집니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CANNOT_ACTION_MOTORCYCLE_FLAG] = "깃대 주변에서는 오토바이를 타거나 내릴 수 없습니다.";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_TEAM_INFO_GUILD_NAME] = "길드 이름 : %s";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TEAM_INFO_GUILD_INTRODUCTION] = "길드 소개 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_OTHER_INFO_GUILD_NAME] = "길드 이름 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_NOT_JOIN_ANY_GUILD] = "등록된 길드 없음";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_USE_ETERNITY_FOR_RESURRECT] = "이터니티 스킬을 사용하여 살아납니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CANNOT_RELOAD_BY_VIVID_MAGAZINE]= "비비드 매거진 스킬을 배워야 사용할 수 있습니다.";
	
	(*g_pGameStringTable)[STRING_MESSAGE_RESURRECT_AFTER_SECONDS] = "%d 초 후에 부활합니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_CANNOT_TRADE_SUMMON_SYLPH] = "바람의 정령을 탄 상태에서는 거래할 수 없습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_CANNOT_USE_SUMMON_SYLPH] = "바람의 정령을 탄 상태에서 사용할 수 없습니다.";

	(*g_pGameStringTable)[STRING_MESSAGE_MODIFY_SKILL_LEVEL_1] = "%s 스킬 레벨이 %d이 되었습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_MODIFY_SKILL_LEVEL_2] = "%s 스킬 레벨이 %d가 되었습니다.";

	// 2003.09.29
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GO_TO_BEGINNER_ZONE] = "초보 전용 사냥터로 이동합니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_LEFT_PREMIUM_DAYS] = "프리미엄 서비스 사용기간이 %d일 남았습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_NOT_PREMIUM_USER] = "유료 사용자가 아닙니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_EXPIRE_PREMIUM_SERVICE_TODAY] = "프리미엄 서비스는 오늘까지 입니다.";

	(*g_pGameStringTable)[STRING_MESSAGE_EXPIRE_PREMIUM_SERVICE_MESSAGE_1] = "프리미엄 서비스 기간이 끝나기 전에 연속결제를 할 경우 다덴 마일리지와";
	(*g_pGameStringTable)[STRING_MESSAGE_EXPIRE_PREMIUM_SERVICE_MESSAGE_2] = "아이템 복권등 다양한 혜택을 받으실 수 있습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_EXPIRE_PREMIUM_SERVICE_MESSAGE_3] = "자세한 내용은 다크에덴 홈페이지(www.darkeden.com)에서 확인하실 수 있습니다.";

	(*g_pGameStringTable)[STRING_MESSAGE_LEVEL_WAR_ZONE_NAME] = "칼리고 %d층";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_SWEEPER_BONUS_1] = "모든 능력치 + 2";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SWEEPER_BONUS_2] = "체력(HP) + 20";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SWEEPER_BONUS_3] = "데미지 + 3";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SWEEPER_BONUS_4] = "지식 + 7, 민첩성 + 7";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SWEEPER_BONUS_5] = "체력(HP) + 50";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SWEEPER_BONUS_6] = "행운 + 7";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SWEEPER_BONUS_7] = "마법 공격 데미지 + 10";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SWEEPER_BONUS_8] = "지식 + 7, 힘 + 7";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SWEEPER_BONUS_9] = "체력(HP) 흡수 + 15";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SWEEPER_BONUS_10] = "물리 공격 데미지 + 10";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SWEEPER_BONUS_11] = "모든 저항력 + 7";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SWEEPER_BONUS_12] = "시야 + 5, 모든 능력치 + 4";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_JOIN_LEVEL_WAR] = "전쟁에 참가합니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CLICK_TO_WARP_REGEN_TOWER] = "클릭하시면 해당 리젠 존 타워로 이동합니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BLOOD_BIBLE_STATUS_HAS_OUSTERS] = "아우스터즈가 가지고 있습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BLOOD_BIBLE_STATUS_OUSTERS] = "아우스터즈의 수호성단에 있습니다.";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MAILBOX] = "편지함(Mail Box)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CLOSE_MAILBOX] = "편지함을 닫습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MAILBOX_TAB_MAIL] = "편지를 확인합니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MAILBOX_TAB_HELP] = "도움말을 확인합니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MAILBOX_TAB_MEMO] = "아직 지원되지 않습니다.";

	(*g_pGameStringTable)[STRING_MESSAGE_SUCCESS_CHANGED_BAT_COLOR] = "박쥐색이 변경되었습니다.";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_LEVEL_WAR] = "레벨 전쟁";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_LEFT_FAMILY_DAYS] = "패밀리 서비스 사용기간이 %d일 남았습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_EXPIRE_FAMILY_TODAY] = "패밀리 서비스는 오늘까지 입니다.";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TOO_FAR] = "더 가까이 가셔야 합니다.";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_PET_DESC_DURABILITY] = "남은 먹이양 : ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_PET_ATTR] = "속성 : ";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_SHOW_PET_INFO_WINDOW] = "애완동물 정보창을 봅니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_ENCHANT_FAIL] = "인첸트가 실패하였습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_PET_DESC_DURABILITY_2] = "남은 먹이양";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_PET_RESSURECT] = "애완동물을 부활 시키시겠습니까?";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CLOSE_PET_INFO] = "애완동물 정보창을 닫습니다.";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_CAN_ENCHANT_PET] = "2차 능력을 부여할 수 있습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CANNOT_ENCHANT_PET] = "아직은 2차 능력을 부여할 수 없습니다.";

	(*g_pGameStringTable)[STRING_MESSAGE_NEW_PET_LEVEL_1] = "%s의 레벨이 %d가 되었습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_NEW_PET_LEVEL_2] = "%s의 레벨이 %d이 되었습니다.";
	
	(*g_pGameStringTable)[STRING_MESSAGE_OPTION_NAME_LUCK_3] = "럭키";
	(*g_pGameStringTable)[STRING_MESSAGE_OPTION_NAME_LUCK_4] = "미니온";

	(*g_pGameStringTable)[STRING_MESSAGE_OPTION_NAME_ATTR_3] = "너트";
	(*g_pGameStringTable)[STRING_MESSAGE_OPTION_NAME_ATTR_4] = "크런치";

	(*g_pGameStringTable)[STRING_MESSAGE_PET_DIE_WARNING] = "%s의 먹이가 %s 분량밖에 남지 않았습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_PET_REQUEST_REFILL] = "먹이를 충전하시기 바랍니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_PET_DIE] = "%s이 사망하였습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_PET_SUMMON] = "%s을 소환하였습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_PET_CAN_GET_ATTR] = "속성을 부여하실 수 있습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_PET_GAMBLE_OK] = "%s에게 2차 능력을 부여하셨습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_PET_GAMBLE_DESC] = "아이템과 더불어 몬스터의 머리도 함께 루팅할 수 있습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_PET_GAMBLE_DESC_TEEN] = "아이템과 더불어 소울 스톤도 함께 루팅할 수 있습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_PET_CAN_GET_OPTION] = "%s에게 옵션을 부여하실 수 있습니다.";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_HPBAR_EXP_DESCRIPTION_NEW] = "남은 경험치 : %s (%s%%)";
	(*g_pGameStringTable)[STRING_MESSAGE_PET_GAMBLE_FAIL] = "2차 능력 부여가 실패하였습니다.";

	(*g_pGameStringTable)[STRING_MESSAGE_OPTION_ENAME_LUCK_3] = "Lucky";
	(*g_pGameStringTable)[STRING_MESSAGE_OPTION_ENAME_LUCK_4] = "Minion";

	(*g_pGameStringTable)[STRING_MESSAGE_OPTION_ENAME_ATTR_3] = "Nut";
	(*g_pGameStringTable)[STRING_MESSAGE_OPTION_ENAME_ATTR_4] = "Crunch";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_CAN_PET_REVIVAL] = "부활시킬 수 있습니다.";	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CANNOT_PET_REVIVAL]= "죽은 경우에만 사용할 수 있습니다.";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_PET_CAN_CUT_HEAD] = "2차능력 있음";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_PET_CANNOT_CUT_HEAD] = "2차능력 없음";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_REMOVE_PET_OPTION] = "애완동물의 옵션을 지우시겠습니까?";

	(*g_pGameStringTable)[STRING_MESSAGE_CANNOT_EVENT_GIFT_BOX] = "양쪽 모두 선물상자가 있어야 교환할 수 있습니다.";

	(*g_pGameStringTable)[STRING_MESSAGE_EVENT_NETMARBLE_1] = "축하합니다! 학교로 가는 이벤트에 참여할 자격을 얻으셨습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_EVENT_NETMARBLE_2] = "99개의 넷마블 카드는 응모권입니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_EVENT_NETMARBLE_3] = "이벤트가 종료될 때까지 잘 보관하고 계시기 바랍니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_EVENT_NETMARBLE_4] = "만일 카드가 없을 경우 이벤트에 참여하실 수 없습니다.";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CAN_USE_PET_FOOD] = "오른쪽 버튼을 클릭하시면 애완동물에게 먹이를 줄 수 있습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DETACH_PET_FOOD] = "오른쪽 버튼을 클릭하시면 아이템을 분리하실 수 있습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_USE_PET_FOOD] = "애완동물에게 먹이를 먹이시겠습니까?";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CANNOT_DETACH] = "아이템을 분리하려면 애완동물을 소환하지 않은 상태에서만 가능합니다.";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_COMPUTER_STRING_0] = "검&도";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_COMPUTER_STRING_1] = "검";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_COMPUTER_STRING_2] = "도";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_COMPUTER_STRING_3] = "총";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_COMPUTER_STRING_4] = "SMG";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_COMPUTER_STRING_5] = "AR";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_COMPUTER_STRING_6] = "SG";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_COMPUTER_STRING_7] = "SR";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_COMPUTER_STRING_8] = "십자가&메이스";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_COMPUTER_STRING_9] = "십자가";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_COMPUTER_STRING_10] = "메이스";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_COMPUTER_STRING_11] = "방어구";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_COMPUTER_STRING_12] = "헬멧";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_COMPUTER_STRING_13] = "상의";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_COMPUTER_STRING_14] = "하의";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_COMPUTER_STRING_15] = "방패";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_COMPUTER_STRING_16] = "장갑";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_COMPUTER_STRING_17] = "벨트";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_COMPUTER_STRING_18] = "신발";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_COMPUTER_STRING_19] = "악세서리";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_COMPUTER_STRING_20] = "목걸이";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_COMPUTER_STRING_21] = "팔찌";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_COMPUTER_STRING_22] = "반지";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_COMPUTER_STRING_23] = "기타";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_COMPUTER_STRING_24] = "포션";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_COMPUTER_STRING_25] = "물병&성수";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_COMPUTER_STRING_26] = "탄창";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_COMPUTER_STRING_27] = "폭탄&지뢰";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_COMPUTER_STRING_28] = "무전기";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_COMPUTER_STRING_29] = "기타아이템";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BOOK_NAME_0] = "과학으로 증명해 본 뱀파이어";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BOOK_NAME_1] = "과학적 고찰- 흡혈박쥐는 정말로 사람의 피를 빨아먹을까";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BOOK_NAME_2] = "루마니아와 체코슬로바키아의 흡혈귀 전설";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BOOK_NAME_3] = "루마니아의 블라드 테페스";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BOOK_NAME_4] = "멕시코와 아라비아의 흡혈귀 전설";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BOOK_NAME_5] = "뱀파이어 A to Z";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BOOK_NAME_6] = "뱀파이어란";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BOOK_NAME_7] = "뱀파이어의 능력";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BOOK_NAME_8] = "뱀파이어의 습성";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BOOK_NAME_9] = "뱀파이어의 약점과 퇴치방법";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BOOK_NAME_10] = "뱀파이어의 역사";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BOOK_NAME_11] = "서인도와 폴리네시아의 흡혈귀 전설";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BOOK_NAME_12] = "성경책에서의 뱀파이어";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BOOK_NAME_13] = "슬라브 민간신앙 중 흡혈귀에 관한 이야기들";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BOOK_NAME_14] = "일본과 말레이반도의 흡혈귀 전설";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BOOK_NAME_15] = "푸른수염의 사나이라고 여겨지는 살인귀 - 질 드 레";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BOOK_NAME_16] = "헝가리의 피의 여백작- 에르체베트 바토리";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BOOK_NAME_17] = "흡혈귀의 예방책";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BOOK_NAME_18] = "흡혈귀의 전설";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BOOK_NAME_19] = "흡혈귀의 특징";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BOOK_NAME_20] = "흡혈박쥐와 늑대인간";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_ENAME_TNDEAD] ="TNDEAD";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_ENAME_ARKHAN] ="ARKHAN";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_ENAME_ESTROIDER] ="ESTROIDER";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_ENAME_GOLEMER] =	"GOLEMER";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_ENAME_DARKSCREAMER] ="DARKSCREAMER";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_ENAME_DEADBODY] ="DEADBODY";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_ENAME_MODERAS] =	"MODERAS";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_ENAME_VANDALIZER] ="VANDALIZER";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_ENAME_DIRTYSTRIDER] ="DIRTYSTRIDER";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_ENAME_HELLWIZARD] ="HELLWIZARD";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_ENAME_TNSOUL] ="TNSOUL";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_ENAME_IRONTEETH] ="IRONTEETH";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_ENAME_REDEYE] ="REDEYE";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_ENAME_CRIMSONSLAUGTHER] ="CRIMSONSLAUGTHER";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_ENAME_HELLGUARDIAN] ="HELLGUARDIAN";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_ENAME_SOLDIER] =	"SOLDIER";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_ENAME_RIPPER] ="RIPPER";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_ENAME_BIGFANG] =	"BIGFANG";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_ENAME_LORDCHAOS] ="LORDCHAOS";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_ENAME_CHAOSGUARDIAN] ="CHAOSGUARDIAN";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_ENAME_HOBBLE] ="HOBBLE";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_ENAME_CHAOSNIGHT] ="CHAOSNIGHT";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_ENAME_WIDOWS] ="WIDOWS";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_ENAME_KID] ="KID";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MONSTER_ENAME_SHADOWWING] ="SHADOWWING";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_HAN_DOMAIN_BLADE]="도";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_HAN_DOMAIN_SWORD]="검";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_HAN_DOMAIN_ENCHANT]="인챈트";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_HAN_DOMAIN_GUN]	="총";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_HAN_DOMAIN_HEAL]="힐";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_HAN_DOMAIN_ETC]="기타";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_HAN_DOMAIN_VAMPIRE]="뱀파이어";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_HAN_DOMAIN_OUSTERS]="아우스터즈";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ENG_DOMAIN_ETC]="Etc";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ENG_DOMAIN_VAMPIRE]="Vampire";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ENG_DOMAIN_OUSTERS]="Ousters";

	(*g_pGameStringTable)[STRING_MESSAGE_SOUL_STONE]="소울 스톤";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CAN_PET_MUTANT] = "변신 시킬 수 있습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CANNOT_PET_MUTANT] = "변신 시킬 수 없습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_PET_MUTANT] = "펫을 울버린으로 변신 시키시겠습니까?";
	
	// 2004, 03, 26 sobeit add start
	(*g_pGameStringTable)[STRING_ERROR_CANNOT_AUTHORIZE_BILLING] = "빌링 정보를 찾을 수 없습니다.";
    (*g_pGameStringTable)[STRING_ERROR_CANNOT_CREATE_PC_BILLING] = "유료 사용자가 아니라서 캐릭터를 못 만듭니다.";
	// 2004, 03, 26 sobeit add end
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_PET_DEAD_DAY] = "죽은지 %d일 지났습니다.";

	// 2004, 04, 3 sobeit add start
	(*g_pGameStringTable)[UI_STRING_MESSAGE_DESC_LUCKY] = "행운 : ";
	// 2004, 04, 3 sobeit add end

	// 2004, 4, 13 sobeit add start
	(*g_pGameStringTable)[UI_STRING_MESSAGE_PET_QUEST_NPC_SLAYER] = "그루버";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_PET_QUEST_NPC_VAMPIRE] = "카파티니";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_PET_QUEST_NPC_OUSTERS] = "아마타";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_PET_QUEST_SLAYER] = "센터우로 퀘스트\\n목적: %d분동안\\n{%s} {%d}마리를 잡아라";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_PET_QUEST_VAMPIRE] = "스터지 퀘스트\\n목적: %d분동안\\n{%s} {%d}마리를 잡아라";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_PET_QUEST_OUSTERS] = "픽시 퀘스트\\n목적: %d분동안\\n{%s} {%d}마리를 잡아라";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_PET_QUEST_CLEAR] = "에게 돌아가십시오.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CAN_3RD_ENCHANT_PET] = "3차 능력을 부여할 수 있습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CANNOT_3RD_ENCHANT_PET] = "아직은 3차 능력을 부여할 수 없습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_PET_3RD_GAMBLE_FAIL] = "3차 능력 부여가 실패하였습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_PET_3RD_GAMBLE_OK] = "%s에게 3차 능력을 부여하셨습니다.";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CANNOT_SUMMON_2ND_PET] = "레벨 40 이하는 2차 펫을 소환할 수 없습니다.";

	(*g_pGameStringTable)[STRING_MESSAGE_SEARCHING_MINE] = "찾아야할 지뢰수 : %d 체크한 지뢰 수 : %d";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CANNOT_MIXING_GRADE_VALUE] = "아이템간 등급차가 2등급을 넘으면 믹싱할 수 없습니다.";
		
	// 2004, 4, 13 sobeit add end
	
	(*g_pGameStringTable)[STRING_MESSAGE_MINIGAME_GAME_OVER] = "game over";
	(*g_pGameStringTable)[STRING_MESSAGE_MINIGAME_ALL_STAGE_CLEAR] = "All stage clear";

	// 2004, 5, 6, sobeit add start
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SELECT_QUEST_OUSTERS] = "요 근래 몬스터 수가 급증하고 있습니다. 이 몬스터들로 인해서 결계의 힘이 점점 약해지고 있습니다. 우리 종족의 부활을 위해서라도 이 몬스터들을 처리하고 결계를 지켜내야 해야 합니다. 이 임무는 중도에 접속을 종료하게 되면 무효가 되니 주의해야 하며, 퀘스트에 해당하는 몬스터 수만큼 사냥하게 되고 돌아 오신다면 제가 귀한 선물을 드리도록 하겠습니다. 자, 그럼 어떤 퀘스트를 선택 하실래요?";
	// 2004, 5, 6, sobeit add end

	// 2004, 6, 22 By Csm 
	(*g_pGameStringTable)[STRING_ERROR_CHILDGUARD_DENYED] = "User who age under 18 will not able to play after 22.00 O'clock.";
	// end 

	//2004, 5, 11 sobeit add start - 펫 보관소
	(*g_pGameStringTable)[STRING_MESSAGE_KEEP_PETITEM] = "펫을 보관 하시겠습니까?";
	(*g_pGameStringTable)[STRING_MESSAGE_GET_KEEP_PETITEM] = "펫을 찾으시겠습니까?";
	//2004, 5, 11 sobeit add end - 펫 보관소

	//2004, 5, 13 sobeit add start
	(*g_pGameStringTable)[STRING_MESSAGE_EXIST_ITEM_ALREADY] = "이미 다른 아이템이 있습니다.";
	//2004, 5, 13 sobeit add end

	// 2004, 5, 17 sobeit add start
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ITEM_GRADE] = "  ⅠⅡⅢⅣⅤⅥⅦⅧⅨⅩ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ITEM_GRADE_DESC] = "등급 :";
	// 2004, 5, 17 sobeit add end

	// 2004, 6, 4, sobeit add start - sms 관련
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SMS_SEND_OK] = "메세지를 성공적으로 보냈습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SMS_SEND_FAIL] = "메세지를 보내는데 실패했습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SMS_ADD_FAIL] = "리스트에 추가하는데 실패했습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SMS_DELETE_FAIL] = "리스트에서 삭제하는데 실패했습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SMS_FAIL_MAX_NUM_EXCEEDED] = "저장 가능 번호가 초과되었습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SMS_FAIL_INVALID_DATA] = "잘못된 정보 입니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SMS_FAIL_NO_SUCH_EID] = "정보를 찾을 수 없습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SMS_FAIL_NOT_ENOUGH_CHARGE] = "충전량이 모자랍니다.";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SMS_WINDOW] = "SMS창(SMS Window)";
	// 2004, 6, 4, sobeit add end - sms 관련
	// 2004, 6, 8, sobeit add start - sms 관련
	(*g_pGameStringTable)[UI_STRING_HELP_SMS_SEND] = "메세지를 전송합니다.";
	(*g_pGameStringTable)[UI_STRING_HELP_SMS_VIEW_LIST] = "전화 번호부를 봅니다.";
	(*g_pGameStringTable)[UI_STRING_HELP_SMS_WINDOW] = "특수 문자를 선택 합니다.";

	(*g_pGameStringTable)[UI_STRING_HELP_SMS_ADDSEND] = "선택한 번호를 보내기 목록에 추가 합니다.";
	(*g_pGameStringTable)[UI_STRING_HELP_SMS_DELETE] = "선택한 번호를 삭제 합니다.";
	(*g_pGameStringTable)[UI_STRING_HELP_SMS_NEW] = "신규 번호를 등록 합니다.";
	// 2004, 6, 8, sobeit add end - sms 관련

	// 2004, 6, 14 sobeit add start use sms item
	(*g_pGameStringTable)[UI_STRING_MESSAGE_USE_SMSITEM] = "SMS 아이템을 사용하시겠습니까?";
	// 2004, 6, 14 sobeit add end

	// 2004, 6, 15 sobeit add start - nameinge window help
	(*g_pGameStringTable)[UI_STRING_MESSAGE_NAMING_WINDOW] = "닉네임창(NickName Window)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CHANGE_PET_NICKNAME] = "펫의 닉네임을 변경합니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CHANGE_PLAYER_NICKNAME] = "유저 자유 닉네임을 변경합니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ADD_PLAYER_NICKNAME] = "닉네임을 추가 합니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SELECT_PLAYER_NICKNAME] = "선택된 닉네임으로 변경합니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_NICKNAME_CHANGE_OK] = "닉네임이 변경되었습니다.";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_NICKNAME_SELECT_FAIL_FORCED] = "운영자가 강제 지정한 닉네임은 변경할 수 없습니다.";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_USE_NAMINGITEM] = "네이밍 아이템을 사용하시겠습니까?";
	// 2004, 6, 15 sobeit add end
 
	// 2004, 6, 25 sobeit add start
	(*g_pGameStringTable)[UI_STRING_MESSAGE_PET_NAMING_SUMMON] = "펫이 소환중 일때만 닉네임을 변경할 수 있습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_PET_NAMING_WOLVERINE] = "울버린은 펜 아이템 없이 닉네임을 변경할 수 있습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_FAIL_SEARCH_ITEM] = "아이템을 찾을 수 없습니다.";
	// 2004, 6, 25 sobeit add end

	// 2004, 7,1 sobeit add start
	(*g_pGameStringTable)[UI_STRING_CORE_ZAP_BLACK] = "물리 공격력 +%d";
	(*g_pGameStringTable)[UI_STRING_CORE_ZAP_RED] = "마법 공격력 +%d";
	(*g_pGameStringTable)[UI_STRING_CORE_ZAP_BLUE] = "물리 방어력 +%d";
	(*g_pGameStringTable)[UI_STRING_CORE_ZAP_GREEN] = "마법 방어력 +%d";

	(*g_pGameStringTable)[UI_STRING_CORE_ZAP_REWARD_ALL_STAT] = "모든 능력치 +%d(4Set)";
	(*g_pGameStringTable)[UI_STRING_CORE_ZAP_REWARD_ALL_REG] = "모든 저항력 +%d(4Set)";

	// 2004, 7,1 sobeit add end

	// 2004, 7,10 sobeit add start
	(*g_pGameStringTable)[UI_STRING_GQUEST_CAN_NOT] = "수행불가";
	(*g_pGameStringTable)[UI_STRING_GQUEST_CAN_ACCEPT] = "수행가능";
	(*g_pGameStringTable)[UI_STRING_GQUEST_DOING] = "수행중";
	(*g_pGameStringTable)[UI_STRING_GQUEST_SUCCESS] = "성공";
	(*g_pGameStringTable)[UI_STRING_GQUEST_COMPLETE] = "완료";
	(*g_pGameStringTable)[UI_STRING_GQUEST_FAIL] = "실패";
	(*g_pGameStringTable)[UI_STRING_GQUEST_CAN_REPLAY] = "재수행가";
	(*g_pGameStringTable)[UI_STRING_GQUEST_MISSION] = "임무%d:%s";

	(*g_pGameStringTable)[UI_STRING_GQUEST_BUTTON_ACCEPT] = "퀘스트를 수행합니다.";
	(*g_pGameStringTable)[UI_STRING_GQUEST_BUTTON_GIVEUP] = "퀘스트를 포기합니다.";
	(*g_pGameStringTable)[UI_STRING_GQUEST_TAB_PROCESS] = "진행중인 목록을 봅니다.";
	(*g_pGameStringTable)[UI_STRING_GQUEST_TAB_COMPLETE] = "완료된 목록을 봅니다.";
	// 2004, 7,10 sobeit add end

	// 2004, 7, 15 sobeit add start
	(*g_pGameStringTable)[UI_STRING_NOTICE_EVENT_GOLD_MEDALS] = "금메달을 %d개 모았습니다.";
	// 2004, 7, 15 sobeit add start

	// 2004, 7, 19 sobeit add start
	(*g_pGameStringTable)[STRING_ERROR_KEY_EXPIRED] = "인증키 유효 시간이 지났습니다. 다시 접속 해주시십요.";
	(*g_pGameStringTable)[STRING_ERROR_NOT_FOUND_KEY] = "인증키가 없거나 잘못되었습니다. 다시 접속 해주시십요.";
	// 2004, 7, 19 sobeit add end

	// 2004, 7, 23 sobeit add start
	(*g_pGameStringTable)[UI_STRING_GQUEST_UPDATE] = "퀘스트 정보가 업데이트 되었습니다.";
	// 2004, 7, 23 sobeit add start

	// 2004, 8, 5 sobeit add start
	(*g_pGameStringTable)[UI_STRING_CHANGE_EVENTITEM_PRICE] = "이벤트 아이템을 %d원에 파실 수 있습니다.";
	// 2004, 8, 5 sobeit add start
	
	// 2004, 8, 26, sobeit add start
	(*g_pGameStringTable)[STRING_MESSAGE_TOO_MANY_GUILD_REGISTERED] = "공성 신청한 길드가 너무 많아서 신청할 수 없습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_REINFORCE_DENYED] = "수비측 참전 신청이 이미 거부당해서 재신청 할 수 없습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_ALREADY_REINFORCE_ACCEPTED] = "수비측 참전 신청이 허가된 길드가 이미 있어서 신청할 수 없습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_NO_WAR_REGISTERED] = "공성 신청한 길드가 없어서 수비측 참전 신청을 할 수 없습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_CANNOT_ACCEPT] = "수비측 참전 신청을 수락할 수 없습니다";
	(*g_pGameStringTable)[STRING_MESSAGE_ACCEPT_OK] = "참전 신청을 수락하였습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_CANNOT_DENY] =	"수비측 참전 신청을 거부할 수 없습니다.";
    (*g_pGameStringTable)[STRING_MESSAGE_DENY_OK] = "참전 신청을 거부하였습니다.";
	// 2004, 8, 26, sobeit add end

	(*g_pGameStringTable)[STRING_MESSAGE_SIEGE_POTAL_200] = "트랩존으로 이동";
	(*g_pGameStringTable)[STRING_MESSAGE_SIEGE_POTAL_201] = "내성문 앞으로 이동";
	(*g_pGameStringTable)[STRING_MESSAGE_SIEGE_POTAL_202] = "내성 안으로 이동";
	(*g_pGameStringTable)[STRING_MESSAGE_SIEGE_POTAL_203] = "내성 안으로 이동";

	(*g_pGameStringTable)[STRING_MESSAGE_LOGIN_ERROR_NONPK] = "캐릭터의 레벨이 높아 접속할 수 없습니다. 다른 서버를 이용해 주십시요.";

	(*g_pGameStringTable)[STRING_MESSAGE_DAUM_EVENT_1] = "다크에덴이 준비한 초보자 이벤트! 게임에 익숙하지 못한 초보유저를 위하여 다크에덴에서 조그마한 선물과 함께 복권을 드립니다. 이벤트를 완료하고 얻은 복권으로 다양하게 준비된 선물의 주인이 될 수 있습니다. 또한 다음 레벨에 도달하시면 보다 다양한 선물이 준비되어 있습니다. 이벤트 아이템을 모두 모아 고성능의 아이템을 느껴보시기 바랍니다. 이벤트는 8개의 이벤트로 이루어져 있으며 각 레벨에 따라 지급됩니다. 퀘스트 정보 창 단축키는 Ctrl + Q 입니다. 다크에덴의 세계에서 즐거운 시간이 되시길 바라며 나만의 캐릭터도 키우고 선물도 받을 수 있는 기회를 놓치지 마세요.";
	(*g_pGameStringTable)[STRING_MESSAGE_DAUM_EVENT_2] = "다크에덴이 준비한 초보자 이벤트! %d 레벨에 도달하셨군요. %s 상자를 넣어드렸습니다. Ctrl + Q 을 눌러 확인해 보세요. 이전에 수령하신 상자가 있다면 아이템을 수령하실 수 있습니다. 자 여러분들께 드린 아이템은 시간제한이 걸려있는 아이템입니다. 기존 착용 제한이 있는 아이템들 보다 높은 수준의 아이템으로써 이벤트를 통해 지급된 이벤트 아이템인 관계로 거래와 교환이 불가능하답니다. 차후 보다 더 좋은 아이템을 구하시면 NPC를 통하여 판매를 하실 수 있습니다. 아이템 하단에 보시면 앞으로 남아 있는 시간이 표시됩니다. 아차 이 시간은 여러분들이 다크에덴 월드를 떠나 계셔도 실시간으로 적용되기 때문에 이 시간을 유용하게 사용하시기 바랍니다. 그럼 계속해서 즐거운 시간되시기 바랍니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_DAUM_EVENT_3] = "%d 레벨에 도달하셨군요. Ctrl + Q 을 눌러 확인해 보세요. 이전에 수령하신 상자가 있다면 아이템을 수령하실 수 있습니다.";
	(*g_pGameStringTable)[STRING_MESSAGE_DAUM_EVENT_BOX1] = "빨강색";
	(*g_pGameStringTable)[STRING_MESSAGE_DAUM_EVENT_BOX2] = "주황색";
	(*g_pGameStringTable)[STRING_MESSAGE_DAUM_EVENT_BOX3] = "노랑색";
	(*g_pGameStringTable)[STRING_MESSAGE_DAUM_EVENT_BOX4] = "초록색";
	(*g_pGameStringTable)[STRING_MESSAGE_DAUM_EVENT_BOX5] = "파랑색";
	(*g_pGameStringTable)[STRING_MESSAGE_DAUM_EVENT_BOX6] = "남색";
	(*g_pGameStringTable)[STRING_MESSAGE_DAUM_EVENT_BOX7] = "보라색";
	(*g_pGameStringTable)[STRING_MESSAGE_DAUM_EVENT_BOX8] = "검정색";


	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_RANK_BONUS_PERCEPTION] = "모능 +2";
    (*g_pGameStringTable)[UI_STRING_MESSAGE_RANK_BONUS_STONE_OF_SAGE] = "지식(INT) +5";
    (*g_pGameStringTable)[UI_STRING_MESSAGE_RANK_BONUS_FOOT_OF_RANGER] = "민첩성(DEX) +5";
    (*g_pGameStringTable)[UI_STRING_MESSAGE_RANK_BONUS_WARRIORS_FIST] = "힘(STR) +5";

    (*g_pGameStringTable)[UI_STRING_MESSAGE_RANK_BONUS_ACID_INQUIRY] = "애시드(Acid) 저항 +10%";
    (*g_pGameStringTable)[UI_STRING_MESSAGE_RANK_BONUS_BLOODY_INQUIRY] = "블러드(Blood) 저항 +10%";
    (*g_pGameStringTable)[UI_STRING_MESSAGE_RANK_BONUS_CURSE_INQUIRY] = "커스(Curse) 저항+10%";
    (*g_pGameStringTable)[UI_STRING_MESSAGE_RANK_BONUS_POISON_INQUIRY] = "포이즌(Poison) 저항 +10%";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_RANK_BONUS_INQUIRY_MASTERY] = "모든 저항 +3%";

    (*g_pGameStringTable)[UI_STRING_MESSAGE_RANK_BONUS_POWER_OF_SPIRIT] = "방어율(Protection) 5%증가";
    (*g_pGameStringTable)[UI_STRING_MESSAGE_RANK_BONUS_WIND_OF_SPIRIT] = "회피율(Defense) 5%증가";
    (*g_pGameStringTable)[UI_STRING_MESSAGE_RANK_BONUS_PIXIES_EYES] = "명중률(To hit) 5%증가";
    (*g_pGameStringTable)[UI_STRING_MESSAGE_RANK_BONUS_GROUND_OF_SPIRIT] = "마법력(MP) 5%증가";
    (*g_pGameStringTable)[UI_STRING_MESSAGE_RANK_BONUS_FIRE_OF_SPIRIT] = "크리티컬(Critical) 공격력 5%증가";

    (*g_pGameStringTable)[UI_STRING_MESSAGE_RANK_BONUS_EVOLUTION_IMMORTAL_HEART] = "생명력(HP) 5% 증가";
    (*g_pGameStringTable)[UI_STRING_MESSAGE_RANK_BONUS_BEHEMOTH_ARMOR_2] = "회피율(Defense) 5%증가 ";
    (*g_pGameStringTable)[UI_STRING_MESSAGE_RANK_BONUS_DRAGON_EYE_2] = "명중률(To hit) 5%증가";
    (*g_pGameStringTable)[UI_STRING_MESSAGE_RANK_BONUS_EVOLUTION_RELIANCE_BRAIN] = "마법력(MP) 5%증가";
    (*g_pGameStringTable)[UI_STRING_MESSAGE_RANK_BONUS_HEAT_CONTROL] = "크리티컬(Critical) 공격력 5%증가";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_RANK_BONUS_ACID_MASTERY] = "상대방 애시드(Acid) 저항 10% 감소";
    (*g_pGameStringTable)[UI_STRING_MESSAGE_RANK_BONUS_BLOODY_MASTERY] = "상대방 블러드(Blood) 저항 10% 감소";
    (*g_pGameStringTable)[UI_STRING_MESSAGE_RANK_BONUS_CURSE_MASTERY] = "상대방 커스(Curse) 저항 10%감소";
    (*g_pGameStringTable)[UI_STRING_MESSAGE_RANK_BONUS_POISON_MASTERY] = "상대방 포이즌(Poison) 저항 10%감소";
    (*g_pGameStringTable)[UI_STRING_MESSAGE_RANK_BONUS_SKILL_MASTERY] = "상대방 모든 저항 3% 감소";

    (*g_pGameStringTable)[UI_STRING_MESSAGE_RANK_BONUS_SALAMANDERS_KNOWLEDGE] = "불계열 정령 +1";
    (*g_pGameStringTable)[UI_STRING_MESSAGE_RANK_BONUS_UNDINES_KNOWLEDGE] = "물계열 정령 +1";
    (*g_pGameStringTable)[UI_STRING_MESSAGE_RANK_BONUS_GNOMES_KNOWLEDGE] = "대지계열 정령 +1";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SIEGE_ATTACK] = "(공격측)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SIEGE_DEFENSE] = "(수비측)";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_NOT_LOGINED] = "(비접속중)";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_GUILD_LIST_ID] = "아이디(ID)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GUILD_LIST_SERVER] = "접속 서버(SERVER)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GUILD_LIST_GRADE] = "등급(GRADE)";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_TEAM_COMMAND_WINDOW] = "팀 명령(Team Command)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TEAM_LIST_WINDOW] = "팀 목록(Team List)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TEAM_WAIT_LIST_WINDOW] = "대기 팀 목록(Wait Team List)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TEAM_UNION_WINDOW] = "팀 연합(Team Union)";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_CLAN_COMMAND_WINDOW] = "클랜 명령(Clan Command)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CLAN_LIST_WINDOW] = "클랜 목록(Clan List)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CLAN_WAIT_LIST_WINDOW] = "대기 클랜 목록(Wait Clan List)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CLAN_UNION_WINDOW] = "클랜 연합(Clan Union)";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_GUILD_COMMAND_WINDOW] = "길드 명령(Guild Command)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GUILD_LIST_WINDOW] = "길드 목록(Guild List)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GUILD_WAIT_LIST_WINDOW] = "대기 길드 목록(Wait Guild List)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GUILD_UNION_WINDOW] = "길드 연합(Guild Union)";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_TOTAL_GUILD_DESC1] = "선택한 연합길드를 가입합니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TOTAL_GUILD_DESC2] = "선택한 연합길드를 탈퇴합니다. ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TOTAL_GUILD_DESC3] = "선택한 연합길드를 추방합니다.";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TOTAL_GUILD_ALREADY_IN_UNION] = "이미 길드에 가입을 했습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TOTAL_GUILD_ALREADY_OFFER_SOMETHING] = "이미 연합길드에 신청되었습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TOTAL_GUILD_TARGET_IS_NOT_MASTER] = "상대방이 마스터가 아닙니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TOTAL_GUILD_NOT_IN_UNION] = "연합에 가입된 상태가 아닙니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TOTAL_GUILD_MASTER_CANNOT_QUIT] = "연합의 마스터 길드는 스스로 탈퇴할 수 없습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TOTAL_GUILD_NO_TARGET_UNION] = "해당하는 연합이 없습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TOTAL_GUILD_NOT_YOUR_UNION] = "해당 연합 소속이 아닙니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TOTAL_GUILD_SOURCE_IS_NOT_MASTER] = "신청한 사람이 마스터가 아닙니다.";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_TOTAL_GUILD_JOIN_ASK] = "한 연합길드에 소속되면 다른 연합길드에 복수 가입할 수 없습니다.   가입하시겠습니까?";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TOTAL_GUILD_MESSAGE_OK] = "성공적으로 처리되었습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TOTAL_GUILD_MESSAGE_REFUSE] = "상대방 길드마스터가 거절 하셨습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TOTAL_GUILD_MESSAGE_SUCCESS] = "성공적으로 연합길드가 창설되었습니다";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_TOTAL_GUILD_LEAVE_ASK] = "정말 탈퇴 하시겠습니까?";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TOTAL_GUILD_LEAVE_MSG] = "길드마스터의 승인을 신청한다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TOTAL_GUILD_LEAVE_MSG2] = "지금 즉시 탈퇴한다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TOTAL_GUILD_LEAVE_OK] = "탈퇴를 신청하시고 길드마스터가 승인할 경우 페널티가 없습니다. 신청하시겠습니까?";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TOTAL_GUILD_LEAVE_CANCEL] = "지금 즉시 탈퇴 친청하시면 바로 탈퇴가 가능하지만 페널티가 있습니다. 바로 탈퇴하시겠습니까?";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TOTAL_GUILD_DEPORT_ASK] = "정말로 추방을 희망하십니까?";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TOTAL_GUILD_DEPORT_OK] =  "%S 님이 강제로 추방되었습니다.";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_TOTAL_UNION_JOIN_MSG] =  "%s 길드가 연합길드 가입을 신청합니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TOTAL_UNION_DEPORT_MSG] =  "%s 길드가 연합길드 탈퇴를 신청합니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TOTAL_UNION_PENALTY] =  "연합길드에 강제로 탈퇴한 기록이 있습니다.";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ASKING_RECALL] =  "%s 님을 호출하시겠습니까?";
	
	(*g_pGameStringTable)[UI_STRING_LEARN_SKILL_LEVEL] =  "스킬 배움 레벨 : %d 레벨";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_TOTAL_GUILD_LEAVE_ACCEPT] =  "연합 탈퇴를 수락합니다";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TOTAL_GUILD_LEAVE_DENY] =  "연합 탈퇴를 거절합니다.";


	(*g_pGameStringTable)[UI_STRING_MESSAGE_REQUEST_UNION_ERROR_1] =  "길드 마스터만이 연합신청을 할 수 있습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_REQUEST_UNION_ERROR_2] =  "이미 연합에 가입되어 있습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_REQUEST_UNION_ERROR_3] =  "연합의 마스터가 아닙니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_UNION_ERROR_NO_SLOT] =  "연합의 빈 자리가 없습니다.";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_EQUIP_BLOOD_BIBLE] = "피의 성서 징표를 장착합니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_RENT_BLOOD_BIBLE] = "피의 성서 징표를 빌립니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_RENT_BLOOD_BIBLE2] = "%s의 징표를 빌립니다. (%s)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_RENT_LATER_BLOOD_BIBLE] = "다음에 빌리겠습니다.";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_RANGER_SAY] = "Ranger/";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MODIFY_TAX_OK] = "세율이 성공적으로 변경 되었습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MODIFY_TAX_FAIL] = "세율 변경에 실패 하였습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MODIFY_TAX] = "변경할 세율을 입력합니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_RANGER_SAY2] = "레인져";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_REMOVE_CURSE_1] = "♡";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_REMOVE_CURSE_2] = "사랑";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_REMOVE_CURSE_3] = "사랑해";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_REMOVE_CURSE_4] = "사랑해요";

	(*g_pGameStringTable)[STRING_MESSAGE_RACE_WAR_STARTED_IN_OTHER_SERVER] = "1번 서버에서 전쟁이 시작되었습니다. 전쟁에 참여하시려면 1번서버로 이동하시면 됩니다.  종족간의 전쟁에서 많은 수의 성서를 확보해야합니다.";


	(*g_pGameStringTable)[UI_STRING_MESSAGE_APPOINT_SUBMASTER] =  "서브 마스터로 임명합니다.";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_CAN_SKILL_DELETE] =  "스킬 배움 포인트 회수 가능";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CANNOT_SKILL_DELETE] =  "스킬 배움 포인트 회수 불가능";

	(*g_pGameStringTable)[STRING_MESSAGE_CANNOT_SKILLTREE_DELETE] =  "포인트를 회수할 수 없습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TOO_MANY_MEMBER] =  "멤버가 50명을 넘어 가입할 수 없습니다.";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_CONFIRM_DOWN_SKILL2] =  "%s 스킬의 스킬 배움 포인트를 회수 합니다. 소모 비용은 $%s입니다. 변경하시겠습니까?";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_UNION_CHATTING] =  "연합채팅 하기";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SHOW_UNION_CHATTING] =  "연합채팅 보기";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_NOT_SHOW_UNION_CHATTING] =  "연합채팅 안보기";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_USE_SIEGE_FOR_RESURRECT] = "내성문 앞에서 부활합니다.";
	
	(*g_pGameStringTable)[UI_STRING_POWER_JJANG_GET_POINT] = "파워짱 포인트 가져오기";
	(*g_pGameStringTable)[UI_STRING_POWER_JJANG_POINT] = "내 파워짱 누적 포인트";
	(*g_pGameStringTable)[UI_STRING_POWER_JJANG_AVAILABLE] = "교환 가능한 포인트";
	(*g_pGameStringTable)[UI_STRING_POWER_JJANG_NUMBER_1] = "핸드폰";
	(*g_pGameStringTable)[UI_STRING_POWER_JJANG_NUMBER_2] = "번호";
	(*g_pGameStringTable)[UI_STRING_POWER_JJANG_GET_POINT_HELP] = "파워짱 포인트를 가져옵니다.";
	(*g_pGameStringTable)[UI_STRING_POWER_JJANG_EXCHANGE_HELP] = "파워짱 포인트로 아이템을 교환합니다.";
	(*g_pGameStringTable)[UI_STRING_POWER_JJANG_REQUEST_OK] = "파워짱 포인트가 성공적으로 적용되었습니다. 전송된 포인트 : %d 점";


	(*g_pGameStringTable)[UI_STRING_POWER_JJANG_ERROR_NO_MEMBER] = "파워짱 회원이 아닙니다. www.powerzzang.com 에서 확인하시기 바랍니다.";
	(*g_pGameStringTable)[UI_STRING_POWER_JJANG_ERROR_SERVER_ERROR] = "파워짱 서버에 이상이 있습니다.다시 한번 시도해보시고 안되면 www.powerzzang.com 에서 확인하시기 바랍니다.";
	(*g_pGameStringTable)[UI_STRING_POWER_JJANG_ERROR_PROCESS_ERROR] = "파워짱 DB에 이상이 있습니다.다시 한번 시도해보시고 안되면 www.powerzzang.com 에서 확인하시기 바랍니다.";
	(*g_pGameStringTable)[UI_STRING_POWER_JJANG_ERROR_NO_POINT] = "누적된 파워짱 포인트가 모자랍니다. www.powerzzang.com 에서 확인하시기 바랍니다.";
	(*g_pGameStringTable)[UI_STRING_POWER_JJANG_ERROR_NO_MATCHING] = "일치된 정보를 찾을 수 없습니다. www.powerzzang.com 에서 확인하시기 바랍니다.";
	(*g_pGameStringTable)[UI_STRING_POWER_JJANG_ERROR_CONNECT] = "파워짱 서버와 연결에 이상이 있습니다.";


	(*g_pGameStringTable)[UI_STRING_MESSAGE_UTIL] = "기능(Utility)";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_PERSONAL_STORE] = "개인 상점";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_POWER_JJANG] = "파워짱";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_SELL_MONEY_IN_DIALOG] = "아이템 팔 가격을 입력하세요.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_PERSNALSHOP_MESSAGE]  = "개인상점 광고 메세지를 입력하세요!!";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_PERSNALSHOP_OK] = "개인상점을 오픈합니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_PERSNALSHOP_CANCEL] = "개인상점을 닫습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_PERSNALSHOP_WRITE_MESSAGE] = "개인상점 광고메세지 작성";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_CANNOT_FIND_STORE] = "해당 판매자를 찾을 수 없습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_STORE_CLOSED] = "상점이 이미 닫혔습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ITEM_NOT_FOUND] = "해당 아이템이 이미 판매되었거나 판매자에 의해 철회되었습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_TOO_MUCH_MONEY] = "판매자가 너무 많은 돈을 가지고 있어서 살 수 없습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ALREADY_DISPLAYED] = "이미 진열된 아이템입니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_PERSNAL_DEFAULT_MESSGE] = "다양한 상품이 있습니다.";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GAMEMONEY_WITH_HANGUL] = "게임 머니 한글 병행 표시";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_ADVANTE_0] = "호루스 %d등급";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ADVANTE_1] = "세트 %d등급";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ADVANTE_2] = "마아트 %d등급";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ADVANTE_3] = "오시리스 %d등급";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ADVANTE_4] = "토트 %d등급";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ADVANTE_5] = "누트 %d등급";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ADVANTE_6] = "게브 %d등급";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ADVANTE_7] = "슈 %d등급";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ADVANTE_8] = "라 %d등급";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ADVANTE_9] = "프타 %d등급";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ADVANTE_10] = "눈 %d등급";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_EQUIP_PDA] = "캐링 리시버를 장착합니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_EQUIP_SHOULDER] = "숄더아머를 장착합니다.";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_EQUIP_DERMIS] = "문신을 장착합니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_EQUIP_PERSONA] = "가면을 장착합니다.";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_EQUIP_FASCIA] = "허리장식을 장착합니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_EQUIP_MITTEN] = "장갑을 장착합니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CHINGHO] = "칭호";
	
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SWAP_ADVANCEMENT_ITEM] =	"승직 아이템으로 교환하실 아이템을 클릭해주세요.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SWAP_CONFIRM] = "승직 아이템으로 교환 하시겠습니까?";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SWAP_ERROR] = "승직하지 않아서 아이템 교환이 안됩니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SWAP_ADVANCEMENT_ITEM_ERROR] = "승직 아이템으로 교환할 수 없습니다.";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CAMPAIGN_HELP_REQUEST] = "기부 하실 금액을 입력해 주십시요.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CAMPAIGN_HELP_THANKS] = "기부해 주신 금액은 온정의 손길이 필요한 불우한 이웃을 위해 소중하게 쓰여질 것입니다. 모금에 참여해 주셔서 감사합니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CAMPAIGN_HELP_UNITS_SLAYER] = "레이";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CAMPAIGN_HELP_UNITS_VAMPIRE] = "겔드";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CAMPAIGN_HELP_UNITS_OUSTERS] = "자드";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_REQUIRE_ADVANCEMENT_LEVEL_0] = "호루스 %d등급 이상";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_REQUIRE_ADVANCEMENT_LEVEL_1] = "세트 %d등급 이상";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_REQUIRE_ADVANCEMENT_LEVEL_2] = "마아트 %d등급 이상";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_REQUIRE_ADVANCEMENT_LEVEL_3] = "오시리스 %d등급 이상";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_REQUIRE_ADVANCEMENT_LEVEL_4] = "토트 %d등급 이상";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_REQUIRE_ADVANCEMENT_LEVEL_5] = "누트 %d등급 이상";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_REQUIRE_ADVANCEMENT_LEVEL_6] = "게브 %d등급 이상";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_REQUIRE_ADVANCEMENT_LEVEL_7] = "슈 %d등급 이상";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_REQUIRE_ADVANCEMENT_LEVEL_8] = "라 %d등급 이상";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_REQUIRE_ADVANCEMENT_LEVEL_9] = "프타 %d등급 이상";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_REQUIRE_ADVANCEMENT_LEVEL_10] = "눈 %d등급 이상";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ADVANCEMENT_JOB_BLADE] = "스플리터";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ADVANCEMENT_JOB_SWORD] = "디펜더";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ADVANCEMENT_JOB_SOLDER] = "헤비슈터";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ADVANCEMENT_JOB_HEAL] = "프리스트";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ADVANCEMENT_JOB_ENCHANT] = "그랜터";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ADVANCEMENT_JOB_VAMPIRE] = "뱀프노블";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ADVANCEMENT_JOB_COMBAT] = "쿠스토스";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ADVANCEMENT_JOB_EARTH] = "이그니서 ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ADVANCEMENT_JOB_FIRE] = "아쿠안 ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ADVANCEMENT_JOB_WATER] = "테라노스 ";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_DO_NOT_SHOW_PERSNALSHOP_MSG] = "개인 상점 메세지 안 보기";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_REQUEST_GET_EVENT_ITEM] = "현재 캐릭터로 컴백 이벤트 아이템을 받으시겠습니까?";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_GET_EVENT_ITEM_RECEIVE_OK] = "컴백 이벤트 아이템을 받았습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GET_EVENT_ITEM_RECEIVE_ALREADY] = "이미 컴백 이벤트 아이템을 수령하셨습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GET_EVENT_ITEM_RECEIVE_FAIL] = "컴백 이벤트 아이템 받기에 실패하였습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GET_EVENT_ITEM_NOT_EVENT_USER] = "컴백 이벤트 해당 유저가 아닙니다.";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_GET_EVENT_ITEM_NOTICE] = "축하합니다! Come back, 2005 이벤트 대상자이십니다.";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_FAIL_OPEN_WEBPAGE] = "웹 페이지를 열 수 없습니다.";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CANNOT_USE_ADVANCEMENTCLASS] = "승직한 유저는 사용할 수 없습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CANNOT_USE_HIGH_GRADE] = "6급 이상 아이템은 인챈트 할 수 없습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CANNOT_USE_ADVANCEMENT_ITEM] = "승직 전용 아이템은 인챈트 할 수 없습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CANNOT_USE_OVER_TWO_OPTION] = "옵션이 2개 이상인 아이템은 인챈트 할 수 없습니다.";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_WEDDING_CONTRIBUTION_REQUEST] = "축의금 금액을 직접 넣어주세요.\n(금액 10,000 단위 / 최소 10,000 ~ 최대 100,000 ).";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_WEDDING_CONTRIBUTION_THANKS] = "감사합니다. 잘 전달해 드리겠습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_WEDDING_CONTRIBUTION_FAIL] = "기부자 명단에 있군요. 중복하여 기부되지 않습니다.";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_NETMARBLE_AGREEMENT] = "◇  개인정보 제3자 제공에 관한 동의\n\nCJ인터넷(주)은 이용자의 개인정보를 이벤트 배송 및 본인 확인시, 유료 결제에 관한 확인이 필요할 시, 회원간 분쟁의 원만한 처리가 필요할 시본 게임의 개발사인 (주)소프톤  엔터테인먼트에 제공됩니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_I_AGREE] = "위 내용에 동의합니다.";	

	(*g_pGameStringTable)[UI_STRING_MESSAGE_CAN_NOT_CONNECT_AGREEMENT] = "변경된 약관에 동의하지 않았기 때문에 접속을 할 수 없습니다.";
	
	(*g_pGameStringTable)[UI_STRING_MESSAGE_USE_ADVANCEMENTCLASS] = "승직하지 않은 캐릭터는 사용할 수 없습니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_USE_NOTADVANCEMENTCLASS] = "99이하나 캐릭터나 승직캐렉터는 사용할 수 없습니다.";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_ADD_COLOR] = "이미 적용된 색상 입니다. ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_EFFECT_APPLY] = "효과가 적용되었습니다. ";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_SCROLL_EFFECT_ITEMDEL] = "포스 스크롤 효과가 사라진 후 이용 가능합니다. ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_USE_ITEM_DEL] = "한번 사용하면 해당 아이템은 사라지게 됩니다.사용하시겠습니까?";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_NOTUSE_ITEM] = "사용할 수 없는 종류의 아이템입니다.";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_PORTAL_ITEM_DESC] = "사용할 때 마다 일정 겔드가 소비됩니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_PORTAL_ITEM_NOUSE] = "겔드가 부족해서 실(Seal)을 사용할 수 없습니다.";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_CHARGE_DESC] = "레벨에 따라 충전비용이 다릅니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_CHARGE_ITEM_NOUSE] = "충전하여 사용할 수 있습니다.";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_SUMMER_COMEBACK_LOGIN_AFTER] = "축하합니다! Summer COME BACK, 2005 이벤트 대상자이십니다.\n\n이벤트기간 내 로그인 시점부터 5일간 프리미엄 혜택을 받을 수 있답니다.\n\n또한 이벤트 기념 아이템도 획득하실 수 있으니 해당 종족의NPC를 찾아가시기 바랍니다.\n\n(단, 이벤트 아이템은 한 계정당 한캐릭터에 한해서만 받을 수 있습니다.)\n\n*이벤트NPC\n\n슬레이어: 크리스틴 (성직자길드1층)\n\n뱀파이어: 쎄쓰 (림보성내부)\n\n아우스터즈: 호라 (아우스터즈 마을내부)\n\n";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SUMMER_COMEBACK_SETTLEMENT_AFTER] = "결제가 성공적으로 이루어졌습니다. 이제 프리미엄 혜택을 받으시면서 다크에덴을 더욱 재미있게 즐기실 수 있게 되었습니다.\n\n이번 이벤트에 대한 보너스 혜택으로 다덴마켓에서 판매하고 있는 열랩세트를 선물로 드리고 있습니다.\n\n(단, 이벤트 아이템은 한 계정당 한캐릭터에 한해서만 받을 수 있습니다.)\n\n*이벤트NPC\n\n슬레이어: 크리스틴 (성직자길드1층)\n\n뱀파이어: 쎄쓰 (림보성내부)\n\n아우스터즈: 호라 (아우스터즈 마을내부)\n\n그럼 열랩세트 아이템을 입고 다크에덴을 200% 즐겨보세요.\n\n";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_SUMMER_COMEBACK_RECOMMENDER] = "축하합니다. Summer COME BACK, 2005 이벤트 대상자로부터 추천 받으셨습니다.\n\n추천인에게는 소정의 선물이 주어지니 이벤트 NPC를 찾아가서 받으시기 바랍니다.\n\n(단, 이벤트 아이템은 한 계정당 한캐릭터에 한해서만 받을 수 있습니다.)\n\n*이벤트NPC\n\n슬레이어: 크리스틴 (성직자길드1층)\n\n뱀파이어: 쎄쓰 (림보성내부)\n\n아우스터즈: 호라 (아우스터즈 마을내부)\n\n감사합니다.";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_BLOOD_BURST_ATTACK] = "공격형 폭주 %d / %d";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BLOOD_BURST_DEFENSE] = "방어형 폭주 %d / %d";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_BLOOD_BURST_PARTY] = "파티형 폭주 %d / %d";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_PET_ATTRIBUTE_CLEANER_POTION] = "펫 속성을 초기화 하겠습니까?";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_NOT_PET_ATTRIBUTE_CLEANER_POTION] = "속성을 초기화 할 수 없는 상태입니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MASK_OF_MONSTER] = "어떤 몬스터로 변신할 지 모릅니다. 변신시킬까요?";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MAGICAL_PET_CHANGER] = "펫을 개량하겠습니까?";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_ORNAMENTS_ITEM] = "무기를 강화하겠습니까? ";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_GRADE_SKILL_CLEANER_POTION] = "계급스킬을 초기화 하겠습니까?";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_NOT_ADD_MULTIPACK4X6] = "이미 2x4 팩을 가지고 있는 캐릭터입니다.";
	(*g_pGameStringTable)[UI_STRING_MESSAGE_MAGICAL_PET_CHANGER_ACTIVE] = "매지컬 펫 활성화 :";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_ITEM_STRENGTHENING] = "이 아이템을 강화하겠습니까?";

	(*g_pGameStringTable)[UI_STRING_MESSAGE_CHILDGUARD_DENYED_NOTUSE] = "이 게임물은 18세 이용가 게임물로 청소년은 이용할 수 없습니다";

	

}

#endif