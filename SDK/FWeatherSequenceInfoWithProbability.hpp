#pragma once
#include <cstdint>
#include "EWeatherSequenceProbability.hpp"
#include "FWeatherSequenceInfo.hpp"
#pragma pack(push, 1)
struct FWeatherSequenceInfoWithProbability : public FWeatherSequenceInfo {
    EWeatherSequenceProbability Probability; // 0x38
    char pad_39[0x7];
}; // Size: 0x40
#pragma pack(pop)
