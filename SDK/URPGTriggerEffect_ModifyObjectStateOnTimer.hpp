#pragma once
#include <cstdint>
#include "URPGTriggerEffect_Base.hpp"
#pragma pack(push, 1)
class URPGTriggerEffect_ModifyObjectStateOnTimer : public URPGTriggerEffect_Base {
public:
    char pad_40[0x10];
    float TickRate; // 0x50
    float FirstTickDelay; // 0x54
    bool bLoop; // 0x58
    bool bModifyHealthByValue; // 0x59
    char pad_5a[0x2];
    float HealthModificationAmount; // 0x5c
    bool bModifyHealthByPercentage; // 0x60
    char pad_61[0x3];
    float HealthModificationPercentage; // 0x64
    static URPGTriggerEffect_ModifyObjectStateOnTimer* StaticClass();
    void OnTimerTick();
}; // Size: 0x68
#pragma pack(pop)
