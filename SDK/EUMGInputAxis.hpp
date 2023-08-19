#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EUMGInputAxis : uint8_t {
    UMGMapZoomIn = 0,
    UMGMapZoomOut = 1,
    UMGMapScreenMove_X = 2,
    UMGMapScreenMove_Y = 3,
    UMGLeftThumbStickXAxis = 4,
    UMGLeftThumbStickYAxis = 5,
    UMGRightThumbStickXAxis = 6,
    UMGRightThumbStickYAxis = 7,
    UMGLeftTriggerAxis = 8,
    UMGRightTriggerAxis = 9,
    UMGTouchpadX = 10,
    UMGTouchpadY = 11,
    UMGMouseWheelAxis = 12,
    UMGMouseX = 13,
    UMGMouseY = 14,
    UMGInputAxis_MAX = 15,
    EUMGInputAxis_MAX = 16,
};
#pragma pack(pop)
