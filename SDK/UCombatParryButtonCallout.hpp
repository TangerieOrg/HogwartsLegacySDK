#pragma once
#include <cstdint>
#include "ECombatParryType.hpp"
#include "UPhoenixUserWidget.hpp"
#pragma pack(push, 1)
class UCombatParryButtonCallout : public UPhoenixUserWidget {
public:
    ECombatParryType CombatParryType; // 0x328
    bool bInPerfectTimingWindow; // 0x329
    char pad_32a[0x2];
    float ExpectedLifetime; // 0x32c
    static UCombatParryButtonCallout* StaticClass();
    void SetPerfectTimingState(bool bPerfectTiming);
    void SetParryType(ECombatParryType ParryType);
    void SetExpectedLifetime(float LifeTime);
    void OnInputDeviceChanged();
    void BlueprintSetPerfectTimingState(bool bPerfectTiming);
    void BlueprintSetParryType(ECombatParryType ParryType);
}; // Size: 0x330
#pragma pack(pop)
