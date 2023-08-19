#pragma once
#include <cstdint>
#include "EFieldFalloffType.hpp"
#include "FVector.hpp"
#include "UFieldNodeFloat.hpp"
#pragma pack(push, 1)
class URadialFalloff : public UFieldNodeFloat {
public:
    float Magnitude; // 0xc8
    float MinRange; // 0xcc
    float MaxRange; // 0xd0
    float Default; // 0xd4
    float Radius; // 0xd8
    FVector Position; // 0xdc
    EFieldFalloffType Falloff; // 0xe8
    char pad_e9[0x7];
    static URadialFalloff* StaticClass();
    URadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, FVector Position, EFieldFalloffType Falloff);
}; // Size: 0xf0
#pragma pack(pop)
