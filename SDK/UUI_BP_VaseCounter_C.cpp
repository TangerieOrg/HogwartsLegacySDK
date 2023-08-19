#include "FPointerToUberGraphFrame.hpp"
#include "UBorder.hpp"
#include "UFunction.hpp"
#include "UHUDElementGroup.hpp"
#include "UImage.hpp"
#include "UObject.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UUI_BP_VaseCounter_C.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_VaseCounter_C* UUI_BP_VaseCounter_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/Challenges/UI_BP_VaseCounter.UI_BP_VaseCounter_C");
    return (UUI_BP_VaseCounter_C*)res;
}
void UUI_BP_VaseCounter_C::ShowVaseCounterNoIcon(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Challenges/UI_BP_VaseCounter.UI_BP_VaseCounter_C.ShowVaseCounterNoIcon"));
    struct Params_ShowVaseCounterNoIcon {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_ShowVaseCounterNoIcon params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_VaseCounter_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Challenges/UI_BP_VaseCounter.UI_BP_VaseCounter_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_VaseCounter_C::VaseBroken(UObject* Caller, int32_t Int1, int32_t Int2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Challenges/UI_BP_VaseCounter.UI_BP_VaseCounter_C.VaseBroken"));
    struct Params_VaseBroken {
        UObject* Caller; // 0x0
        int32_t Int1; // 0x8
        int32_t Int2; // 0xc
    }; // Size: 0x10
    Params_VaseBroken params{};
    params.Caller = (UObject*)Caller;
    params.Int1 = (int32_t)Int1;
    params.Int2 = (int32_t)Int2;
    ProcessEvent(func, &params);
}
void UUI_BP_VaseCounter_C::ExecuteUbergraph_UI_BP_VaseCounter(int32_t EntryPoint) {}
void UUI_BP_VaseCounter_C::ShowVaseCounter(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Challenges/UI_BP_VaseCounter.UI_BP_VaseCounter_C.ShowVaseCounter"));
    struct Params_ShowVaseCounter {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_ShowVaseCounter params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_VaseCounter_C::HideVaseCounter(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Challenges/UI_BP_VaseCounter.UI_BP_VaseCounter_C.HideVaseCounter"));
    struct Params_HideVaseCounter {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_HideVaseCounter params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
