#pragma once
#include <cstdint>
#include "FTimerHandle.hpp"
#include "UHUDElementGroup.hpp"
class UUI_BP_AncientMagicMeter_C;
#pragma pack(push, 1)
class UUI_BP_AncientMagicCollectionHUD_C : public UHUDElementGroup {
public:
    UUI_BP_AncientMagicMeter_C* AncientMagicMeter; // 0x2e8
    float FillPct; // 0x2f0
    char pad_2f4[0x4];
    static UUI_BP_AncientMagicCollectionHUD_C* StaticClass();
    void HideAncientMagicMeter(bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
    void UpdateAncientMagic(float pct, float CallFunc_Add_FloatFloat_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue);
}; // Size: 0x2f8
#pragma pack(pop)
