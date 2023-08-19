#include "EGamepadTextInputResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UButton.hpp"
#include "UEditableTextBox.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UUI_BP_InputButton_C.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_InputButton_C* UUI_BP_InputButton_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Common/Buttons/UI_BP_InputButton.UI_BP_InputButton_C");
    return (UUI_BP_InputButton_C*)res;
}
TArray<FString> UUI_BP_InputButton_C::GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue) {}
void UUI_BP_InputButton_C::Pre_Filter_Input() {}
void UUI_BP_InputButton_C::SetInputHint() {}
void UUI_BP_InputButton_C::SetInitialText() {}
void UUI_BP_InputButton_C::GetInputText() {}
void UUI_BP_InputButton_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_InputButton.UI_BP_InputButton_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_InputButton_C::BndEvt__inputButton_K2Node_ComponentBoundEvent_40_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_InputButton.UI_BP_InputButton_C.BndEvt__inputButton_K2Node_ComponentBoundEvent_40_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__inputButton_K2Node_ComponentBoundEvent_40_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__inputButton_K2Node_ComponentBoundEvent_40_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_InputButton_C::BndEvt__inputButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_InputButton.UI_BP_InputButton_C.BndEvt__inputButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__inputButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__inputButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_InputButton_C::BndEvt__inputButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_InputButton.UI_BP_InputButton_C.BndEvt__inputButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__inputButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__inputButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_InputButton_C::BndEvt__inputText_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature() {}
void UUI_BP_InputButton_C::BndEvt__inputText_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature() {}
void UUI_BP_InputButton_C::FloatingKeyboardClosed(EGamepadTextInputResult InputResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_InputButton.UI_BP_InputButton_C.FloatingKeyboardClosed"));
    struct Params_FloatingKeyboardClosed {
        EGamepadTextInputResult InputResult; // 0x0
    }; // Size: 0x1
    Params_FloatingKeyboardClosed params{};
    params.InputResult = (EGamepadTextInputResult)InputResult;
    ProcessEvent(func, &params);
}
void UUI_BP_InputButton_C::ExecuteUbergraph_UI_BP_InputButton(int32_t EntryPoint, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1) {}
void UUI_BP_InputButton_C::OnTextChanged__DelegateSignature(FString newText) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_InputButton.UI_BP_InputButton_C.OnTextChanged__DelegateSignature"));
    struct Params_OnTextChanged__DelegateSignature {
        FString newText; // 0x0
    }; // Size: 0x10
    Params_OnTextChanged__DelegateSignature params{};
    params.newText = (FString)newText;
    ProcessEvent(func, &params);
}
void UUI_BP_InputButton_C::OnInputUnhovered__DelegateSignature(UUI_BP_InputButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_InputButton.UI_BP_InputButton_C.OnInputUnhovered__DelegateSignature"));
    struct Params_OnInputUnhovered__DelegateSignature {
        UUI_BP_InputButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_OnInputUnhovered__DelegateSignature params{};
    params.Button = (UUI_BP_InputButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_InputButton_C::OnInputHovered__DelegateSignature(UUI_BP_InputButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_InputButton.UI_BP_InputButton_C.OnInputHovered__DelegateSignature"));
    struct Params_OnInputHovered__DelegateSignature {
        UUI_BP_InputButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_OnInputHovered__DelegateSignature params{};
    params.Button = (UUI_BP_InputButton_C*)Button;
    ProcessEvent(func, &params);
}
