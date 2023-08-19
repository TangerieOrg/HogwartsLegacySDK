#include "AHUD.hpp"
#include "APhoenixHUD.hpp"
#include "APlayerController.hpp"
#include "FTimerHandle.hpp"
#include "UFunction.hpp"
#include "UProgressBar.hpp"
#include "UUI_BP_AncientMagicMeter_C.hpp"
#include "UUserWidget.hpp"
UUI_BP_AncientMagicMeter_C* UUI_BP_AncientMagicMeter_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/AncientMagic/UI_BP_AncientMagicMeter.UI_BP_AncientMagicMeter_C");
    return (UUI_BP_AncientMagicMeter_C*)res;
}
void UUI_BP_AncientMagicMeter_C::SetPctDelta(APlayerController* CallFunc_GetPlayerController_ReturnValue, AHUD* CallFunc_GetHUD_ReturnValue, APhoenixHUD* K2Node_DynamicCast_AsPhoenix_HUD, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/AncientMagic/UI_BP_AncientMagicMeter.UI_BP_AncientMagicMeter_C.SetPctDelta"));
    struct Params_SetPctDelta {
        APlayerController* CallFunc_GetPlayerController_ReturnValue; // 0x0
        AHUD* CallFunc_GetHUD_ReturnValue; // 0x8
        APhoenixHUD* K2Node_DynamicCast_AsPhoenix_HUD; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
        bool CallFunc_GreaterEqual_FloatFloat_ReturnValue; // 0x19
        bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1; // 0x1a
        char pad_1b[0x1];
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x1c
    }; // Size: 0x20
    Params_SetPctDelta params{};
    params.CallFunc_GetPlayerController_ReturnValue = (APlayerController*)CallFunc_GetPlayerController_ReturnValue;
    params.CallFunc_GetHUD_ReturnValue = (AHUD*)CallFunc_GetHUD_ReturnValue;
    params.K2Node_DynamicCast_AsPhoenix_HUD = (APhoenixHUD*)K2Node_DynamicCast_AsPhoenix_HUD;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GreaterEqual_FloatFloat_ReturnValue = (bool)CallFunc_GreaterEqual_FloatFloat_ReturnValue;
    params.CallFunc_GreaterEqual_FloatFloat_ReturnValue_1 = (bool)CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_AncientMagicMeter_C::SetMagicPct(float NewPct, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/AncientMagic/UI_BP_AncientMagicMeter.UI_BP_AncientMagicMeter_C.SetMagicPct"));
    struct Params_SetMagicPct {
        float NewPct; // 0x0
        char pad_4[0x4];
        FTimerHandle CallFunc_K2_SetTimer_ReturnValue; // 0x8
        float CallFunc_Subtract_FloatFloat_ReturnValue; // 0x10
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0x14
    }; // Size: 0x18
    Params_SetMagicPct params{};
    params.NewPct = (float)NewPct;
    params.CallFunc_K2_SetTimer_ReturnValue = (FTimerHandle)CallFunc_K2_SetTimer_ReturnValue;
    params.CallFunc_Subtract_FloatFloat_ReturnValue = (float)CallFunc_Subtract_FloatFloat_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
}
