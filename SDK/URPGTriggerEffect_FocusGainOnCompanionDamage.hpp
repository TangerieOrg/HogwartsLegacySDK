#pragma once
#include <cstdint>
#include "URPGTriggerEffect_ActorDamaged.hpp"
#pragma pack(push, 1)
class URPGTriggerEffect_FocusGainOnCompanionDamage : public URPGTriggerEffect_ActorDamaged {
public:
    float FocusGain; // 0x58
    char pad_5c[0x4];
    static URPGTriggerEffect_FocusGainOnCompanionDamage* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
