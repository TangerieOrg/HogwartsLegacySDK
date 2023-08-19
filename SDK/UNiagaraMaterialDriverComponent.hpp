#pragma once
#include <cstdint>
#include "FNiagaraMaterialDriverSetup.hpp"
#include "FNiagaraMaterialDriverState.hpp"
#include "USceneComponent.hpp"
class UNiagaraComponent;
#pragma pack(push, 1)
class UNiagaraMaterialDriverComponent : public USceneComponent {
public:
    char pad_220[0x70];
    FNiagaraMaterialDriverState State; // 0x290
    char pad_2a8[0x8];
    static UNiagaraMaterialDriverComponent* StaticClass();
    void Reset();
    void OnNiagaraSystemFinished(UNiagaraComponent* PSystem);
}; // Size: 0x2b0
#pragma pack(pop)
