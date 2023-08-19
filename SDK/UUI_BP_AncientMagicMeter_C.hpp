#pragma once
#include <cstdint>
#include "FTimerHandle.hpp"
#include "UUserWidget.hpp"
class UProgressBar;
class APlayerController;
class APhoenixHUD;
class AHUD;
#pragma pack(push, 1)
class UUI_BP_AncientMagicMeter_C : public UUserWidget {
public:
    UProgressBar* AncientMagicProgressBar; // 0x268
    float DeltaPct; // 0x270
    float TargetFillPct; // 0x274
    FTimerHandle FillTimerHandle; // 0x278
    static UUI_BP_AncientMagicMeter_C* StaticClass();
    void SetPctDelta(APlayerController* CallFunc_GetPlayerController_ReturnValue, AHUD* CallFunc_GetHUD_ReturnValue, APhoenixHUD* K2Node_DynamicCast_AsPhoenix_HUD, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue);
    void SetMagicPct(float NewPct, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
}; // Size: 0x280
#pragma pack(pop)
