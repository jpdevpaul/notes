#include "types.h"

// address: 0x43BBA4
//
// j_msg_cpp_init initializes the C++ runtime of msg.cpp.
void j_msg_cpp_init();

// address: 0x43BBA9
//
// msg_cpp_init initializes the C++ runtime of msg.cpp.
void msg_cpp_init();

// address: 0x43BBB4
//
// TODO: add documentation.

// address: 0x43BBCF
//
// TODO: add documentation.

// address: 0x43BC31
//
// TODO: add documentation.

// address: 0x43BC6D
//
// TODO: add documentation.

// address: 0x43BCED
//
// TODO: add documentation.

// address: 0x43BD19
//
// TODO: add documentation.

// address: 0x43BDEB
//
// TODO: add documentation.

// address: 0x43BE0D
//
// TODO: add documentation.

// address: 0x43BE74
//
// TODO: add documentation.

// address: 0x43BF2B
//
// TODO: add documentation.

// address: 0x43BF5B
//
// TODO: add documentation.

// address: 0x43BF6F
//
// TODO: add documentation.

// address: 0x43BFA1
//
// TODO: add documentation.

// address: 0x43C019
//
// TODO: add documentation.

// address: 0x43C035
//
// TODO: add documentation.

// address: 0x43C07C
//
// TODO: add documentation.

// address: 0x43C0C2
//
// TODO: add documentation.

// address: 0x43C0F2
//
// TODO: add documentation.

// address: 0x43C134
//
// TODO: add documentation.

// address: 0x43C17D
//
// TODO: add documentation.

// address: 0x43C24F
//
// msg_is_portal_inactive reports whether the given portal is active.
//
// PSX ref: 0x8004F2F0
// PSX def: unsigned char delta_portal_inited__Fi(int i)
bool32_t __fastcall msg_is_portal_inactive(int portal_num);

// address: 0x43C25D
//
// TODO: add documentation.

// address: 0x43C26B
//
// TODO: add documentation.

// address: 0x43C372
//
// TODO: add documentation.

// address: 0x43C3BA
//
// TODO: add documentation.

// address: 0x43C873
//
// msg_send_cmd sends a command message without body to connected peers.
//
// PSX ref: 0x8004F6D0
// PSX def: void NetSendCmd__FUcUc(unsigned char bHiPri, unsigned char bCmd)
void __fastcall msg_send_cmd(bool32_t high_priority, cmd cmd);

// address: 0x43C891
//
// TODO: add documentation.

// address: 0x43C8C7
//
// msg_send_cmd_coord sends a command message with X,Y coordinates to connected peers.
//
// PSX ref: 0x8004F744
// PSX def: void NetSendCmdLoc__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y)
void __fastcall msg_send_cmd_coord(bool32_t high_priority, cmd cmd, int8_t x, int8_t y);

// address: 0x43C8F3
//
// msg_send_cmd_coord_param1 sends a command message with X,Y coordinates and
// one parameter to connected peers.
//
// PSX ref: 0x8004F774
// PSX def: void NetSendCmdLocParam1__FUcUcUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1)
void __fastcall msg_send_cmd_coord_param1(bool32_t high_priority, cmd cmd, int8_t x, int8_t y, int16_t param1);

// address: 0x43C928
//
// msg_send_cmd_coord_param2 sends a command message with  X,Y coordinates and
// two parameters to connected peers.
//
// PSX ref: 0x8004F7AC
// PSX def: void NetSendCmdLocParam2__FUcUcUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2)
void __fastcall msg_send_cmd_coord_param2(bool32_t high_priority, cmd cmd, int8_t x, int8_t y, int16_t param1, int16_t param2);

// address: 0x43C965
//
// msg_send_cmd_coord_param3 sends a command message with X,Y coordinates and
// three parameters to connected peers.
//
// PSX ref: 0x8004F7EC
// PSX def: void NetSendCmdLocParam3__FUcUcUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2, int wParam3)
void __fastcall msg_send_cmd_coord_param3(bool32_t high_priority, cmd cmd, int8_t x, int8_t y, int16_t param1, int16_t param2, int16_t param3);

