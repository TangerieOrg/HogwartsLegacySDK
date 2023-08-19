#pragma once
#include <cstdint>
#include "FSkinFXAutoTriggerEffectInfo.hpp"
#include "USkinFXAutoTriggerDriver.hpp"
#pragma pack(push, 1)
class USkinFXAutoTriggerDriverDisease : public USkinFXAutoTriggerDriver {
public:
    FSkinFXAutoTriggerEffectInfo EffectInfo; // 0x30
    float Priority; // 0x70
    char pad_74[0x4];
    static USkinFXAutoTriggerDriverDisease* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
