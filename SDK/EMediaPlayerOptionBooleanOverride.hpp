#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMediaPlayerOptionBooleanOverride : uint8_t {
    UseMediaPlayerSetting = 0,
    Enabled = 1,
    Disabled = 2,
    EMediaPlayerOptionBooleanOverride_MAX = 3,
};
#pragma pack(pop)
