#pragma once
#include <cstdint>
#include "FEnvironmentalGlobalsVectorOrColorName.hpp"
#include "USceneAction_WeatherSequenceEnvGlobal.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherSequenceEnvGlobalColor : public USceneAction_WeatherSequenceEnvGlobal {
public:
    FEnvironmentalGlobalsVectorOrColorName VariableName; // 0x90
    bool bLerpWithHSV; // 0xa0
    char pad_a1[0x7];
    static USceneAction_WeatherSequenceEnvGlobalColor* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
