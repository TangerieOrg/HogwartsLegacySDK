#pragma once
#include <cstdint>
#include "UMapFXBase.hpp"
class UNiagaraComponent;
#pragma pack(push, 1)
class UMapFX : public UMapFXBase {
public:
    UNiagaraComponent* NiagaraComponent; // 0x30
    char pad_38[0x38];
    static UMapFX* StaticClass();
    void OnFinished(UNiagaraComponent* PSystem);
}; // Size: 0x70
#pragma pack(pop)
