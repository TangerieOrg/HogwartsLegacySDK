#pragma once
#include <cstdint>
#include "ECollisionResponse.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblNpcCollisionTask : public UAblAbilityTask {
public:
    bool bOverrideSpellResponse; // 0x70
    bool bOverrideWeaponResponse; // 0x71
    bool bOverrideAimConeResponse; // 0x72
    bool bOverridePawnResponse; // 0x73
    ECollisionResponse TaskSpellResponse; // 0x74
    ECollisionResponse TaskWeaponResponse; // 0x75
    ECollisionResponse TaskAimConeResponse; // 0x76
    ECollisionResponse TaskPawnResponse; // 0x77
    static UAblNpcCollisionTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
