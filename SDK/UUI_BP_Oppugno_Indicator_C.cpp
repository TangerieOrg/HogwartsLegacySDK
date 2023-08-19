#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPhoenixRichTextBlock.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_Oppugno_Indicator_C.hpp"
#include "UUserWidget_LockOnReticle.hpp"
void UUI_BP_Oppugno_Indicator_C::ExecuteUbergraph_UI_BP_Oppugno_Indicator(int32_t EntryPoint, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, bool CallFunc_GetShouldShowButtonGraphics_ReturnValue) {}
UUI_BP_Oppugno_Indicator_C* UUI_BP_Oppugno_Indicator_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/Reticles/UI_BP_Oppugno_Indicator.UI_BP_Oppugno_Indicator_C");
    return (UUI_BP_Oppugno_Indicator_C*)res;
}
void UUI_BP_Oppugno_Indicator_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Oppugno_Indicator.UI_BP_Oppugno_Indicator_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Oppugno_Indicator_C::ShowButtonGraphicsFlagChanged(UObject* Caller, int32_t int) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Oppugno_Indicator.UI_BP_Oppugno_Indicator_C.ShowButtonGraphicsFlagChanged"));
    struct Params_ShowButtonGraphicsFlagChanged {
        UObject* Caller; // 0x0
        int32_t int; // 0x8
    }; // Size: 0xc
    Params_ShowButtonGraphicsFlagChanged params{};
    params.Caller = (UObject*)Caller;
    params.int = (int32_t)int;
    ProcessEvent(func, &params);
}
