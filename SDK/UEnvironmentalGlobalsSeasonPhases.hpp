#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UEnvironmentalGlobalsSeasonPhases : public UDataAsset {
public:
    int32_t FallPhases; // 0x30
    int32_t WinterPhases; // 0x34
    int32_t SpringPhases; // 0x38
    int32_t SummerPhases; // 0x3c
    static UEnvironmentalGlobalsSeasonPhases* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
