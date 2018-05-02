/// address: 0x40ACAD
///
/// doom_get_frame_from_time returns the active frame of the Map of the Stars
/// based on the time since the start of the time-based doom quest. After 30
/// minutes, we are doomed.
int doom_get_frame_from_time();

/// address: 0x40ACC6
///
/// doom_alloc_cel allocates the memory for the doom quest graphics.
void doom_alloc_cel();

/// address: 0x40ACD6
///
/// doom_cleanup releases the resource used for the doom quest.
void doom_cleanup();

/// address: 0x40ACE8
///
/// doom_load_graphics loads the doom graphics for Map of the Stars.
void doom_load_graphics();

/// address: 0x40AD34
///
/// doom_init initializes the time-based doom quest.
void doom_init();

/// address: 0x40AD5E
///
/// doom_close closes the Map of the Stars.
void doom_close();

/// address: 0x40AD74
///
/// doom_draw renders the Map of the Stars on screen.
void doom_draw();
