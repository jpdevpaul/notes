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
//
// PSX ref: 0x8006AA50
// PSX def: void S_StartSmith__Fv()
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
//
// PSX ref: 0x8006ADE0
// PSX def: void S_StartSBuy__Fv()
void stores_talk_griswold_buy_basic();

// address: 0x458773
//
// TODO: add documentation.

// address: 0x458851
//
// stores_talk_griswold_buy_premium initiates a buy premium item dialogue with
// Griswold.
//
// PSX ref: 0x8006B210
// PSX def: unsigned char S_StartSPBuy__Fv()
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
//
// PSX ref: 0x8006B70C
// PSX def: void S_StartSSell__Fv()
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
//
// PSX ref: 0x8006BDD4
// PSX def: void S_StartSRepair__Fv()
void stores_talk_griswold_repair();

// address: 0x458E9A
//
// TODO: add documentation.

// address: 0x458F3D
//
// stores_talk_adria initiates a dialogue with Adria.
//
// PSX ref: 0x8006C2A4
// PSX def: void S_StartWitch__Fv()
void stores_talk_adria();

// address: 0x458FE3
//
// TODO: add documentation.

// address: 0x45909F
//
// stores_talk_adria_buy initiates a buy item dialogue with Adria.
//
// PSX ref: 0x8006C714
// PSX def: void S_StartWBuy__Fv()
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
//
// PSX ref: 0x8006CBB4
// PSX def: void S_StartWSell__Fv()
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
//
// PSX ref: 0x8006D440
// PSX def: void S_StartWRecharge__Fv()
void stores_talk_adria_recharge();

// address: 0x459693
//
// stores_talk_not_enough_gold informs the player that they have not enough
// gold to satisfy the deal.
//
// PSX ref: 0x8006D870
// PSX def: void S_StartNoMoney__Fv()
void stores_talk_not_enough_gold();

// address: 0x4596CD
//
// stores_talk_not_enough_room informs the player that they have not enough
// room in inventory to complete the trade.
//
// PSX ref: 0x8006D8D8
// PSX def: void S_StartNoRoom__Fv()
void stores_talk_not_enough_room();

// address: 0x459700
//
// stores_talk_confirm asks the player to confirm the deal.
//
// PSX ref: 0x8006D9EC
// PSX def: void S_StartConfirm__Fv()
void stores_talk_confirm();

// address: 0x459873
//
// stores_talk_wirt initiates a dialogue with Wirt.
//
// PSX ref: 0x8006DD54
// PSX def: void S_StartBoy__Fv()
void stores_talk_wirt();

// address: 0x459930
//
// stores_talk_wirt_buy initiates a buy item dialogue with Wirt.
//
// PSX ref: 0x8006DEFC
// PSX def: void S_StartBBoy__Fv()
void stores_talk_wirt_buy();

// address: 0x4599FD
//
// stores_talk_pepin initiates a dialogue with Pepin.
//
// PSX ref: 0x8006E130
// PSX def: void S_StartHealer__Fv()
void stores_talk_pepin();

// address: 0x459AA5
//
// TODO: add documentation.

// address: 0x459B55
//
// stores_talk_pepin_buy initiates a buy item dialogue with Pepin.
//
// PSX ref: 0x8006E4EC
// PSX def: void S_StartHBuy__Fv()
void stores_talk_pepin_buy();

// address: 0x459C15
//
// stores_talk_cain initiates a dialogue with Cain.
//
// PSX ref: 0x8006E624
// PSX def: void S_StartStory__Fv()
void stores_talk_cain();

// address: 0x459C8E
//
// stores_is_unidentified reports whether the given item is magical and
// unidentified (i.e. it may be identified).
bool32_t __fastcall stores_is_unidentified(Item *item);

// address: 0x459CA2
//
// TODO: add documentation.

// address: 0x459CE6
//
// stores_talk_cain_identify initiates an identify item dialogue with Cain.
//
// PSX ref: 0x8006E824
// PSX def: void S_StartSIdentify__Fv()
void stores_talk_cain_identify();

// address: 0x459F95
//
// stores_talk_show_identified_item shows the identified item to the player.
//
// PSX ref: 0x8006F2C4
// PSX def: void S_StartIdShow__Fv()
void stores_talk_show_identified_item();

// address: 0x45A046
//
// stores_talk_gossip initiates a gossip dialogue with the active NPC.
//
// PSX ref: 0x8006F49C
// PSX def: void S_StartTalk__Fv()
void stores_talk_gossip();

// address: 0x45A168
//
// stores_talk_odgen initiates a dialogue with Odgen.
//
// PSX ref: 0x8006F6CC
// PSX def: void S_StartTavern__Fv()
void stores_talk_odgen();

// address: 0x45A1EC
//
// stores_talk_gillian initiates a dialogue with Gillian.
//
// PSX ref: 0x8006F7C4
// PSX def: void S_StartBarMaid__Fv()
void stores_talk_gillian();

