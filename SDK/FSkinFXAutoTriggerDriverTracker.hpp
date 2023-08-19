#pragma once
#include <cstdint>
#include "FSkinFXAutoTriggerEffectInfo.hpp"
class USkinFXAutoTriggerDriver;
class UNiagaraComponent;
#pragma pack(push, 1)
struct FSkinFXAutoTriggerDriverTracker {
    USkinFXAutoTriggerDriver* Driver; // 0x0
    FSkinFXAutoTriggerEffectInfo EffectInfo; // 0x8
    float Priority; // 0x48
    char pad_4c[0x4];
    UNiagaraComponent* NiagaraComponent; // 0x50
    uint8_t bSignalledActive : 1; // 0x58
    uint8_t bSignalledInactive : 1; // 0x58
    uint8_t pad_bitfield_58_2 : 6;
    char pad_59[0x7];
}; // Size: 0x60
#pragma pack(pop)
