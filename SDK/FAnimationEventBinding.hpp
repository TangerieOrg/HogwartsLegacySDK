#pragma once
#include <cstdint>
#include "EWidgetAnimationEvent.hpp"
class UWidgetAnimation;
#pragma pack(push, 1)
struct FAnimationEventBinding {
    UWidgetAnimation* Animation; // 0x0
    char pad_8[0x10];
    EWidgetAnimationEvent AnimationEvent; // 0x18
    char pad_19[0x3];
    FName UserTag; // 0x1c
    char pad_24[0x4];
}; // Size: 0x28
#pragma pack(pop)
