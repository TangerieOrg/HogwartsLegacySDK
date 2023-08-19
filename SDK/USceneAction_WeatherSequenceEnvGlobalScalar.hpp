#pragma once
#include <cstdint>
#include "FEnvironmentalGlobalsScalarName.hpp"
#include "USceneAction_WeatherSequenceEnvGlobal.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherSequenceEnvGlobalScalar : public USceneAction_WeatherSequenceEnvGlobal {
public:
    FEnvironmentalGlobalsScalarName VariableName; // 0x90
    static USceneAction_WeatherSequenceEnvGlobalScalar* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
