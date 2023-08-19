#pragma once
#include <cstdint>
#include "UPrimitiveComponent.hpp"
class UNiagaraSystem;
class UNiagaraComponent;
#pragma pack(push, 1)
class UMissionEntryPointEffectComponent : public UPrimitiveComponent {
public:
    UNiagaraSystem* NiagaraSystem; // 0x480
    UNiagaraComponent* NiagaraComponent; // 0x488
    static UMissionEntryPointEffectComponent* StaticClass();
    void Enable();
    void Disable();
}; // Size: 0x490
#pragma pack(pop)
