#pragma once
#include <cstdint>
#include "FCloudDefinitionName.hpp"
#include "USceneAction_WeatherSequence.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherSequenceCloudsLegacy : public USceneAction_WeatherSequence {
public:
    FCloudDefinitionName Definition; // 0x88
    static USceneAction_WeatherSequenceCloudsLegacy* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
