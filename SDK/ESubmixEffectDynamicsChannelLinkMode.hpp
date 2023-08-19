#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESubmixEffectDynamicsChannelLinkMode : uint8_t {
    Disabled = 0,
    Average = 1,
    Peak = 2,
    Count = 3,
    ESubmixEffectDynamicsChannelLinkMode_MAX = 4,
};
#pragma pack(pop)
