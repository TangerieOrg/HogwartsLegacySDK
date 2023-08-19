#pragma once
#include <cstdint>
#include "FExpHeightFogParametersOverride.hpp"
#include "USceneAction_WeatherSequenceFog.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherSequenceFogOverrideParams : public USceneAction_WeatherSequenceFog {
public:
    FExpHeightFogParametersOverride Fog; // 0x88
    bool bFollowCamera; // 0x280
    char pad_281[0x7];
    static USceneAction_WeatherSequenceFogOverrideParams* StaticClass();
}; // Size: 0x288
#pragma pack(pop)
