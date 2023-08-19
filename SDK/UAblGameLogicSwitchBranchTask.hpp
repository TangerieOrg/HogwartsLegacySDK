#pragma once
#include <cstdint>
#include "EAnimBlendTickStyle.hpp"
#include "EEvaluatorRootMotion\Mode.hpp"
#include "FAlphaBlend.hpp"
#include "UAblAbilityTask.hpp"
class UClass;
#pragma pack(push, 1)
class UAblGameLogicSwitchBranchTask : public UAblAbilityTask {
public:
    char pad_70[0x50];
    UClass* DefaultAbility; // 0xc0
    bool m_CopyTargetsOnBranch; // 0xc8
    bool m_bOverrideTransitionBlend; // 0xc9
    bool m_bOverrideTransitionBlendOut; // 0xca
    char pad_cb[0x5];
    FAlphaBlend m_TransitionBlend; // 0xd0
    FAlphaBlend m_TransitionBlendOut; // 0x100
    bool bClampBlendOutTime; // 0x130
    EEvaluatorRootMotion::Mode m_UseSourceRootMotion; // 0x131
    EEvaluatorRootMotion::Mode m_UseDestRootMotion; // 0x132
    bool m_OverrideRootMotion; // 0x133
    bool m_OverrideBlendTickStyle; // 0x134
    EAnimBlendTickStyle m_BlendTickStyle; // 0x135
    char pad_136[0x2];
    static UAblGameLogicSwitchBranchTask* StaticClass();
}; // Size: 0x138
#pragma pack(pop)
