#pragma once
#include <cstdint>
#include "FSmartName.hpp"
#pragma pack(push, 1)
struct FAnimCurveBase {
    FName LastObservedName; // 0x0
    FSmartName Name; // 0x8
    int32_t CurveTypeFlags; // 0x14
}; // Size: 0x18
#pragma pack(pop)
