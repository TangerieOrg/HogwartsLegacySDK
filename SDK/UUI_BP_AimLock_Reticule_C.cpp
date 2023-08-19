#include "ESlateVisibility.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UCanvasPanel.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UUI_BP_AimLock_Reticule_C.hpp"
#include "UUserWidget_LockOnReticle.hpp"
void UUI_BP_AimLock_Reticule_C::ExecuteUbergraph_UI_BP_AimLock_Reticule(int32_t EntryPoint, ESlateVisibility K2Node_Event_InVisibility_1, ESlateVisibility K2Node_Event_InVisibility, float K2Node_Event_InScale) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_AimLock_Reticule.UI_BP_AimLock_Reticule_C.ExecuteUbergraph_UI_BP_AimLock_Reticule"));
    struct Params_ExecuteUbergraph_UI_BP_AimLock_Reticule {
        int32_t EntryPoint; // 0x0
        ESlateVisibility K2Node_Event_InVisibility_1; // 0x4
        ESlateVisibility K2Node_Event_InVisibility; // 0x5
        char pad_6[0x2];
        float K2Node_Event_InScale; // 0x8
    }; // Size: 0xc
    Params_ExecuteUbergraph_UI_BP_AimLock_Reticule params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_InVisibility_1 = (ESlateVisibility)K2Node_Event_InVisibility_1;
    params.K2Node_Event_InVisibility = (ESlateVisibility)K2Node_Event_InVisibility;
    params.K2Node_Event_InScale = (float)K2Node_Event_InScale;
    ProcessEvent(func, &params);
}
UUI_BP_AimLock_Reticule_C* UUI_BP_AimLock_Reticule_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/Reticles/UI_BP_AimLock_Reticule.UI_BP_AimLock_Reticule_C");
    return (UUI_BP_AimLock_Reticule_C*)res;
}
void UUI_BP_AimLock_Reticule_C::SetAimModeVisibility0(ESlateVisibility InVisibility) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_AimLock_Reticule.UI_BP_AimLock_Reticule_C.SetAimModeVisibility"));
    struct Params_SetAimModeVisibility {
        ESlateVisibility InVisibility; // 0x0
    }; // Size: 0x1
    Params_SetAimModeVisibility params{};
    params.InVisibility = (ESlateVisibility)InVisibility;
    ProcessEvent(func, &params);
}
void UUI_BP_AimLock_Reticule_C::SetLockOnVisibility0(ESlateVisibility InVisibility) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_AimLock_Reticule.UI_BP_AimLock_Reticule_C.SetLockOnVisibility"));
    struct Params_SetLockOnVisibility {
        ESlateVisibility InVisibility; // 0x0
    }; // Size: 0x1
    Params_SetLockOnVisibility params{};
    params.InVisibility = (ESlateVisibility)InVisibility;
    ProcessEvent(func, &params);
}
void UUI_BP_AimLock_Reticule_C::SetAimModeCircleScale0(float InScale) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_AimLock_Reticule.UI_BP_AimLock_Reticule_C.SetAimModeCircleScale"));
    struct Params_SetAimModeCircleScale {
        float InScale; // 0x0
    }; // Size: 0x4
    Params_SetAimModeCircleScale params{};
    params.InScale = (float)InScale;
    ProcessEvent(func, &params);
}
