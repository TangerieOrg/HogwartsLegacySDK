#pragma once
#include <cstdint>
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FCinematicInfo : public FTableRowBase {
    FString SceneRig; // 0x8
    FString Tier; // 0x18
    bool Cooked; // 0x28
    char pad_29[0x7];
    FString Status; // 0x30
}; // Size: 0x40
#pragma pack(pop)
