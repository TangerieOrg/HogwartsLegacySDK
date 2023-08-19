#include "ESlateVisibility.hpp"
#include "EUMGSequencePlayMode\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UCanvasPanel.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UNoMountHUDBase.hpp"
#include "UUI_BP_NoDismount_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_NoDismount_C::ExecuteUbergraph_UI_BP_NoDismount(int32_t EntryPoint, bool K2Node_CustomEvent_CanDismount, bool K2Node_CustomEvent_CanFly, bool Temp_bool_Variable, EUMGSequencePlayMode::Type Temp_byte_Variable, EUMGSequencePlayMode::Type Temp_byte_Variable_1, bool K2Node_Event_Show, EUMGSequencePlayMode::Type K2Node_Select_Default, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_NoDismount.UI_BP_NoDismount_C.ExecuteUbergraph_UI_BP_NoDismount"));
    struct Params_ExecuteUbergraph_UI_BP_NoDismount {
        int32_t EntryPoint; // 0x0
        bool K2Node_CustomEvent_CanDismount; // 0x4
        bool K2Node_CustomEvent_CanFly; // 0x5
        bool Temp_bool_Variable; // 0x6
        EUMGSequencePlayMode::Type Temp_byte_Variable; // 0x7
        EUMGSequencePlayMode::Type Temp_byte_Variable_1; // 0x8
        bool K2Node_Event_Show; // 0x9
        EUMGSequencePlayMode::Type K2Node_Select_Default; // 0xa
        char pad_b[0x5];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_ExecuteUbergraph_UI_BP_NoDismount params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_CustomEvent_CanDismount = (bool)K2Node_CustomEvent_CanDismount;
    params.K2Node_CustomEvent_CanFly = (bool)K2Node_CustomEvent_CanFly;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_byte_Variable = (EUMGSequencePlayMode::Type)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (EUMGSequencePlayMode::Type)Temp_byte_Variable_1;
    params.K2Node_Event_Show = (bool)K2Node_Event_Show;
    params.K2Node_Select_Default = (EUMGSequencePlayMode::Type)K2Node_Select_Default;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
UUI_BP_NoDismount_C* UUI_BP_NoDismount_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/UI_BP_NoDismount.UI_BP_NoDismount_C");
    return (UUI_BP_NoDismount_C*)res;
}
void UUI_BP_NoDismount_C::WidgetAnimationEvt_Fade_K2Node_WidgetAnimationEvent_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_NoDismount.UI_BP_NoDismount_C.WidgetAnimationEvt_Fade_K2Node_WidgetAnimationEvent_0"));
    struct Params_WidgetAnimationEvt_Fade_K2Node_WidgetAnimationEvent_0 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_Fade_K2Node_WidgetAnimationEvent_0 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_NoDismount_C::GetIcon() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_NoDismount.UI_BP_NoDismount_C.GetIcon"));
    struct Params_GetIcon {
    }; // Size: 0x0
    Params_GetIcon params{};
    ProcessEvent(func, &params);
}
void UUI_BP_NoDismount_C::SetIconVisible(bool CanDismount, bool CanFly, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_NoDismount.UI_BP_NoDismount_C.SetIconVisible"));
    struct Params_SetIconVisible {
        bool CanDismount; // 0x0
        bool CanFly; // 0x1
        ESlateVisibility Temp_byte_Variable; // 0x2
        ESlateVisibility Temp_byte_Variable_1; // 0x3
        bool Temp_bool_Variable; // 0x4
        ESlateVisibility Temp_byte_Variable_2; // 0x5
        ESlateVisibility Temp_byte_Variable_3; // 0x6
        bool Temp_bool_Variable_1; // 0x7
        ESlateVisibility K2Node_Select_Default; // 0x8
        ESlateVisibility K2Node_Select_Default_1; // 0x9
    }; // Size: 0xa
    Params_SetIconVisible params{};
    params.CanDismount = (bool)CanDismount;
    params.CanFly = (bool)CanFly;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_byte_Variable_2 = (ESlateVisibility)Temp_byte_Variable_2;
    params.Temp_byte_Variable_3 = (ESlateVisibility)Temp_byte_Variable_3;
    params.Temp_bool_Variable_1 = (bool)Temp_bool_Variable_1;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    params.K2Node_Select_Default_1 = (ESlateVisibility)K2Node_Select_Default_1;
    ProcessEvent(func, &params);
}
void UUI_BP_NoDismount_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_NoDismount.UI_BP_NoDismount_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_NoDismount_C::OnUseStateChanged(bool Show) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_NoDismount.UI_BP_NoDismount_C.OnUseStateChanged"));
    struct Params_OnUseStateChanged {
        bool Show; // 0x0
    }; // Size: 0x1
    Params_OnUseStateChanged params{};
    params.Show = (bool)Show;
    ProcessEvent(func, &params);
}
void UUI_BP_NoDismount_C::HideNoDismount(bool CanDismount, bool CanFly) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_NoDismount.UI_BP_NoDismount_C.HideNoDismount"));
    struct Params_HideNoDismount {
        bool CanDismount; // 0x0
        bool CanFly; // 0x1
    }; // Size: 0x2
    Params_HideNoDismount params{};
    params.CanDismount = (bool)CanDismount;
    params.CanFly = (bool)CanFly;
    ProcessEvent(func, &params);
}
