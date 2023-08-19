#pragma once
#include <cstdint>
#include "FQuat.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FGlobalLightingDirectionalLightDirection {
    FQuat Rotation; // 0x0
    FRotator Rotator; // 0x10
    FVector Direction; // 0x1c
    char pad_28[0x8];
}; // Size: 0x30
#pragma pack(pop)
