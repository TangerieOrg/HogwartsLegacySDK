#pragma once
#include <cstdint>
#include "EAblAbilityTargetType.hpp"
#include "FRelativeTime.hpp"
#include "UAblAbilityNode.hpp"
#pragma pack(push, 1)
class UAblAbilityTask : public UAblAbilityNode {
public:
    FRelativeTime m_StartTime; // 0x28
    FRelativeTime m_EndTime; // 0x40
    TArray<EAblAbilityTargetType> m_TaskTargets; // 0x58
    bool m_Verbose; // 0x68
    bool m_IsDone; // 0x69
    char pad_6a[0x6];
    static UAblAbilityTask* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
