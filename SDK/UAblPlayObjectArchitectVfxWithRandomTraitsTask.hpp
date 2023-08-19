#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UAblPlayObjectArchitectVfxTaskBase.hpp"
#pragma pack(push, 1)
class UAblPlayObjectArchitectVfxWithRandomTraitsTask : public UAblPlayObjectArchitectVfxTaskBase {
public:
    FVector LocationMin; // 0xc8
    FVector LocationMax; // 0xd4
    FRotator RotationMin; // 0xe0
    FRotator RotationMax; // 0xec
    FVector ScaleMin; // 0xf8
    FVector ScaleMax; // 0x104
    float LifeSpanMin; // 0x110
    float LifeSpanMax; // 0x114
    float FadeInTimeMin; // 0x118
    float FadeInTimeMax; // 0x11c
    float FadeOutTimeMin; // 0x120
    float FadeOutTimeMax; // 0x124
    FVector DecalSizeMin; // 0x128
    FVector DecalSizeMax; // 0x134
    static UAblPlayObjectArchitectVfxWithRandomTraitsTask* StaticClass();
}; // Size: 0x140
#pragma pack(pop)
