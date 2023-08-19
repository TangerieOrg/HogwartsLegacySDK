#pragma once
#include <cstdint>
#include "ESpatialInputGestureAxis.hpp"
#pragma pack(push, 1)
struct FXRGestureConfig {
    bool bTap; // 0x0
    bool bHold; // 0x1
    ESpatialInputGestureAxis AxisGesture; // 0x2
    bool bNavigationAxisX; // 0x3
    bool bNavigationAxisY; // 0x4
    bool bNavigationAxisZ; // 0x5
}; // Size: 0x6
#pragma pack(pop)
