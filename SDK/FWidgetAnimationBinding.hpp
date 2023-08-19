#pragma once
#include <cstdint>
#include "FGuid.hpp"
#pragma pack(push, 1)
struct FWidgetAnimationBinding {
    FName WidgetName; // 0x0
    FName SlotWidgetName; // 0x8
    FGuid AnimationGuid; // 0x10
    bool bIsRootWidget; // 0x20
    char pad_21[0x3];
}; // Size: 0x24
#pragma pack(pop)
