#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UObject.hpp"
#include "UUI_BP_LoadDoor_C.hpp"
#include "UUserWidget.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_LoadDoor_C::ShowHUD(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/LoadDoor/UI_BP_LoadDoor.UI_BP_LoadDoor_C.ShowHUD"));
    struct Params_ShowHUD {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_ShowHUD params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
UUI_BP_LoadDoor_C* UUI_BP_LoadDoor_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/LoadDoor/UI_BP_LoadDoor.UI_BP_LoadDoor_C");
    return (UUI_BP_LoadDoor_C*)res;
}
void UUI_BP_LoadDoor_C::OnDoorLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/LoadDoor/UI_BP_LoadDoor.UI_BP_LoadDoor_C.OnDoorLoaded"));
    struct Params_OnDoorLoaded {
    }; // Size: 0x0
    Params_OnDoorLoaded params{};
    ProcessEvent(func, &params);
}
float UUI_BP_LoadDoor_C::LoadingComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/LoadDoor/UI_BP_LoadDoor.UI_BP_LoadDoor_C.LoadingComplete"));
    struct Params_LoadingComplete {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_LoadingComplete params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UUI_BP_LoadDoor_C::SequenceEvent_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/LoadDoor/UI_BP_LoadDoor.UI_BP_LoadDoor_C.SequenceEvent_0"));
    struct Params_SequenceEvent_0 {
    }; // Size: 0x0
    Params_SequenceEvent_0 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_LoadDoor_C::ExecuteUbergraph_UI_BP_LoadDoor(int32_t EntryPoint) {}
void UUI_BP_LoadDoor_C::Construct0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/LoadDoor/UI_BP_LoadDoor.UI_BP_LoadDoor_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_LoadDoor_C::HideHUD(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/LoadDoor/UI_BP_LoadDoor.UI_BP_LoadDoor_C.HideHUD"));
    struct Params_HideHUD {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_HideHUD params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
