#pragma once
#include <cstdint>
class AActor;
#pragma pack(push, 1)
struct FGroundSwarmingTargetTracker {
    AActor* Target; // 0x0
    int32_t Hits; // 0x8
    float ThresholdMetDelayTimer; // 0xc
    bool bSignalledThresholdResult; // 0x10
    char pad_11[0x7];
}; // Size: 0x18
#pragma pack(pop)
