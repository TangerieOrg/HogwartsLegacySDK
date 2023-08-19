#pragma once
#include <cstdint>
#include "EAblAbilityTargetType.hpp"
#include "UAblAbilityTask.hpp"
class UClass;
class UAblTaskCondition;
#pragma pack(push, 1)
class UAblPlayAbilityByChannelTask : public UAblAbilityTask {
public:
    UClass* m_Ability; // 0x70
    EAblAbilityTargetType m_Owner; // 0x78
    EAblAbilityTargetType m_Instigator; // 0x79
    char pad_7a[0x2];
    FName m_ChannelName; // 0x7c
    char pad_84[0x4];
    TArray<UAblTaskCondition*> TaskConditions; // 0x88
    static UAblPlayAbilityByChannelTask* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
