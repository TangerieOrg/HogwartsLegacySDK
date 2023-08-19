#pragma once
#include <cstdint>
#include "EFieldFalloffType.hpp"
#include "FTransform.hpp"
#include "UFieldNodeFloat.hpp"
#pragma pack(push, 1)
class UBoxFalloff : public UFieldNodeFloat {
public:
    float Magnitude; // 0xc8
    float MinRange; // 0xcc
    float MaxRange; // 0xd0
    float Default; // 0xd4
    char pad_d8[0x8];
    FTransform Transform; // 0xe0
    EFieldFalloffType Falloff; // 0x110
    char pad_111[0xf];
    static UBoxFalloff* StaticClass();
    UBoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, FTransform Transform, EFieldFalloffType Falloff);
}; // Size: 0x120
#pragma pack(pop)
