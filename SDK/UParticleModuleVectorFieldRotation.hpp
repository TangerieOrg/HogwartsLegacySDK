#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UParticleModuleVectorFieldBase.hpp"
#pragma pack(push, 1)
class UParticleModuleVectorFieldRotation : public UParticleModuleVectorFieldBase {
public:
    FVector MinInitialRotation; // 0x30
    FVector MaxInitialRotation; // 0x3c
    static UParticleModuleVectorFieldRotation* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
