#pragma once
#include <cstdint>
#include "URPGTriggerEffect_ProtegoReflectAttack.hpp"
#pragma pack(push, 1)
class URPGTriggerEffect_ProtegoReflectRewards : public URPGTriggerEffect_ProtegoReflectAttack {
public:
    float FocusAmount; // 0x50
    bool RequirePerfect; // 0x54
    char pad_55[0x3];
    static URPGTriggerEffect_ProtegoReflectRewards* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