// address: 0x43C9AB
//
// msg_send_cmd_param1 sends a command message with one parameter to connected
// peers.
//
// PSX ref: 0x8004F834
// PSX def: void NetSendCmdParam1__FUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1)
void __fastcall msg_send_cmd_param1(bool32_t high_priority, cmd cmd, int16_t param1);

// address: 0x43C9D3
//
// msg_send_cmd_param2 sends a command message with two parameters to connected
// peers.
//
// PSX ref: 0x8004F860
// PSX def: void NetSendCmdParam2__FUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2)
void __fastcall msg_send_cmd_param2(bool32_t high_priority, cmd cmd, int16_t param1, int16_t param2);

// address: 0x43CA04
//
// msg_send_cmd_param3 sends a command message with three parameters to
// connected peers.
//
// PSX ref: 0x8004F890
// PSX def: void NetSendCmdParam3__FUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2, int wParam3)
void __fastcall msg_send_cmd_param3(bool32_t high_priority, cmd cmd, int16_t param1, int16_t param2, int16_t param3);

// address: 0x43CA3D
//
// msg_send_cmd_sync_quest sends a sync quest command message to connected
// peers.
//
// PSX ref: 0x8004F8C8
// PSX def: void NetSendCmdQuest__FUcUc(unsigned char bHiPri, unsigned char q)
void __fastcall msg_send_cmd_sync_quest(bool32_t high_priority, quest_id quest_id);

// address: 0x43CA84
//
// msg_send_cmd_get_item sends a get item command message to connected peers.
//
// PSX ref: 0x8004F93C
// PSX def: void NetSendCmdGItem__FUcUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char mast, unsigned char pnum, int ii)
void __fastcall msg_send_cmd_get_item(bool32_t high_priority, cmd cmd, int8_t player_num_master, int8_t player_num, int8_t item_num);

// address: 0x43CC09
//
// TODO: add documentation.

// address: 0x43CC74
//
// TODO: add documentation.

// address: 0x43CCCF
//
// TODO: add documentation.

// address: 0x43CCF8
//
// TODO: add documentation.

// address: 0x43CE5B
//
// TODO: add documentation.

// address: 0x43CEB2
//
// TODO: add documentation.

// address: 0x43CED4
//
// TODO: add documentation.

// address: 0x43D039
//
// TODO: add documentation.

// address: 0x43D064
//
// TODO: add documentation.

// address: 0x43D09D
//
// TODO: add documentation.

// address: 0x43D0BC
//
// TODO: add documentation.

// address: 0x43D632
//
// TODO: add documentation.

// address: 0x43D6BA
//
// TODO: add documentation.

// address: 0x43D6F5
//
// TODO: add documentation.

// address: 0x43D709
//
// TODO: add documentation.

// address: 0x43D746
//
// TODO: add documentation.

// address: 0x43D7F1
//
// TODO: add documentation.

// address: 0x43D7FC
//
// TODO: add documentation.

// address: 0x43D84A
//
// TODO: add documentation.

// address: 0x43D87B
//
// TODO: add documentation.

// address: 0x43D8AC
//
// TODO: add documentation.

// address: 0x43D8DD
//
// TODO: add documentation.

// address: 0x43D90E
//
// TODO: add documentation.

// address: 0x43D97D
//
// TODO: add documentation.

// address: 0x43D9C4
//
// TODO: add documentation.

// address: 0x43DA16
//
// TODO: add documentation.

// address: 0x43DAE6
//
// TODO: add documentation.

// address: 0x43DB2D
//
// TODO: add documentation.

// address: 0x43DC3D
//
// TODO: add documentation.

// address: 0x43DD40
//
// TODO: add documentation.

// address: 0x43DD92
//
// TODO: add documentation.

// address: 0x43DE60
//
// TODO: add documentation.

