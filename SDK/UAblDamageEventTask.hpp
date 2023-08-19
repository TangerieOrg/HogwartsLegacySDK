#pragma once
#include <cstdint>
#include "EAblAbilityTargetType.hpp"
#include "EAblAbilityTaskRealm.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblDamageEventTask : public UAblAbilityTask {
public:
    float m_damage; // 0x70
    EAblAbilityTargetType m_DamageSource; // 0x74
    char pad_75[0x3];
    TArray<EAblAbilityTargetType> m_DamageTargets; // 0x78
    FName m_EventName; // 0x88
    EAblAbilityTaskRealm m_TaskRealm; // 0x90
    bool m_UseAsyncCalculate; // 0x91
    char pad_92[0x6];
    static UAblDamageEventTask* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
