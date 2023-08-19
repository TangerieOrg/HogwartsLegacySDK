#pragma once
#include <cstdint>
#include "FCombatParryInfo.hpp"
#include "UPhoenixUserWidget.hpp"
class UCombatParryButtonCallout;
class UObject;
#pragma pack(push, 1)
class UCombatParryWidget : public UPhoenixUserWidget {
public:
    UCombatParryButtonCallout* CombatParryButtonCallout0; // 0x328
    UCombatParryButtonCallout* CombatParryButtonCallout1; // 0x330
    UCombatParryButtonCallout* CombatParryButtonCallout2; // 0x338
    UCombatParryButtonCallout* CombatParryButtonCalloutForOutro; // 0x340
    TArray<FCombatParryInfo> CombatParryInfos; // 0x348
    TArray<UCombatParryButtonCallout*> CombatParryButtonCallouts; // 0x358
    static UCombatParryWidget* StaticClass();
    void CombatParryInfoTimerFinished(UObject* Caller, int32_t WindowID, int32_t ParryType);
}; // Size: 0x368
#pragma pack(pop)
