#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UAblPlayObjectArchitectVfxTaskBase.hpp"
#pragma pack(push, 1)
class UAblPlayObjectArchitectVfxTask : public UAblPlayObjectArchitectVfxTaskBase {
public:
    FVector Location; // 0xc8
    FRotator Rotation; // 0xd4
    FVector Scale; // 0xe0
    float LifeSpan; // 0xec
    FVector DecalSize; // 0xf0
    float FadeInTime; // 0xfc
    float FadeOutTime; // 0x100
    char pad_104[0x4];
    static UAblPlayObjectArchitectVfxTask* StaticClass();
}; // Size: 0x108
#pragma pack(pop)
