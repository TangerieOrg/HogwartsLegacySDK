#pragma once
#include <cstdint>
#include "FDataTableRowHandle.hpp"
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FAccessibilityAudioCueIconTable : public FTableRowBase {
    FName CueName; // 0x8
    FName IconName; // 0x10
    float LifeTime; // 0x18
    bool ShouldFade; // 0x1c
    char pad_1d[0x3];
    float FadeTime; // 0x20
    char pad_24[0x4];
    FDataTableRowHandle Colour; // 0x28
    float Scale; // 0x38
    bool ShouldRotate; // 0x3c
    char pad_3d[0x3];
    float DefaultRotation; // 0x40
    int32_t MaxInstances; // 0x44
    int32_t MaxVisibleInstances; // 0x48
    int32_t MaxInstancesPerActor; // 0x4c
    int32_t Priority; // 0x50
    float Range; // 0x54
    float ClampDistance; // 0x58
    char pad_5c[0xc];
}; // Size: 0x68
#pragma pack(pop)
