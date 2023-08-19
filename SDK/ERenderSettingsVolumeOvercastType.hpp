#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERenderSettingsVolumeOvercastType : uint8_t {
    ClearAndOvercast = 0,
    ClearOnly = 1,
    OvercastOnly = 2,
    ERenderSettingsVolumeOvercastType_MAX = 3,
};
#pragma pack(pop)
