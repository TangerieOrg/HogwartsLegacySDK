#include "FTimerHandle.hpp"
#include "UFunction.hpp"
#include "UHUDElementGroup.hpp"
#include "UUI_BP_AncientMagicCollectionHUD_C.hpp"
#include "UUI_BP_AncientMagicMeter_C.hpp"
UUI_BP_AncientMagicCollectionHUD_C* UUI_BP_AncientMagicCollectionHUD_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/AncientMagic/UI_BP_AncientMagicCollectionHUD.UI_BP_AncientMagicCollectionHUD_C");
    return (UUI_BP_AncientMagicCollectionHUD_C*)res;
}
void UUI_BP_AncientMagicCollectionHUD_C::HideAncientMagicMeter(bool CallFunc_GreaterEqual_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/AncientMagic/UI_BP_AncientMagicCollectionHUD.UI_BP_AncientMagicCollectionHUD_C.HideAncientMagicMeter"));
    struct Params_HideAncientMagicMeter {
        bool CallFunc_GreaterEqual_FloatFloat_ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HideAncientMagicMeter params{};
    params.CallFunc_GreaterEqual_FloatFloat_ReturnValue = (bool)CallFunc_GreaterEqual_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_AncientMagicCollectionHUD_C::UpdateAncientMagic(float pct, float CallFunc_Add_FloatFloat_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/AncientMagic/UI_BP_AncientMagicCollectionHUD.UI_BP_AncientMagicCollectionHUD_C.UpdateAncientMagic"));
    struct Params_UpdateAncientMagic {
        float pct; // 0x0
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x4
        FTimerHandle CallFunc_K2_SetTimer_ReturnValue; // 0x8
    }; // Size: 0x10
    Params_UpdateAncientMagic params{};
    params.pct = (float)pct;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.CallFunc_K2_SetTimer_ReturnValue = (FTimerHandle)CallFunc_K2_SetTimer_ReturnValue;
    ProcessEvent(func, &params);
}
