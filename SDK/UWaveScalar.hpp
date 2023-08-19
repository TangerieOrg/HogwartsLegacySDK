#pragma once
#include <cstdint>
#include "EFieldFalloffType.hpp"
#include "EWaveFunctionType.hpp"
#include "FVector.hpp"
#include "UFieldNodeFloat.hpp"
#pragma pack(push, 1)
class UWaveScalar : public UFieldNodeFloat {
public:
    float Magnitude; // 0xc8
    FVector Position; // 0xcc
    float Wavelength; // 0xd8
    float Period; // 0xdc
    EWaveFunctionType Function; // 0xe0
    EFieldFalloffType Falloff; // 0xe1
    char pad_e2[0x6];
    static UWaveScalar* StaticClass();
    UWaveScalar* SetWaveScalar(float Magnitude, FVector Position, float Wavelength, float Period, float Time, EWaveFunctionType Function, EFieldFalloffType Falloff);
}; // Size: 0xe8
#pragma pack(pop)
