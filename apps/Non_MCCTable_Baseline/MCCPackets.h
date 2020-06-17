// JRH: MCC packets data structures and formatting library

#ifndef __MCC_PACKETS
#define __MCC_PACKETS

typedef enum __crit {
  LO = 0,
  HI = 1
} crit;

typedef enum _action {
  A_IDLE = 0,
  A_TX = 1,
  A_LISTEN = 2,
} action;

typedef struct _slot_action {
  action behaviour;
  uint8_t peer_id;
  uint8_t priority;
} slot_action;

#define MCC_PACKET_MAXDATA 3

typedef struct __mccpacket {
  //  nx_uint8_t ack_fails_stats;
  crit crit_level;
  nx_uint8_t flow_id;
  nx_uint8_t priority; // Global priority level
  nx_uint8_t c; // C value
  nx_uint8_t src;
  nx_uint8_t dst;
  nx_uint8_t hop_src;  // Intermediate hops
  nx_uint8_t hop_dst;  // Intermediate dests
  nx_uint8_t seq_num;  // Sequence number - these are continuous, e.g. C = 3 sends [0,1,2],[3,4,5] in bursts of 3
  nx_uint8_t local_retransmits; // Local retransmission attempts
  nx_uint16_t enqueueSlot;      // Slot number of arrival at MAC layer of originator
  nx_uint16_t hopSendSlot;      // Local slot number of send
  nx_uint8_t burst_num;  // The sequence number of a burst e.g. if C = 3, this gives [0,1,2],[0,1,2] in the bursts
  nx_uint32_t inject_time; // These are 32 bit timers of injection by the application layer
  nx_uint32_t send_time;   // This is a 32 bit timer set just before actual transmission
  nx_uint8_t failed_ack_stats; // The failed ACK counter
  nx_uint8_t data [MCC_PACKET_MAXDATA];
} mccpacket;

// Records the successful reception status of packets
// at the destination
typedef struct __mccrecord {
  nx_uint16_t seq_num;
  nx_uint8_t flow_id;
} mccrecord;

typedef struct __mccsend_record {
  nx_uint16_t seq_num;
  nx_uint8_t flow_id;
  nx_uint32_t inject_time;
  nx_uint32_t send_time;
} mccsend_record;


// ACKs are indicated by their application source
// and destination
//typedef struct __mcc_ack {
//  nx_uint8_t original_src;
//  nx_uint8_t original_dst;
//} mccack;

typedef enum __is_mmccpacket {
  IS_MCC = 1,
  NOT_MCC = 0,
} is_mccpacket;

bool mcc_should_receive(action * table, uint8_t slot);
void mcc_printf(mccpacket * pkt);

#endif