// address: 0x43DF6E
//
// TODO: add documentation.

// address: 0x43DFC9
//
// TODO: add documentation.

// address: 0x43E0CE
//
// TODO: add documentation.

// address: 0x43E179
//
// TODO: add documentation.

// address: 0x43E193
//
// TODO: add documentation.

// address: 0x43E284
//
// TODO: add documentation.

// address: 0x43E32A
//
// TODO: add documentation.

// address: 0x43E386
//
// TODO: add documentation.

// address: 0x43E3D5
//
// TODO: add documentation.

// address: 0x43E424
//
// TODO: add documentation.

// address: 0x43E4D2
//
// TODO: add documentation.

// address: 0x43E576
//
// TODO: add documentation.

// address: 0x43E61A
//
// TODO: add documentation.

// address: 0x43E68A
//
// TODO: add documentation.

// address: 0x43E6FA
//
// TODO: add documentation.

// address: 0x43E732
//
// TODO: add documentation.

// address: 0x43E7DF
//
// TODO: add documentation.

// address: 0x43E840
//
// TODO: add documentation.

// address: 0x43E885
//
// TODO: add documentation.

// address: 0x43E8CA
//
// TODO: add documentation.

// address: 0x43E964
//
// TODO: add documentation.

// address: 0x43E9FE
//
// TODO: add documentation.

// address: 0x43EA98
//
// TODO: add documentation.

// address: 0x43EB32
//
// TODO: add documentation.

// address: 0x43EB74
//
// TODO: add documentation.

// address: 0x43EBA4
//
// TODO: add documentation.

// address: 0x43EBD5
//
// TODO: add documentation.

// address: 0x43EC27
//
// TODO: add documentation.

// address: 0x43EC5B
//
// TODO: add documentation.

// address: 0x43ECBA
//
// TODO: add documentation.

// address: 0x43ED23
//
// TODO: add documentation.

// address: 0x43ED89
//
// TODO: add documentation.

// address: 0x43EE3D
//
// TODO: add documentation.

// address: 0x43EEF5
//
// TODO: add documentation.

// address: 0x43EF2D
//
// TODO: add documentation.

// address: 0x43EFDD
//
// TODO: add documentation.

// address: 0x43F033
//
// TODO: add documentation.

// address: 0x43F058
//
// TODO: add documentation.

// address: 0x43F0AE
//
// TODO: add documentation.

// address: 0x43F104
//
// TODO: add documentation.

// address: 0x43F15C
//
// TODO: add documentation.

// address: 0x43F1B0
//
// TODO: add documentation.

// address: 0x43F1F0
//
// TODO: add documentation.

// address: 0x43F21E
//
// TODO: add documentation.

// address: 0x43F258
//
// TODO: add documentation.

// address: 0x43F28F
//
// TODO: add documentation.

// address: 0x43F2C9
//
// TODO: add documentation.

// address: 0x43F2CE
//
// TODO: add documentation.

// address: 0x43F448
//
// TODO: add documentation.

// address: 0x43F521
//
// TODO: add documentation.

// address: 0x43F55C
//
// TODO: add documentation.

// address: 0x43F59A
//
// TODO: add documentation.

// address: 0x43F5D3
//
// TODO: add documentation.

// address: 0x43F60C
//
// TODO: add documentation.

// address: 0x43F645
//
// TODO: add documentation.

// address: 0x43F67E
//
// TODO: add documentation.

// address: 0x43F6B7
//
// TODO: add documentation.

// address: 0x43F6EC
//
// TODO: add documentation.

// address: 0x43F72E
//
// TODO: add documentation.

// address: 0x43F7A5
//
// TODO: add documentation.

// address: 0x43F7A9
//
// TODO: add documentation.

// address: 0x43F818
//
// TODO: add documentation.

// address: 0x43F830
//
// msg_parse_cmd_impact_mana_shield parses a impact mana shield command.
int __fastcall msg_parse_cmd_impact_mana_shield(uint8_t *msg, int player_num);
