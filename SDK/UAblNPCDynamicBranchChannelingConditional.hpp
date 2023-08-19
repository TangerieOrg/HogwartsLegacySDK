#pragma once
#include <cstdint>
#include "EEnemy_Ability.hpp"
#include "FAlphaBlend.hpp"
#include "UAblChannelingBase.hpp"
#pragma pack(push, 1)
class UAblNPCDynamicBranchChannelingConditional : public UAblChannelingBase {
public:
    bool m_CopyTargetsOnBranch; // 0x30
    char pad_31[0x7];
    FAlphaBlend m_TransitionBlend; // 0x38
    EEnemy_Ability AbilityState; // 0x68
    char pad_69[0x7];
    static UAblNPCDynamicBranchChannelingConditional* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
