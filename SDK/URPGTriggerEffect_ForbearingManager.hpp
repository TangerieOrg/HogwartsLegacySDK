#pragma once
#include <cstdint>
#include "URPGTriggerEffect_RecoverFromDamage.hpp"
#pragma pack(push, 1)
class URPGTriggerEffect_ForbearingManager : public URPGTriggerEffect_RecoverFromDamage {
public:
    char pad_c8[0x8];
    static URPGTriggerEffect_ForbearingManager* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
