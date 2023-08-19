#include "ETextJustify\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UButton.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UUI_BP_MenuFinalized_C.hpp"
#include "UUI_BP_MenuTextButton_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
TArray<FString> UUI_BP_MenuFinalized_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue) {}
UUI_BP_MenuFinalized_C* UUI_BP_MenuFinalized_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/UI_BP_MenuFinalized.UI_BP_MenuFinalized_C");
    return (UUI_BP_MenuFinalized_C*)res;
}
void UUI_BP_MenuFinalized_C::PlayFinalizedAnim(bool& NewParam, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_MenuFinalized.UI_BP_MenuFinalized_C.PlayFinalizedAnim"));
    struct Params_PlayFinalizedAnim {
        bool NewParam; // 0x0
        char pad_1[0x7];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x8
    }; // Size: 0x10
    Params_PlayFinalizedAnim params{};
    params.NewParam = (bool)NewParam;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
    NewParam = params.NewParam;
}
void UUI_BP_MenuFinalized_C::SetActivate(bool Activate, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_MenuFinalized.UI_BP_MenuFinalized_C.SetActivate"));
    struct Params_SetActivate {
        bool Activate; // 0x0
        char pad_1[0x7];
        UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue; // 0x8
        bool CallFunc_NotEqual_BoolBool_ReturnValue; // 0x10
        char pad_11[0x7];
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x18
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x20
    }; // Size: 0x28
    Params_SetActivate params{};
    params.Activate = (bool)Activate;
    params.CallFunc_GetDynamicMaterial_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_GetDynamicMaterial_ReturnValue;
    params.CallFunc_NotEqual_BoolBool_ReturnValue = (bool)CallFunc_NotEqual_BoolBool_ReturnValue;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_MenuFinalized_C::HandleUnhovered(UUI_BP_MenuTextButton_C* Button, bool JustChangeHighjlight, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_MenuFinalized.UI_BP_MenuFinalized_C.HandleUnhovered"));
    struct Params_HandleUnhovered {
        UUI_BP_MenuTextButton_C* Button; // 0x0
        bool JustChangeHighjlight; // 0x8
        char pad_9[0x7];
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_HandleUnhovered params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    params.JustChangeHighjlight = (bool)JustChangeHighjlight;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_MenuFinalized_C::HandleHovered(UUI_BP_MenuTextButton_C* Button, bool JustChangeHighlight, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_MenuFinalized.UI_BP_MenuFinalized_C.HandleHovered"));
    struct Params_HandleHovered {
        UUI_BP_MenuTextButton_C* Button; // 0x0
        bool JustChangeHighlight; // 0x8
        char pad_9[0x7];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x10
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_HandleHovered params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    params.JustChangeHighlight = (bool)JustChangeHighlight;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_MenuFinalized_C::SetButtonState(bool IsSelected, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_MenuFinalized.UI_BP_MenuFinalized_C.SetButtonState"));
    struct Params_SetButtonState {
        bool IsSelected; // 0x0
        char pad_1[0x7];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x8
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1; // 0x10
    }; // Size: 0x18
    Params_SetButtonState params{};
    params.IsSelected = (bool)IsSelected;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue_1 = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_MenuFinalized_C::Hovered(bool CurrentlyHovered, bool CallFunc_BooleanAND_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_MenuFinalized.UI_BP_MenuFinalized_C.Hovered"));
    struct Params_Hovered {
        bool CurrentlyHovered; // 0x0
        bool CallFunc_BooleanAND_ReturnValue; // 0x1
    }; // Size: 0x2
    Params_Hovered params{};
    params.CurrentlyHovered = (bool)CurrentlyHovered;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_MenuFinalized_C::SetButtonText(FString ButtonText) {}
void UUI_BP_MenuFinalized_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_MenuFinalized.UI_BP_MenuFinalized_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_MenuFinalized_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_MenuFinalized.UI_BP_MenuFinalized_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MenuFinalized_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_MenuFinalized.UI_BP_MenuFinalized_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MenuFinalized_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_MenuFinalized.UI_BP_MenuFinalized_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MenuFinalized_C::ExecuteUbergraph_UI_BP_MenuFinalized(int32_t EntryPoint, bool K2Node_Event_IsDesignTime, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_MenuFinalized.UI_BP_MenuFinalized_C.ExecuteUbergraph_UI_BP_MenuFinalized"));
    struct Params_ExecuteUbergraph_UI_BP_MenuFinalized {
        int32_t EntryPoint; // 0x0
        bool K2Node_Event_IsDesignTime; // 0x4
        char pad_5[0x3];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x8
        int32_t CallFunc_PostEventAtLocation_ReturnValue_1; // 0xc
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x10
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x18
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1; // 0x20
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1; // 0x28
    }; // Size: 0x30
    Params_ExecuteUbergraph_UI_BP_MenuFinalized params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue_1 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_1;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_PlayAnimationReverse_ReturnValue_1 = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue_1;
    params.CallFunc_PlayAnimationForward_ReturnValue_1 = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_MenuFinalized_C::MenuTextButtonUnhovered__DelegateSignature(UUI_BP_MenuFinalized_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_MenuFinalized.UI_BP_MenuFinalized_C.MenuTextButtonUnhovered__DelegateSignature"));
    struct Params_MenuTextButtonUnhovered__DelegateSignature {
        UUI_BP_MenuFinalized_C* Button; // 0x0
    }; // Size: 0x8
    Params_MenuTextButtonUnhovered__DelegateSignature params{};
    params.Button = (UUI_BP_MenuFinalized_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_MenuFinalized_C::MenuTextButtonHovered__DelegateSignature(UUI_BP_MenuFinalized_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_MenuFinalized.UI_BP_MenuFinalized_C.MenuTextButtonHovered__DelegateSignature"));
    struct Params_MenuTextButtonHovered__DelegateSignature {
        UUI_BP_MenuFinalized_C* Button; // 0x0
    }; // Size: 0x8
    Params_MenuTextButtonHovered__DelegateSignature params{};
    params.Button = (UUI_BP_MenuFinalized_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_MenuFinalized_C::MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuFinalized_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_MenuFinalized.UI_BP_MenuFinalized_C.MenuTextButtonClicked__DelegateSignature"));
    struct Params_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_MenuFinalized_C* Button; // 0x0
    }; // Size: 0x8
    Params_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_MenuFinalized_C*)Button;
    ProcessEvent(func, &params);
}
