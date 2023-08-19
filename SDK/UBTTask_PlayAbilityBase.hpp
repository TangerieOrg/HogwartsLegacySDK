#pragma once
#include <cstdint>
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTTask_PlayAbilityBase : public UBTTaskNode {
public:
    FName AbilityChannelName; // 0x70
    bool MarkAsInProgressDuringExecution; // 0x78
    bool bWaitForHermesMessage; // 0x79
    char pad_7a[0x2];
    FName MessageName; // 0x7c
    char pad_84[0x3c];
    static UBTTask_PlayAbilityBase* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
