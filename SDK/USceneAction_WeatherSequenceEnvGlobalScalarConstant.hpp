#pragma once
#include <cstdint>
#include "USceneAction_WeatherSequenceEnvGlobalScalar.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherSequenceEnvGlobalScalarConstant : public USceneAction_WeatherSequenceEnvGlobalScalar {
public:
    float Value; // 0xa0
    char pad_a4[0x4];
    static USceneAction_WeatherSequenceEnvGlobalScalarConstant* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
