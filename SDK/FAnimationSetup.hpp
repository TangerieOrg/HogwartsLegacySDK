#pragma once
#include <cstdint>
#include "FPerPlatformBool.hpp"
#include "FPerPlatformInt.hpp"
class UAnimSequence;
class UClass;
#pragma pack(push, 1)
struct FAnimationSetup {
    UAnimSequence* AnimSequence; // 0x0
    UClass* AnimBlueprint; // 0x8
    FPerPlatformInt NumRandomizedInstances; // 0x10
    FPerPlatformBool Enabled; // 0x14
    char pad_15[0x3];
}; // Size: 0x18
#pragma pack(pop)
