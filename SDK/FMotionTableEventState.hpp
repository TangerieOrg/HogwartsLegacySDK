#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FMotionTableEventState {
    float TimeToEvent; // 0x0
    float TravelDistanceToEvent; // 0x4
    float FollowThroughDuration; // 0x8
    float FollowThroughTravelDistance; // 0xc
    char pad_10[0x50];
}; // Size: 0x60
#pragma pack(pop)
