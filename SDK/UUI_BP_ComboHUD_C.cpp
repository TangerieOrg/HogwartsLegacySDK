#include "AActor.hpp"
#include "ABiped_Player.hpp"
#include "ESlateVisibility.hpp"
#include "FGeometry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UComboHUD_Base.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UUI_BP_ComboHUD_C.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_ComboHUD_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ComboHUD/UI_BP_ComboHUD.UI_BP_ComboHUD_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
UUI_BP_ComboHUD_C* UUI_BP_ComboHUD_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/ComboHUD/UI_BP_ComboHUD.UI_BP_ComboHUD_C");
    return (UUI_BP_ComboHUD_C*)res;
}
void UUI_BP_ComboHUD_C::ExecuteUbergraph_UI_BP_ComboHUD(int32_t EntryPoint, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue) {}
void UUI_BP_ComboHUD_C::Tick(FGeometry MyGeometry, float InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ComboHUD/UI_BP_ComboHUD.UI_BP_ComboHUD_C.Tick"));
    struct Params_Tick {
        FGeometry MyGeometry; // 0x0
        float InDeltaTime; // 0x38
    }; // Size: 0x3c
    Params_Tick params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InDeltaTime = (float)InDeltaTime;
    ProcessEvent(func, &params);
}
void UUI_BP_ComboHUD_C::UpdateComboCount(UObject* Caller, int32_t int) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ComboHUD/UI_BP_ComboHUD.UI_BP_ComboHUD_C.UpdateComboCount"));
    struct Params_UpdateComboCount {
        UObject* Caller; // 0x0
        int32_t int; // 0x8
    }; // Size: 0xc
    Params_UpdateComboCount params{};
    params.Caller = (UObject*)Caller;
    params.int = (int32_t)int;
    ProcessEvent(func, &params);
}
void UUI_BP_ComboHUD_C::OnFocusChanged(AActor* Target, float InFocusChange) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ComboHUD/UI_BP_ComboHUD.UI_BP_ComboHUD_C.OnFocusChanged"));
    struct Params_OnFocusChanged {
        AActor* Target; // 0x0
        float InFocusChange; // 0x8
    }; // Size: 0xc
    Params_OnFocusChanged params{};
    params.Target = (AActor*)Target;
    params.InFocusChange = (float)InFocusChange;
    ProcessEvent(func, &params);
}
void UUI_BP_ComboHUD_C::VisibilityChanged(ESlateVisibility NewVisibility, bool CallFunc_EqualEqual_ByteByte_ReturnValue) {}
void UUI_BP_ComboHUD_C::UpdateFocusMultiplier(int32_t Points, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, float CallFunc_GetComboPoints_ReturnValue, int32_t CallFunc_FTrunc_ReturnValue) {}
