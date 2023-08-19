#pragma once
#include <cstdint>
#include "UNiagaraBaselineController.hpp"
class UNiagaraComponent;
#pragma pack(push, 1)
class UNiagaraBaselineController_Basic : public UNiagaraBaselineController {
public:
    int32_t NumInstances; // 0x68
    char pad_6c[0x4];
    TArray<UNiagaraComponent*> SpawnedComponents; // 0x70
    static UNiagaraBaselineController_Basic* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
