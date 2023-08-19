#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDLSSSettingOverride : uint8_t {
    Enabled = 0,
    Disabled = 1,
    UseProjectSettings = 2,
    EDLSSSettingOverride_MAX = 3,
};
#pragma pack(pop)
