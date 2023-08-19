#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#include "FWorldFXMaterialOverrideList.hpp"
#include "FWorldFXNiagaraSystemAdvancedOptions.hpp"
#include "FWorldFXSpawnOverridesFinal.hpp"
#include "UWorldFXOctreeFX.hpp"
class UNiagaraComponent;
class UWorldFXNiagaraSystemInitializer;
#pragma pack(push, 1)
class UWorldFXOctreeFXNiagara : public UWorldFXOctreeFX {
public:
    char pad_50[0x28];
    UNiagaraComponent* NiagaraComponent; // 0x78
    UWorldFXNiagaraSystemInitializer* Initializer; // 0x80
    FWorldFXMaterialOverrideList Materials; // 0x88
    FVector Position; // 0x98
    FRotator Rotator; // 0xa4
    FVector Scale; // 0xb0
    FWorldFXSpawnOverridesFinal SpawnInfo; // 0xbc
    FWorldFXNiagaraSystemAdvancedOptions AdvancedOptions; // 0xfc
    char pad_108[0x18];
    static UWorldFXOctreeFXNiagara* StaticClass();
}; // Size: 0x120
#pragma pack(pop)
