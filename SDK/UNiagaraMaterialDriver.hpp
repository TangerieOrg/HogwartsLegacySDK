#pragma once
#include <cstdint>
#include "FNiagaraMaterialDriverSetup.hpp"
#include "FNiagaraMaterialDriverState.hpp"
#include "UObject.hpp"
class UNiagaraComponent;
#pragma pack(push, 1)
class UNiagaraMaterialDriver : public UObject {
public:
    FNiagaraMaterialDriverSetup Setup; // 0x28
    FNiagaraMaterialDriverState State; // 0xa0
    static UNiagaraMaterialDriver* StaticClass();
    void OnNiagaraSystemFinished(UNiagaraComponent* PSystem);
}; // Size: 0xb8
#pragma pack(pop)
