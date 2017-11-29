#include "types.h"

// address: 0x46019B
//
// towners_get_num_from_id returns the towner number (towners array index) of
// the given towner ID.
//
// PSX ref: 0x80039F88
// PSX def: int GetActiveTowner__Fi(int t)
int __fastcall towners_get_num_from_id(towner_id towner_id);

// address: 0x4601C1
//
// towners_init_graphics initializes the NPC graphics for each direction.
//
// PSX ref: 0x80039FDC
// PSX def: void SetTownerGPtrs__FPUcPPUc(unsigned char *pData, unsigned char **pAnim)
void __fastcall towners_init_graphics(void *towner_cel, void **cel_from_direction);

// address: 0x4601FB
//
// towners_init_anim initializes the animation of the given NPC.
//
// PSX ref: 0x80039FFC
// PSX def: void NewTownerAnim__FiPUcii(int tnum, unsigned char *pAnim, int numFrames, int Delay)
void __fastcall towners_init_anim(int towner_num, void *active_cel, int nframes, int nticks_per_frame);

// address: 0x46022F
//
// towners_place places the given NPC on the map.
//
// PSX ref: 0x8003A04C
// PSX def: void InitTownerInfo__FilUciiici(int i, long w, unsigned char sel, int t, int x, int y, int ao, int tp)
void __fastcall towners_place(int towner_num, int frame_width, bool32_t targetable, towner_id towner_id, int col, int row, towner_anim_seq_id towner_anim_seq_id, int unused);

// address: 0x4602C4
//
// towners_init_gossip initializes quest gossip of the given NPC.
//
// PSX ref: 0x8003A1A4
// PSX def: void InitQstSnds__Fi(int i)
void __fastcall towners_init_gossip(int towner_num);

// address: 0x460311
//
// towners_init_griswold initializes Griswold the Blacksmith.
//
// PSX ref: 0x8003A264
// PSX def: void InitSmith__Fv()
void towners_init_griswold();

// address: 0x4603A0
//
// towners_init_odgen initializes Ogden the Tavern owner.
//
// PSX ref: 0x8003A394
// PSX def: void InitBarOwner__Fv()
void towners_init_odgen();

// address: 0x460436
//
// towners_init_wounded_townsman initializes the Wounded Townsman.
//
// PSX ref: 0x8003A4CC
// PSX def: void InitTownDead__Fv()
void towners_init_wounded_townsman();

// address: 0x4604C6
//
// towners_init_adria initializes Adria the Witch.
//
// PSX ref: 0x8003A600
// PSX def: void InitWitch__Fv()
void towners_init_adria();

// address: 0x460555
//
// towners_init_gillian initializes Gillian the Barmaid.
//
// PSX ref: 0x8003A734
// PSX def: void InitBarmaid__Fv()
void towners_init_gillian();

// address: 0x4605E4
//
// towners_init_wirt initializes Wirt the Peg-legged boy.
//
// PSX ref: 0x8003A868
// PSX def: void InitBoy__Fv()
void towners_init_wirt();

// address: 0x46067A
//
// towners_init_pepin initializes Pepin the Healer.
//
// PSX ref: 0x8003A9A4
// PSX def: void InitHealer__Fv()
void towners_init_pepin();

// address: 0x460709
//
// towners_init_cain initializes Cain the Elder.
//
// PSX ref: 0x8003AAD8
// PSX def: void InitTeller__Fv()
void towners_init_cain();

// address: 0x460798
//
// towners_init_farnham initializes Farnham the Drunk.
//
// PSX ref: 0x8003AC0C
// PSX def: void InitDrunk__Fv()
void towners_init_farnham();

// address: 0x460827
//
// towners_init_cows initializes the Cow NPCs.
//
// PSX ref: 0x8003AD40
// PSX def: void InitCows__Fv()
void towners_init_cows();

// address: 0x460976
//
// towners_init initializes the NPCs of Tristram.
//
// PSX ref: 0x8003AFD8
// PSX def: void InitTowners__Fv()
void towners_init();

// address: 0x4609C3
//
// towners_cleanup releases resources used by NPCs.
//
// PSX ref: 0x8003B064
// PSX def: void FreeTownerGFX__Fv()
void towners_cleanup();

