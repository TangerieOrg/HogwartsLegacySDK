#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWeatherSequenceProbability : uint8_t {
    Common = 0,
    Infrequent = 1,
    Rare = 2,
    VeryRare = 3,
    Never = 4,
    EWeatherSequenceProbability_MAX = 5,
};
#pragma pack(pop)
