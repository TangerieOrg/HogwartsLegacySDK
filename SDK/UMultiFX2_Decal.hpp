#pragma once
#include <cstdint>
#include "EDecalOrientation.hpp"
#include "FVector.hpp"
#include "UMultiFX2_Filtered.hpp"
class UMaterialInterface;
#pragma pack(push, 1)
class UMultiFX2_Decal : public UMultiFX2_Filtered {
public:
    bool bAttached; // 0x68
    char pad_69[0x7];
    UMaterialInterface* Material; // 0x70
    FVector Size; // 0x78
    float FadeInDelay; // 0x84
    float FadeInTime; // 0x88
    float LifeSpan; // 0x8c
    float FadeTime; // 0x90
    EDecalOrientation DecalOrientation; // 0x94
    char pad_95[0x3];
    FVector DecalLocalOffset; // 0x98
    char pad_a4[0x4];
    static UMultiFX2_Decal* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
