#pragma once
#include <cstdint>
#include "EFieldFalloffType.hpp"
#include "FVector.hpp"
#include "UFieldNodeFloat.hpp"
#pragma pack(push, 1)
class UPlaneFalloff : public UFieldNodeFloat {
public:
    float Magnitude; // 0xc8
    float MinRange; // 0xcc
    float MaxRange; // 0xd0
    float Default; // 0xd4
    float Distance; // 0xd8
    FVector Position; // 0xdc
    FVector Normal; // 0xe8
    EFieldFalloffType Falloff; // 0xf4
    char pad_f5[0x3];
    static UPlaneFalloff* StaticClass();
    UPlaneFalloff* SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, FVector Position, FVector Normal, EFieldFalloffType Falloff);
}; // Size: 0xf8
#pragma pack(pop)
