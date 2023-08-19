#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EAccessibilityAudioCueMode {
    ACCESSIBILITY_EVENT_MODE_ONE_SHOT = 0,
    ACCESSIBILITY_EVENT_MODE_ENTER = 1,
    ACCESSIBILITY_EVENT_MODE_LEAVE = 2,
    ACCESSIBILITY_EVENT_MODE_MAX = 3,
};
#pragma pack(pop)
