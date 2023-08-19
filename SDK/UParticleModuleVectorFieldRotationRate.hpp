#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UParticleModuleVectorFieldBase.hpp"
#pragma pack(push, 1)
class UParticleModuleVectorFieldRotationRate : public UParticleModuleVectorFieldBase {
public:
    FVector RotationRate; // 0x30
    char pad_3c[0x4];
    static UParticleModuleVectorFieldRotationRate* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
