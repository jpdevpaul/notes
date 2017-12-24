#include "types.h"

// address: 0x45E08C
//
// tmsg_get retreives the contents of a timed message from the queue.
int __fastcall tmsg_get(uint8_t *data, int size);

// address: 0x45E0D7
//
// tmsg_add adds a timed message to the queue, which will be processed 500 ms
// later.
void __fastcall tmsg_add(uint8_t *msg, uint8_t len);

// address: 0x45E12A
//
// tmsg_cleanup releases the resources of the timed messages queue.
void tmsg_cleanup();
