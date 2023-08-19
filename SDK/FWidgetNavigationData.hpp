#pragma once
#include <cstdint>
#include "EUINavigationRule.hpp"
#pragma pack(push, 1)
struct FWidgetNavigationData {
    EUINavigationRule Rule; // 0x0
    char pad_1[0x3];
    FName WidgetToFocus; // 0x4
    char pad_c[0x18];
}; // Size: 0x24
#pragma pack(pop)
