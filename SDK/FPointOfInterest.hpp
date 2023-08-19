#pragma once
#include <cstdint>
#include "EPointOfInterestState.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FPointOfInterest {
    FString PointOfInterestId; // 0x0
    FVector Location; // 0x10
    float DiscoverDistance; // 0x1c
    EPointOfInterestState State; // 0x20
    char pad_21[0x7];
}; // Size: 0x28
#pragma pack(pop)
