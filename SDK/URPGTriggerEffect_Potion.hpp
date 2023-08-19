#pragma once
#include <cstdint>
#include "URPGTriggerEffect_Base.hpp"
class URPGAbility;
#pragma pack(push, 1)
class URPGTriggerEffect_Potion : public URPGTriggerEffect_Base {
public:
    URPGAbility* OwnerAbility; // 0x40
    char pad_48[0x8];
    static URPGTriggerEffect_Potion* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
