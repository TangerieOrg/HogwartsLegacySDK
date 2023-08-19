#pragma once
#include <cstdint>
#include "FMaterialSwapParameters.hpp"
#include "FSkinFXAutoTriggerEffectInfo.hpp"
#pragma pack(push, 1)
struct FSkinFXAutoTriggerDriverEffectInfo : public FSkinFXAutoTriggerEffectInfo {
    float Priority; // 0x40
    char pad_44[0x4];
    FMaterialSwapParameters Parameters; // 0x48
}; // Size: 0x98
#pragma pack(pop)
