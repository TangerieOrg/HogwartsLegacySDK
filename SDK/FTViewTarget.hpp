#pragma once
#include <cstdint>
#include "FMinimalViewInfo.hpp"
class AActor;
class APlayerState;
#pragma pack(push, 1)
struct FTViewTarget {
    AActor* Target; // 0x0
    char pad_8[0x8];
    FMinimalViewInfo POV; // 0x10
    APlayerState* PlayerState; // 0x690
    char pad_698[0x8];
}; // Size: 0x6a0
#pragma pack(pop)
