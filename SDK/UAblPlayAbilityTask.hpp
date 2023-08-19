#pragma once
#include <cstdint>
#include "EAblAbilityTargetType.hpp"
#include "UAblAbilityTask.hpp"
class UClass;
#pragma pack(push, 1)
class UAblPlayAbilityTask : public UAblAbilityTask {
public:
    UClass* m_Ability; // 0x70
    EAblAbilityTargetType m_Owner; // 0x78
    EAblAbilityTargetType m_Instigator; // 0x79
    char pad_7a[0x6];
    static UAblPlayAbilityTask* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
