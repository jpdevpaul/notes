#include "types.h"

// address: 0x457A01
//
// stores_init initializes the resources used by store owners.
void stores_init();

// address: 0x457A87
//
// stores_renew_items renews the items sold in stores.
void stores_renew_items();

// address: 0x457B42
//
// stores_cleanup releases the resources used by store owners.
void stores_cleanup();

// address: 0x457B78
//
// TODO: add documentation.

// address: 0x457BD6
//
// TODO: add documentation.

// address: 0x457DE2
//
// TODO: add documentation.

// address: 0x457E62
//
// TODO: add documentation.

// address: 0x457F52
//
// TODO: add documentation.

// address: 0x457F61
//
// TODO: add documentation.

// address: 0x457FA6
//
// TODO: add documentation.

// address: 0x457FCB
//
// TODO: add documentation.

// address: 0x457FD8
//
// TODO: add documentation.

// address: 0x457FE5
//
// TODO: add documentation.

// address: 0x458036
//
// TODO: add documentation.

// address: 0x4582B3
//
// stores_talk_griswold initiates a dialogue with Griswold.
void stores_talk_griswold();

// address: 0x45837D
//
// TODO: add documentation.

// address: 0x458439
//
// TODO: add documentation.

// address: 0x4586B3
//
// stores_talk_griswold_buy_basic initiates a buy basic item dialogue with
// Griswold.
void stores_talk_griswold_buy_basic();

// address: 0x458773
//
// TODO: add documentation.

// address: 0x458851
//
// stores_talk_griswold_buy_premium initiates a buy premium item dialogue with
// Griswold.
bool32_t stores_talk_griswold_buy_premium();

// address: 0x458931
//
// stores_griswold_wants reports whether Griswold wants to buy the given
// inventory item.
bool32_t __fastcall stores_griswold_wants(int inv_num);

// address: 0x458972
//
// TODO: add documentation.

// address: 0x458A59
//
// stores_talk_griswold_sell initiates a sell player item dialogue with
// Griswold.
void stores_talk_griswold_sell();

// address: 0x458C0B
//
// stores_is_damaged reports whether the given inventory item is damaged (i.e.
// it may be repaired).
bool32_t __fastcall stores_is_damaged(int inv_num);

// address: 0x458C4E
//
// stores_talk_griswold_repair initiates a repair player item dialogue with
// Griswold.
void stores_talk_griswold_repair();

// address: 0x458E9A
//
// TODO: add documentation.

// address: 0x458F3D
//
// stores_talk_adria initiates a dialogue with Adria.
void stores_talk_adria();

// address: 0x458FE3
//
// TODO: add documentation.

// address: 0x45909F
//
// stores_talk_adria_buy initiates a buy item dialogue with Adria.
void stores_talk_adria_buy();

// address: 0x459169
//
// stores_adria_wants reports whether Adria wants to buy the given item; which
// is either an inventory or a belt item, as described below.
//
//    switch {
//    case inv_or_belt_num >= 0:
//       inv_num = inv_or_belt_num
//    case inv_or_belt_num < 0:
//       belt_num = -inv_or_belt_num - 1
//    }
bool32_t __fastcall stores_adria_wants(int inv_or_belt_num);

// address: 0x4591C4
//
// stores_talk_adria_sell initiates a sell player item dialogue with Adria.
void stores_talk_adria_sell();

// address: 0x459431
//
// stores_has_used_charges reports whether the given inventory item is a staff
// with consumed charges (i.e. it may be recharged).
bool32_t __fastcall stores_has_used_charges(int inv_num);

// address: 0x459460
//
// TODO: add documentation.

// address: 0x4594E6
//
// stores_talk_adria_recharge initiates a recharge staff dialogue with Adria.
void stores_talk_adria_recharge();

// address: 0x459693
//
// stores_talk_not_enough_gold informs the player that they have not enough
// gold to satisfy the deal.
void stores_talk_not_enough_gold();

// address: 0x4596CD
//
// stores_talk_not_enough_room informs the player that they have not enough
// room in inventory to complete the trade.
void stores_talk_not_enough_room();

// address: 0x459700
//
// stores_talk_confirm asks the player to confirm the deal.
void stores_talk_confirm();

// address: 0x459873
//
// stores_talk_wirt initiates a dialogue with Wirt.
void stores_talk_wirt();

