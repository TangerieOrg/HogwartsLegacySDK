#pragma once
#include <cstdint>
#include "FActorToHardSwap.hpp"
#pragma pack(push, 1)
struct FActorToHardSwapList {
    TArray<FActorToHardSwap> Actors; // 0x0
    int32_t Processed; // 0x10
    int32_t Swapped; // 0x14
}; // Size: 0x18
#pragma pack(pop)
