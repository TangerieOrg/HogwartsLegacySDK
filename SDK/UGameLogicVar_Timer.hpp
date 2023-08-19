#pragma once
#include <cstdint>
#include "UGameLogicBoolBase.hpp"
#pragma pack(push, 1)
class UGameLogicVar_Timer : public UGameLogicBoolBase {
public:
    char pad_40[0x20];
    static UGameLogicVar_Timer* StaticClass();
    void TimerExpired();
    void SetTimerValue(float Value);
    void SetTimerPause(bool bInPaused);
    void SetCachedValue(bool bValue);
    bool IsTimerPaused();
    float GetTimerValue();
}; // Size: 0x60
#pragma pack(pop)