// address: 0x459930
//
// stores_talk_wirt_buy initiates a buy item dialogue with Wirt.
void stores_talk_wirt_buy();

// address: 0x4599FD
//
// stores_talk_pepin initiates a dialogue with Pepin.
void stores_talk_pepin();

// address: 0x459AA5
//
// TODO: add documentation.

// address: 0x459B55
//
// stores_talk_pepin_buy initiates a buy item dialogue with Pepin.
void stores_talk_pepin_buy();

// address: 0x459C15
//
// stores_talk_cain initiates a dialogue with Cain.
void stores_talk_cain();

/* TODO: uncomment when the Item struct has been added to structs.h.

// address: 0x459C8E
//
// stores_is_unidentified reports whether the given item is magical and
// unidentified (i.e. it may be identified).
bool32_t __fastcall stores_is_unidentified(Item *item);

*/

// address: 0x459CA2
//
// TODO: add documentation.

// address: 0x459CE6
//
// stores_talk_cain_identify initiates an identify item dialogue with Cain.
void stores_talk_cain_identify();

// address: 0x459F95
//
// TODO: add documentation.

// address: 0x45A046
//
// stores_talk_gossip initiates a gossip dialogue with the active NPC.
void stores_talk_gossip();

// address: 0x45A168
//
// stores_talk_odgen initiates a dialogue with Odgen.
void stores_talk_odgen();

// address: 0x45A1EC
//
// stores_talk_gillian initiates a dialogue with Gillian.
void stores_talk_gillian();

// address: 0x45A25E
//
// stores_talk_farnham initiates a dialogue with Farnham.
void stores_talk_farnham();

// address: 0x45A2D0
//
// TODO: add documentation.

// address: 0x45A48F
//
// stores_draw renders a store owner dialogue on screen.
void stores_draw();

// address: 0x45A584
//
// TODO: add documentation.

// address: 0x45A6AF
//
// TODO: add documentation.

// address: 0x45A757
//
// TODO: add documentation.

// address: 0x45A804
//
// TODO: add documentation.

// address: 0x45A84E
//
// TODO: add documentation.

// address: 0x45A89B
//
// TODO: add documentation.

// address: 0x45A904
//
// TODO: add documentation.

// address: 0x45A94A
//
// TODO: add documentation.

// address: 0x45A990
//
// TODO: add documentation.

// address: 0x45AB69
//
// TODO: add documentation.

// address: 0x45AC14
//
// TODO: add documentation.

// address: 0x45ACE9
//
// TODO: add documentation.

// address: 0x45AD7E
//
// TODO: add documentation.

// address: 0x45AE72
//
// TODO: add documentation.

// address: 0x45AF48
//
// TODO: add documentation.

// address: 0x45B010
//
// TODO: add documentation.

// address: 0x45B160
//
// TODO: add documentation.

// address: 0x45B1DF
//
// TODO: add documentation.

// address: 0x45B2B6
//
// TODO: add documentation.

// address: 0x45B337
//
// TODO: add documentation.

// address: 0x45B39F
//
// TODO: add documentation.

// address: 0x45B457
//
// TODO: add documentation.

// address: 0x45B52C
//
// TODO: add documentation.

// address: 0x45B5AB
//
// TODO: add documentation.

// address: 0x45B634
//
// TODO: add documentation.

// address: 0x45B6B5
//
// TODO: add documentation.

// address: 0x45B757
//
// TODO: add documentation.

// address: 0x45B791
//
// TODO: add documentation.

// address: 0x45B895
//
// TODO: add documentation.

// address: 0x45B968
//
// TODO: add documentation.

// address: 0x45BA57
//
// TODO: add documentation.

// address: 0x45BAF7
//
// TODO: add documentation.

// address: 0x45BB9F
//
// TODO: add documentation.

// address: 0x45BC74
//
// TODO: add documentation.

// address: 0x45BCCA
//
// TODO: add documentation.

// address: 0x45BD4B
//
// TODO: add documentation.

// address: 0x45BE4A
//
// TODO: add documentation.

// address: 0x45BE98
//
// TODO: add documentation.

// address: 0x45BEE6
//
// TODO: add documentation.

// address: 0x45BF34
//
// TODO: add documentation.

// address: 0x45C053
//
// TODO: add documentation.

// address: 0x45C18A
//
// TODO: add documentation.
