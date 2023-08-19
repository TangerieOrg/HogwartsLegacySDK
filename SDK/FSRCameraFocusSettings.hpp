#pragma once
#include <cstdint>
#include "FAnimatedBoolPropertyDriver.hpp"
#include "FAnimatedFloatPropertyDriver.hpp"
#include "FAnimatedIntegerPropertyDriver.hpp"
#include "FSRCameraTrackingFocusSettings.hpp"
#pragma pack(push, 1)
struct FSRCameraFocusSettings {
    FAnimatedIntegerPropertyDriver FocusMethod; // 0x0
    FAnimatedFloatPropertyDriver ManualFocusDistance; // 0x28
    FAnimatedBoolPropertyDriver bDrawDebugFocusPlane; // 0x50
    FAnimatedBoolPropertyDriver bSmoothFocusChanges; // 0x78
    FAnimatedFloatPropertyDriver FocusSmoothingInterpSpeed; // 0xa0
    FAnimatedFloatPropertyDriver FocusOffset; // 0xc8
    FSRCameraTrackingFocusSettings TrackingFocusSettings; // 0xf0
}; // Size: 0x138
#pragma pack(pop)
