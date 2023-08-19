#pragma once
#include <cstdint>
#include "FRepRootMotionMontage.hpp"
#pragma pack(push, 1)
struct FSimulatedRootMotionReplicatedMove {
    float Time; // 0x0
    char pad_4[0x4];
    FRepRootMotionMontage RootMotion; // 0x8
}; // Size: 0xa0
#pragma pack(pop)
