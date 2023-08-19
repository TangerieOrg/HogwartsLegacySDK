#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EWorldPositionIncludedOffsets : uint8_t {
    WPT_Default = 0,
    WPT_ExcludeAllShaderOffsets = 1,
    WPT_CameraRelative = 2,
    WPT_CameraRelativeNoOffsets = 3,
    WPT_MAX = 4,
};
#pragma pack(pop)
