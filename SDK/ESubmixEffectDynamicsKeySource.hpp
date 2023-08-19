#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESubmixEffectDynamicsKeySource : uint8_t {
    Default = 0,
    AudioBus = 1,
    Submix = 2,
    Count = 3,
    ESubmixEffectDynamicsKeySource_MAX = 4,
};
#pragma pack(pop)
