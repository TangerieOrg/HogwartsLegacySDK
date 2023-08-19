#pragma once
#include <cstdint>
#include "UObject.hpp"
class UDataTable;
class UParticleSystem;
#pragma pack(push, 1)
class UFootPlantEffects : public UObject {
public:
    char pad_28[0x10];
    UDataTable* SurfaceTypeToVFXTable; // 0x38
    UParticleSystem* TestVFX; // 0x40
    char pad_48[0x8];
    static UFootPlantEffects* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
