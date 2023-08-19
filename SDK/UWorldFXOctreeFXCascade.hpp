#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#include "FWorldFXCascadeSystemAdvancedOptions.hpp"
#include "FWorldFXMaterialOverrideList.hpp"
#include "FWorldFXSpawnOverridesFinal.hpp"
#include "UWorldFXOctreeFX.hpp"
class UParticleSystemComponent;
class UWorldFXCascadeInstanceParametersBase;
#pragma pack(push, 1)
class UWorldFXOctreeFXCascade : public UWorldFXOctreeFX {
public:
    char pad_50[0x28];
    UParticleSystemComponent* ParticleComponent; // 0x78
    FWorldFXMaterialOverrideList Materials; // 0x80
    UWorldFXCascadeInstanceParametersBase* InstanceParameters; // 0x90
    FVector Position; // 0x98
    FRotator Rotator; // 0xa4
    FVector Scale; // 0xb0
    FWorldFXSpawnOverridesFinal SpawnInfo; // 0xbc
    FWorldFXCascadeSystemAdvancedOptions AdvancedOptions; // 0xfc
    char pad_108[0x18];
    static UWorldFXOctreeFXCascade* StaticClass();
}; // Size: 0x120
#pragma pack(pop)
