#pragma once
#include <cstdint>
#include "FExperienceChange.hpp"
#include "UHUDElementGroup.hpp"
#pragma pack(push, 1)
class UXPMeterBase : public UHUDElementGroup {
public:
    bool ActiveNotificationStackable; // 0x2e8
    char pad_2e9[0x7];
    TArray<FExperienceChange> NotificationData; // 0x2f0
    float MaxFillTime; // 0x300
    float CurrentFillTime; // 0x304
    bool IsFilling; // 0x308
    char pad_309[0x7];
    static UXPMeterBase* StaticClass();
    bool TryStackNotification(FExperienceChange XPChangeData);
    void StartAddingXP(float FillDuration, float StartTime);
    void RemoveFromNotificationQueue();
    void OnXPFillWrap();
    void OnXPAdded(float FillPct);
    void OnStartAddingXP();
    void OnFinishAddingXP();
    void AddXP();
}; // Size: 0x310
#pragma pack(pop)
