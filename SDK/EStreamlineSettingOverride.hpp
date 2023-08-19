#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EStreamlineSettingOverride : uint8_t {
    Enabled = 0,
    Disabled = 1,
    UseProjectSettings = 2,
    EStreamlineSettingOverride_MAX = 3,
};
#pragma pack(pop)
