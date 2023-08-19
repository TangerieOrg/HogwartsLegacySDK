#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UHUDElementGroup.hpp"
#include "UImage.hpp"
#include "UUI_BP_AutoSave_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_AutoSave_C::ExecuteUbergraph_UI_BP_AutoSave(int32_t EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Autosave/UI_BP_AutoSave.UI_BP_AutoSave_C.ExecuteUbergraph_UI_BP_AutoSave"));
    struct Params_ExecuteUbergraph_UI_BP_AutoSave {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x8
        bool CallFunc_Not_PreBool_ReturnValue; // 0x10
    }; // Size: 0x11
    Params_ExecuteUbergraph_UI_BP_AutoSave params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_AutoSave_C::StopLoopingSave(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Autosave/UI_BP_AutoSave.UI_BP_AutoSave_C.StopLoopingSave"));
    struct Params_StopLoopingSave {
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_StopLoopingSave params{};
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
UUI_BP_AutoSave_C* UUI_BP_AutoSave_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/Autosave/UI_BP_AutoSave.UI_BP_AutoSave_C");
    return (UUI_BP_AutoSave_C*)res;
}
void UUI_BP_AutoSave_C::StartLoopingSave(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Autosave/UI_BP_AutoSave.UI_BP_AutoSave_C.StartLoopingSave"));
    struct Params_StartLoopingSave {
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_StartLoopingSave params{};
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_AutoSave_C::HideSave(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Autosave/UI_BP_AutoSave.UI_BP_AutoSave_C.HideSave"));
    struct Params_HideSave {
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_HideSave params{};
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_AutoSave_C::ShowSave(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Autosave/UI_BP_AutoSave.UI_BP_AutoSave_C.ShowSave"));
    struct Params_ShowSave {
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_ShowSave params{};
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_AutoSave_C::WidgetAnimationEvt_hideAutoSave_K2Node_WidgetAnimationEvent_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Autosave/UI_BP_AutoSave.UI_BP_AutoSave_C.WidgetAnimationEvt_hideAutoSave_K2Node_WidgetAnimationEvent_0"));
    struct Params_WidgetAnimationEvt_hideAutoSave_K2Node_WidgetAnimationEvent_0 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_hideAutoSave_K2Node_WidgetAnimationEvent_0 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_AutoSave_C::WidgetAnimationEvt_showAutoSave_K2Node_WidgetAnimationEvent_1() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Autosave/UI_BP_AutoSave.UI_BP_AutoSave_C.WidgetAnimationEvt_showAutoSave_K2Node_WidgetAnimationEvent_1"));
    struct Params_WidgetAnimationEvt_showAutoSave_K2Node_WidgetAnimationEvent_1 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_showAutoSave_K2Node_WidgetAnimationEvent_1 params{};
    ProcessEvent(func, &params);
}
