#pragma once
#include <cstdint>
#include "FWindDefinitionName.hpp"
#include "USceneAction_WeatherSequenceWind.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherSequenceWindLegacy : public USceneAction_WeatherSequenceWind {
public:
    FWindDefinitionName Definition; // 0x88
    static USceneAction_WeatherSequenceWindLegacy* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
