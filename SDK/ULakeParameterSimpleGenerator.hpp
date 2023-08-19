#pragma once
#include <cstdint>
#include "ULakeParameterGenerator.hpp"
#pragma pack(push, 1)
class ULakeParameterSimpleGenerator : public ULakeParameterGenerator {
public:
    int32_t NumWaves; // 0x60
    float Randomness; // 0x64
    float MinWavelength; // 0x68
    float MaxWavelength; // 0x6c
    float WavelengthFalloff; // 0x70
    float MinAmplitude; // 0x74
    float MaxAmplitude; // 0x78
    float AmplitudeFalloff; // 0x7c
    float DirectionAngularSpreadDeg; // 0x80
    char pad_84[0x4];
    static ULakeParameterSimpleGenerator* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
