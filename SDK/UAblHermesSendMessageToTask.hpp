#pragma once
#include <cstdint>
#include "EAblAbilityTargetType.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblHermesSendMessageToTask : public UAblAbilityTask {
public:
    EAblAbilityTargetType m_MessageSender; // 0x70
    EAblAbilityTargetType m_MessageTarget; // 0x71
    char pad_72[0x2];
    FName m_MessageName; // 0x74
    FName m_CleanupMessageName; // 0x7c
    char pad_84[0x4];
    static UAblHermesSendMessageToTask* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
