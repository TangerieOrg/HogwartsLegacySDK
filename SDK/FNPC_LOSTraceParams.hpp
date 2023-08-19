#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FNPC_LOSTraceParams {
    float TargetAway; // 0x0
    float TargetUp; // 0x4
    float TargetSwimmingUp; // 0x8
    float TargetHalfCapsuleScale; // 0xc
    float PerceiverUp; // 0x10
    float PerceiverSwimmingUp; // 0x14
    float PerceiverHalfCapsuleScale; // 0x18
    float Radius; // 0x1c
    float NPC2NPCUp; // 0x20
}; // Size: 0x24
#pragma pack(pop)
