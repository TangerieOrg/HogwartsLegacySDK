#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FCharacterBoneProjectionResults {
    int32_t ActiveProjections; // 0x0
    FVector ActorCenter; // 0x4
    FVector ActorExtent; // 0x10
    FVector ProjectionsCenter; // 0x1c
    FVector ProjectionsExtent; // 0x28
    FVector TotalProjectionsCenter; // 0x34
    FVector TotalProjectionsExtent; // 0x40
    float ActorRadius; // 0x4c
    bool bTotalProjectionsValid; // 0x50
    char pad_51[0x3];
}; // Size: 0x54
#pragma pack(pop)
