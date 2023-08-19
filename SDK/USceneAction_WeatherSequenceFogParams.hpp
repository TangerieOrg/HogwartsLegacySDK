#pragma once
#include <cstdint>
#include "FExpHeightFogParameters.hpp"
#include "USceneAction_WeatherSequenceFog.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherSequenceFogParams : public USceneAction_WeatherSequenceFog {
public:
    FExpHeightFogParameters Fog; // 0x88
    bool bFollowCamera; // 0x260
    char pad_261[0x7];
    static USceneAction_WeatherSequenceFogParams* StaticClass();
}; // Size: 0x268
#pragma pack(pop)
