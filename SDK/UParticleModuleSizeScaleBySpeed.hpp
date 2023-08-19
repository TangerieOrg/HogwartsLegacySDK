#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#include "UParticleModuleSizeBase.hpp"
#pragma pack(push, 1)
class UParticleModuleSizeScaleBySpeed : public UParticleModuleSizeBase {
public:
    FVector2D SpeedScale; // 0x30
    FVector2D MaxScale; // 0x38
    static UParticleModuleSizeScaleBySpeed* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
