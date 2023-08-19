#pragma once
#include <cstdint>
#include "FAlphaBlend.hpp"
#include "UAblAbilityEvent.hpp"
class UClass;
class UAblBranchCondition;
#pragma pack(push, 1)
class UAblBranchEvent : public UAblAbilityEvent {
public:
    UClass* m_BranchAbility; // 0x50
    bool m_DynamicBranchAbility; // 0x58
    char pad_59[0x3];
    FName m_DynamicBranchEventName; // 0x5c
    char pad_64[0x4];
    TArray<UAblBranchCondition*> m_Conditions; // 0x68
    bool m_MustPassAllConditions; // 0x78
    bool m_CopyTargetsOnBranch; // 0x79
    char pad_7a[0x6];
    FAlphaBlend m_TransitionBlend; // 0x80
    FAlphaBlend m_TransitionBlendOut; // 0xb0
    static UAblBranchEvent* StaticClass();
}; // Size: 0xe0
#pragma pack(pop)
