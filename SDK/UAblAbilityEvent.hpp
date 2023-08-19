#pragma once
#include <cstdint>
#include "FRelativeTime.hpp"
#include "UAblAbilityNode.hpp"
#pragma pack(push, 1)
class UAblAbilityEvent : public UAblAbilityNode {
public:
    FRelativeTime m_StartTime; // 0x28
    FName m_EventName; // 0x40
    bool m_Verbose; // 0x48
    bool m_IsDone; // 0x49
    char pad_4a[0x6];
    static UAblAbilityEvent* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
