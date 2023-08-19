#include "ESlateVisibility.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateColor.hpp"
#include "UBorder.hpp"
#include "UFunction.hpp"
#include "UHorizontalBox.hpp"
#include "UI_BP_OptionStateEnum\Type.hpp"
#include "UImage.hpp"
#include "UPhoenixImage.hpp"
#include "UPhoenixRichTextBlock.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UScaleBox.hpp"
#include "UTextButtonWidget.hpp"
#include "UUI_BP_InteractButton_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_InteractButton_C* UUI_BP_InteractButton_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Interact/UI_BP_InteractButton.UI_BP_InteractButton_C");
    return (UUI_BP_InteractButton_C*)res;
}
TArray<FString> UUI_BP_InteractButton_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue) {}
void UUI_BP_InteractButton_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_InteractButton.UI_BP_InteractButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_InteractButton_C::SetTypeIcon(FString Type, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_InteractButton.UI_BP_InteractButton_C.SetTypeIcon"));
    struct Params_SetTypeIcon {
        FString Type; // 0x0
        bool CallFunc_NotEqual_StrStr_ReturnValue; // 0x10
        bool CallFunc_NotEqual_StrStr_ReturnValue_1; // 0x11
        bool CallFunc_BooleanOR_ReturnValue; // 0x12
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue; // 0x13
    }; // Size: 0x14
    Params_SetTypeIcon params{};
    params.Type = (FString)Type;
    params.CallFunc_NotEqual_StrStr_ReturnValue = (bool)CallFunc_NotEqual_StrStr_ReturnValue;
    params.CallFunc_NotEqual_StrStr_ReturnValue_1 = (bool)CallFunc_NotEqual_StrStr_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_InteractButton_C::SetDisabledText(FString Reason, bool CallFunc_NotEqual_StrStr_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_InteractButton.UI_BP_InteractButton_C.SetDisabledText"));
    struct Params_SetDisabledText {
        FString Reason; // 0x0
        bool CallFunc_NotEqual_StrStr_ReturnValue; // 0x10
    }; // Size: 0x11
    Params_SetDisabledText params{};
    params.Reason = (FString)Reason;
    params.CallFunc_NotEqual_StrStr_ReturnValue = (bool)CallFunc_NotEqual_StrStr_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_InteractButton_C::SetOptionState(UI_BP_OptionStateEnum::Type NewState, FLinearColor tempOptionColor, bool Temp_bool_Variable, bool K2Node_SwitchEnum_CmpSuccess, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_InteractButton.UI_BP_InteractButton_C.SetOptionState"));
    struct Params_SetOptionState {
        UI_BP_OptionStateEnum::Type NewState; // 0x0
        char pad_1[0x3];
        FLinearColor tempOptionColor; // 0x4
        bool Temp_bool_Variable; // 0x14
        bool K2Node_SwitchEnum_CmpSuccess; // 0x15
        ESlateVisibility Temp_byte_Variable; // 0x16
        ESlateVisibility Temp_byte_Variable_1; // 0x17
        ESlateVisibility K2Node_Select_Default; // 0x18
    }; // Size: 0x19
    Params_SetOptionState params{};
    params.NewState = (UI_BP_OptionStateEnum::Type)NewState;
    params.tempOptionColor = (FLinearColor)tempOptionColor;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    ProcessEvent(func, &params);
}
void UUI_BP_InteractButton_C::ToggleActive(bool IsActive, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_InteractButton.UI_BP_InteractButton_C.ToggleActive"));
    struct Params_ToggleActive {
        bool IsActive; // 0x0
        char pad_1[0x7];
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x8
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_ToggleActive params{};
    params.IsActive = (bool)IsActive;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_InteractButton_C::ScaleButton(bool IsHoveredOver) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_InteractButton.UI_BP_InteractButton_C.ScaleButton"));
    struct Params_ScaleButton {
        bool IsHoveredOver; // 0x0
    }; // Size: 0x1
    Params_ScaleButton params{};
    params.IsHoveredOver = (bool)IsHoveredOver;
    ProcessEvent(func, &params);
}
void UUI_BP_InteractButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_InteractButton.UI_BP_InteractButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__Button_0_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__Button_0_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_InteractButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_InteractButton.UI_BP_InteractButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__Button_0_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__Button_0_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_InteractButton_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_InteractButton.UI_BP_InteractButton_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_InteractButton_C::ExecuteUbergraph_UI_BP_InteractButton(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_InteractButton.UI_BP_InteractButton_C.ExecuteUbergraph_UI_BP_InteractButton"));
    struct Params_ExecuteUbergraph_UI_BP_InteractButton {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_UI_BP_InteractButton params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
void UUI_BP_InteractButton_C::OnButtonUnhoverDispatcher__DelegateSignature(UUI_BP_InteractButton_C* TextButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_InteractButton.UI_BP_InteractButton_C.OnButtonUnhoverDispatcher__DelegateSignature"));
    struct Params_OnButtonUnhoverDispatcher__DelegateSignature {
        UUI_BP_InteractButton_C* TextButton; // 0x0
    }; // Size: 0x8
    Params_OnButtonUnhoverDispatcher__DelegateSignature params{};
    params.TextButton = (UUI_BP_InteractButton_C*)TextButton;
    ProcessEvent(func, &params);
}
void UUI_BP_InteractButton_C::OnButtonHoverDispatcher__DelegateSignature(UUI_BP_InteractButton_C* TextButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_InteractButton.UI_BP_InteractButton_C.OnButtonHoverDispatcher__DelegateSignature"));
    struct Params_OnButtonHoverDispatcher__DelegateSignature {
        UUI_BP_InteractButton_C* TextButton; // 0x0
    }; // Size: 0x8
    Params_OnButtonHoverDispatcher__DelegateSignature params{};
    params.TextButton = (UUI_BP_InteractButton_C*)TextButton;
    ProcessEvent(func, &params);
}
void UUI_BP_InteractButton_C::OnClickEventDispatcher__DelegateSignature(UUI_BP_InteractButton_C* TextButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_InteractButton.UI_BP_InteractButton_C.OnClickEventDispatcher__DelegateSignature"));
    struct Params_OnClickEventDispatcher__DelegateSignature {
        UUI_BP_InteractButton_C* TextButton; // 0x0
    }; // Size: 0x8
    Params_OnClickEventDispatcher__DelegateSignature params{};
    params.TextButton = (UUI_BP_InteractButton_C*)TextButton;
    ProcessEvent(func, &params);
}
