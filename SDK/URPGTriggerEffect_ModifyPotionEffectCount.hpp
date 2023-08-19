#pragma once
#include <cstdint>
#include "URPGTriggerEffect_Base.hpp"
#pragma pack(push, 1)
class URPGTriggerEffect_ModifyPotionEffectCount : public URPGTriggerEffect_Base {
public:
    char pad_40[0x8];
    static URPGTriggerEffect_ModifyPotionEffectCount* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
