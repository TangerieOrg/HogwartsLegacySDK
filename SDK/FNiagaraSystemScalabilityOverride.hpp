#pragma once
#include <cstdint>
#include "FNiagaraSystemScalabilitySettings.hpp"
#pragma pack(push, 1)
struct FNiagaraSystemScalabilityOverride : public FNiagaraSystemScalabilitySettings {
    uint8_t bOverrideDistanceSettings : 1; // 0x48
    uint8_t bOverrideInstanceCountSettings : 1; // 0x48
    uint8_t bOverridePerSystemInstanceCountSettings : 1; // 0x48
    uint8_t bOverrideTimeSinceRendererSettings : 1; // 0x48
    uint8_t bOverrideGlobalBudgetCullingSettings : 1; // 0x48
    uint8_t pad_bitfield_48_5 : 3;
    char pad_49[0x7];
}; // Size: 0x50
#pragma pack(pop)
