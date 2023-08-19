#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
class UNiagaraSystem;
class UNiagaraComponent;
class UMaterialParameterCollection;
#pragma pack(push, 1)
class UNiagaraStarrySkyComponent : public UActorComponent {
public:
    UNiagaraSystem* StarrySkySystem; // 0xc8
    bool bDestroySystemWhenHidden; // 0xd0
    char pad_d1[0x7];
    UNiagaraComponent* StarrySkyComponent; // 0xd8
    UMaterialParameterCollection* StarrySkyMPC; // 0xe0
    static UNiagaraStarrySkyComponent* StaticClass();
    void SetSystem(UNiagaraSystem* NiagaraSystem);
    void LoadSystem();
    void IsLoadedSystem();
}; // Size: 0xe8
#pragma pack(pop)
