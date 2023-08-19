#pragma once
#include <cstdint>
#include "ENpcAbilityBranchType.hpp"
#include "UAblConditionalBranchTaskBase.hpp"
#pragma pack(push, 1)
class UAblNpcAbilityBranchTask : public UAblConditionalBranchTaskBase {
public:
    ENpcAbilityBranchType AbilityType; // 0xc0
    char pad_c1[0x7];
    static UAblNpcAbilityBranchTask* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
