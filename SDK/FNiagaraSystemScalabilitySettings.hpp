#pragma once
#include <cstdint>
#include "FNiagaraPlatformSet.hpp"
#pragma pack(push, 1)
struct FNiagaraSystemScalabilitySettings {
    FNiagaraPlatformSet Platforms; // 0x0
    uint8_t bCullByDistance : 1; // 0x30
    uint8_t bCullMaxInstanceCount : 1; // 0x30
    uint8_t bCullPerSystemMaxInstanceCount : 1; // 0x30
    uint8_t bCullByMaxTimeWithoutRender : 1; // 0x30
    uint8_t bCullByGlobalBudget : 1; // 0x30
    uint8_t pad_bitfield_30_5 : 3;
    char pad_31[0x3];
    float MaxDistance; // 0x34
    int32_t MaxInstances; // 0x38
    int32_t MaxSystemInstances; // 0x3c
    float MaxTimeWithoutRender; // 0x40
    float MaxGlobalBudgetUsage; // 0x44
}; // Size: 0x48
#pragma pack(pop)