// address: 0x460A05
//
// towners_stop_interaction stops interaction with distant players.
//
// PSX ref: 0x8003B108
// PSX def: void TownCtrlMsg__Fi(int i)
void __fastcall towners_stop_interaction(int towner_num);

// address: 0x460A78
//
// towners_process_logic_griswold processs the logic of Griswold each game tick;
// stops interaction with distant players.
//
// PSX ref: 0x8003B1F0
// PSX def: void TownBlackSmith__Fv()
void towners_process_logic_griswold();

// address: 0x460A86
//
// towners_process_logic_ogden processs the logic of Ogden each game tick; stops
// interaction with distant players.
//
// PSX ref: 0x8003B27C
// PSX def: void TownBarOwner__Fv()
void towners_process_logic_ogden();

// address: 0x460A95
//
// towners_process_logic_wounded_townsman processs the logic of the Wounded
// Townsman each game tick; stops interaction with distant players, and updates
// quest events.
//
// PSX ref: 0x8003B318
// PSX def: void TownDead__Fv()
void towners_process_logic_wounded_townsman();

// address: 0x460B0D
//
// towners_process_logic_pepin processs the logic of Pepin each game tick; stops
// interaction with distant players.
//
// PSX ref: 0x8003B400
// PSX def: void TownHealer__Fv()
void towners_process_logic_pepin();

// address: 0x460B1C
//
// towners_process_logic_cain processs the logic of Cain each game tick; stops
// interaction with distant players.
//
// PSX ref: 0x8003B428
// PSX def: void TownStory__Fv()
void towners_process_logic_cain();

// address: 0x460B2B
//
// towners_process_logic_farnham processs the logic of Farnham each game tick;
// stops interaction with distant players.
//
// PSX ref: 0x8003B450
// PSX def: void TownDrunk__Fv()
void towners_process_logic_farnham();

// address: 0x460B3A
//
// towners_process_logic_wirt processs the logic of Wirt each game tick; stops
// interaction with distant players.
//
// PSX ref: 0x8003B478
// PSX def: void TownBoy__Fv()
void towners_process_logic_wirt();

// address: 0x460B49
//
// towners_process_logic_adria processs the logic of Adria each game tick; stops
// interaction with distant players.
//
// PSX ref: 0x8003B4A0
// PSX def: void TownWitch__Fv()
void towners_process_logic_adria();

// address: 0x460B58
//
// towners_process_logic_gillian processs the logic of Gillain each game tick;
// stops interaction with distant players.
//
// PSX ref: 0x8003B4C8
// PSX def: void TownBarMaid__Fv()
void towners_process_logic_gillian();

// address: 0x460B67
//
// towners_process_logic_cow processs the logic of the Cows each game tick;
// stops interaction with distant players.
//
// PSX ref: 0x8003B4F0
// PSX def: void TownCow__Fv()
void towners_process_logic_cows();

// address: 0x460B76
//
// towners_process processes any game state changes of the NPCs, since the last
// game tick.
//
// PSX ref: 0x8003B518
// PSX def: void ProcessTowners__Fv()
void towners_process();

// address: 0x460C5C
//
// towners_find_player_item locates the given item ID in the player's inventory.
//
// PSX ref: 0x8003B768
// PSX def: struct ItemStruct* PlrHasItem__FiiRi(int pnum, int item, int *i)
Item *__fastcall towners_find_player_item(int player_num, item_id item_id, int *inv_item_num);

// address: 0x460CAC
//
// towners_greeting plays the greeting of the given NPC.
//
// PSX ref: 0x8003B958
// PSX def: void TownerTalk__Fii(int first, int t)
void __fastcall towners_play_greeting(speech_id speech_id);

// address: 0x460CC9
//
// towners_talk_with_towner initiates a conversation with the given NPC.
//
// PSX ref: 0x8003B998
// PSX def: void TalkToTowner__Fii(int p, int t)
void __fastcall towners_talk_with_towner(int player_num, int towner_num);

// address: 0x4617E8
//
// towners_play_cow_sound plays the Moo sound of a cow.
//
// PSX ref: 0x8003B83C
// PSX def: void CowSFX__Fi(int pnum)
void __fastcall towners_play_cow_sound(int player_num);
