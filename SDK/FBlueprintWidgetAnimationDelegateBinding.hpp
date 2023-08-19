#pragma once
#include <cstdint>
#include "EWidgetAnimationEvent.hpp"
#pragma pack(push, 1)
struct FBlueprintWidgetAnimationDelegateBinding {
    EWidgetAnimationEvent Action; // 0x0
    char pad_1[0x3];
    FName AnimationToBind; // 0x4
    FName FunctionNameToBind; // 0xc
    FName UserTag; // 0x14
}; // Size: 0x1c
#pragma pack(pop)
