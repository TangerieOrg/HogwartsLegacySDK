#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FNiagaraScalabilityState {
    float Significance; // 0x0
    uint8_t bCulled : 1; // 0x4
    uint8_t bPreviousCulled : 1; // 0x4
    uint8_t bCulledByDistance : 1; // 0x4
    uint8_t bCulledByInstanceCount : 1; // 0x4
    uint8_t bCulledByVisibility : 1; // 0x4
    uint8_t bCulledByGlobalBudget : 1; // 0x4
    uint8_t pad_bitfield_4_6 : 2;
    char pad_5[0x3];
}; // Size: 0x8
#pragma pack(pop)