// address: 0x45A25E
//
// stores_talk_farnham initiates a dialogue with Farnham.
//
// PSX ref: 0x8006F898
// PSX def: void S_StartDrunk__Fv()
void stores_talk_farnham();

// address: 0x45A2D0
//
// stores_talk initiates a conversation with the store owner.
//
// PSX ref: 0x8006F96C
// PSX def: void StartStore__Fc(char s)
void __fastcall stores_talk(talk_id talk_id);

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
// stores_interact_griswold interacts with Griswold through an enter key press.
//
// PSX ref: 0x80070570
// PSX def: void S_SmithEnter__Fv()
void stores_interact_griswold();

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
// stores_buy_from_griswold buys the selected item from Griswold.
//
// PSX ref: 0x80070E14
// PSX def: void S_SBuyEnter__Fv()
void stores_buy_from_griswold();

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
// stores_sell_to_griswold sells the selected item to Griswold.
//
// PSX ref: 0x80071D44
// PSX def: void S_SSellEnter__Fv()
void stores_sell_to_griswold();

// address: 0x45B1DF
//
// TODO: add documentation.

// address: 0x45B2B6
//
// stores_repair_at_griswold repairs the selected item at Griswold.
//
// PSX ref: 0x800720C8
// PSX def: void S_SRepairEnter__Fv()
void stores_repair_at_griswold()

// address: 0x45B337
//
// stores_interact_adria interacts with Adria through an enter key press.
//
// PSX ref: 0x8007222C
// PSX def: void S_WitchEnter__Fv()
void stores_interact_adria();

// address: 0x45B39F
//
// TODO: add documentation.

// address: 0x45B457
//
// stores_buy_from_adria buys the selected item from Adria.
//
// PSX ref: 0x80072590
// PSX def: void S_WBuyEnter__Fv()
void stores_buy_from_adria();

// address: 0x45B52C
//
// stores_sell_to_adria sells the selected item to Adria.
//
// PSX ref: 0x80072818
// PSX def: void S_WSellEnter__Fv()
void stores_sell_to_adria();

// address: 0x45B5AB
//
// TODO: add documentation.

// address: 0x45B634
//
// stores_recharge_at_adria recharges the selected item at Adria.
//
// PSX ref: 0x80072AD4
// PSX def: void S_WRechargeEnter__Fv()
void stores_recharge_at_adria();

// address: 0x45B6B5
//
// stores_interact_wirt interacts with Wirt through an enter key press.
//
// PSX ref: 0x80072C38
// PSX def: void S_BoyEnter__Fv()
void stores_interact_wirt();

// address: 0x45B757
//
// TODO: add documentation.

// address: 0x45B791
//
// TODO: add documentation.

// address: 0x45B895
//
// stores_buy_from_wirt buys the selected item from Wirt.
//
// PSX ref: 0x8007319C
// PSX def: void S_BBuyEnter__Fv()
void stores_buy_from_wirt();

// address: 0x45B968
//
// TODO: add documentation.

// address: 0x45BA57
//
// stores_confirm confirms the selected action.
//
// PSX ref: 0x80073700
// PSX def: void S_ConfirmEnter__Fv()
void stores_confirm();

// address: 0x45BAF7
//
// stores_interact_pepin interacts with Pepin through an enter key press.
//
// PSX ref: 0x8007381C
// PSX def: void S_HealerEnter__Fv()
void stores_interact_pepin();

// address: 0x45BB9F
//
// stores_buy_from_pepin buys the selected item from Pepin.
//
// PSX ref: 0x800738B4
// PSX def: void S_HBuyEnter__Fv()
void stores_buy_from_pepin();

// address: 0x45BC74
//
// TODO: add documentation.

// address: 0x45BCCA
//
// stores_identify_at_cain identifies the selected item at Cain.
//
// PSX ref: 0x80073B84
// PSX def: void S_SIDEnter__Fv()
void stores_identify_at_cain();

// address: 0x45BD4B
//
// stores_listen_to_gossip listens to the stories and gossip that a store owner
// has to say about a given quest.
//
// PSX ref: 0x80073D08
// PSX def: void S_TalkEnter__Fv()
void stores_listen_to_gossip();

// address: 0x45BE4A
//
// stores_interact_odgen interacts with Odgen through an enter key press.
//
// PSX ref: 0x80073F08
// PSX def: void S_TavernEnter__Fv()
void stores_interact_odgen();

// address: 0x45BE98
//
// TODO: add documentation.

// address: 0x45BEE6
//
// stores_interact_farmham interacts with Farnham through an enter key press.
//
// PSX ref: 0x80073FF0
// PSX def: void S_DrunkEnter__Fv()
void stores_interact_farnham();

// address: 0x45BF34
//
// stores_interact interacts with the store through an enter key press.
//
// PSX ref: 0x80074064
// PSX def: void STextEnter__Fv()
void stores_interact();

// address: 0x45C053
//
// TODO: add documentation.

// address: 0x45C18A
//
// TODO: add documentation.
