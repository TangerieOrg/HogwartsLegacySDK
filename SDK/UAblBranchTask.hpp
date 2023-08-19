#pragma once
#include <cstdint>
#include "EAnimBlendTickStyle.hpp"
#include "EEvaluatorRootMotion\Mode.hpp"
#include "FAlphaBlend.hpp"
#include "UAblAbilityTask.hpp"
class UClass;
class UAblBranchCondition;
#pragma pack(push, 1)
class UAblBranchTask : public UAblAbilityTask {
public:
    UClass* m_BranchAbility; // 0x70
    UClass* m_BranchScratchpad; // 0x78
    bool m_DynamicBranchAbility; // 0x80
    char pad_81[0x3];
    FName m_DynamicBranchEventName; // 0x84
    char pad_8c[0x4];
    TArray<UAblBranchCondition*> m_Conditions; // 0x90
    bool m_MustPassAllConditions; // 0xa0
    bool m_CopyTargetsOnBranch; // 0xa1
    char pad_a2[0x6];
    FAlphaBlend m_TransitionBlend; // 0xa8
    FAlphaBlend m_TransitionBlendOut; // 0xd8
    bool m_bOverrideTransitionBlend; // 0x108
    bool m_bOverrideTransitionBlendOut; // 0x109
    bool bClampBlendOutTime; // 0x10a
    bool m_OverrideRootMotion; // 0x10b
    EEvaluatorRootMotion::Mode m_UseSourceRootMotion; // 0x10c
    EEvaluatorRootMotion::Mode m_UseDestRootMotion; // 0x10d
    bool m_OverrideBlendTickStyle; // 0x10e
    EAnimBlendTickStyle m_BlendTickStyle; // 0x10f
    bool bPreBranchTick; // 0x110
    char pad_111[0x7];
    static UAblBranchTask* StaticClass();
}; // Size: 0x118
#pragma pack(pop)
