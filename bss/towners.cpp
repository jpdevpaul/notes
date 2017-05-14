// address: 0x6AAC18
//
// has_greeted specifies whether an NPC has recently greeted the player.
bool32_t has_greeted;

// address: 0x6AAC1C
//
// cow_active_sfx_index specifies the active index (between 0 and 2) into
// cow_sfx_id_from_class.
//
// References:
//    * https://github.com/sanctuary/notes/blob/master/rdata/towners.cpp#cow_sfx_id_from_class
int cow_active_sfx_index;

// address: 0x6AAC20
//
// ntowners specifies the number of active NPCs in Tristram.
int ntowners;

// address: 0x6AAC24
//
// ncow_clicks specifies the number of consequtive times the player has
// interacted with a cow.
int ncow_clicks;

// address: 0x6AAC28
//
// NOTE: unused.
int unused_6AAC28;

// address: 0x6AAC2C
//
// has_initialized_wirt specifies whether Wirt has been initialized.
bool32_t has_initialized_wirt;

// address: 0x6AAC30
//
// cow_cel points to the contents of "towners/animals/cow.cel".
void *cow_cel;

// address: 0x6AAC38
//
// towners contains the NPCs in Tristram of the current game.
Towner towners[16];

