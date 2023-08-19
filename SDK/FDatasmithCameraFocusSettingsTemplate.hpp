#pragma once
#include <cstdint>
#include "ECameraFocusMethod.hpp"
#pragma pack(push, 1)
struct FDatasmithCameraFocusSettingsTemplate {
    ECameraFocusMethod FocusMethod; // 0x0
    char pad_1[0x3];
    float ManualFocusDistance; // 0x4
}; // Size: 0x8
#pragma pack(pop)
