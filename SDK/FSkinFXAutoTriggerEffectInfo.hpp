#pragma once
#include <cstdint>
#include "FSkinFXAutoTriggeNiagaraInfo.hpp"
#include "FSkinFXAutoTriggeSkinFXInfo.hpp"
#pragma pack(push, 1)
struct FSkinFXAutoTriggerEffectInfo {
    FSkinFXAutoTriggeSkinFXInfo SkinFX; // 0x0
    FSkinFXAutoTriggeNiagaraInfo NiagaraFX; // 0x8
}; // Size: 0x40
#pragma pack(pop)
