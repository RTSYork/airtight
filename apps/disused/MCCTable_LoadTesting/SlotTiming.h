#ifndef __SLOT_TIMING
#define __SLOT_TIMING

// Set to 100 for 100ms slots, 10 for 10ms slots
// includes a frequency correction
// ahould be 115 for a 100ms slot
#define SLOT_LENGTH_MILLIS 100
#define SLOT_LENGTH_FREQUENCY_CORRECTED 115
//#define SLOT_LENGTH_MILLIS 10

//#define FLOW_INIT_TIMER 100004
#define FLOW_INIT_TIMER 1000

#define SLOTS_IN_FRAME 6

// Merge in from the application layer here

#endif
