#pragma once
#include <cstdint>
#include "FCharacterBoneProjectionMotion.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FCharacterBoneProjection {
    FVector ProjectionDirection; // 0x0
    FVector ProjectionPerpAxis; // 0xc
    FName ProjectionCenter; // 0x18
    float ProjectionOffset; // 0x20
    FCharacterBoneProjectionMotion Motion; // 0x24
    float Scale; // 0x38
    float HiddenDelay; // 0x3c
}; // Size: 0x40
#pragma pack(pop)
