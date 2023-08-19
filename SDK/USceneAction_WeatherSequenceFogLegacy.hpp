#pragma once
#include <cstdint>
#include "FFogDefinitionName.hpp"
#include "USceneAction_WeatherSequenceFog.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherSequenceFogLegacy : public USceneAction_WeatherSequenceFog {
public:
    FFogDefinitionName Definition; // 0x88
    static USceneAction_WeatherSequenceFogLegacy* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
