#pragma once
#include <cstdint>
#include "EAblAbilityTaskRealm.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblCustomEventTask : public UAblAbilityTask {
public:
    FName m_EventName; // 0x70
    EAblAbilityTaskRealm m_TaskRealm; // 0x78
    bool bNotifyOtherAbilitiesOnChannel; // 0x79
    char pad_7a[0x6];
    static UAblCustomEventTask* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
