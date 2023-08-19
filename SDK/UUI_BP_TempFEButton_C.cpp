#include "FPointerToUberGraphFrame.hpp"
#include "UButton.hpp"
#include "UFunction.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UUI_BP_TempFEButton_C.hpp"
#include "UUserWidget.hpp"
UUI_BP_TempFEButton_C* UUI_BP_TempFEButton_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/UI_BP_TempFEButton.UI_BP_TempFEButton_C");
    return (UUI_BP_TempFEButton_C*)res;
}
void UUI_BP_TempFEButton_C::SetButtonIndex(int32_t CurrentIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_TempFEButton.UI_BP_TempFEButton_C.SetButtonIndex"));
    struct Params_SetButtonIndex {
        int32_t CurrentIndex; // 0x0
    }; // Size: 0x4
    Params_SetButtonIndex params{};
    params.CurrentIndex = (int32_t)CurrentIndex;
    ProcessEvent(func, &params);
}
void UUI_BP_TempFEButton_C::ExecuteUbergraph_UI_BP_TempFEButton(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_TempFEButton.UI_BP_TempFEButton_C.ExecuteUbergraph_UI_BP_TempFEButton"));
    struct Params_ExecuteUbergraph_UI_BP_TempFEButton {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_UI_BP_TempFEButton params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
void UUI_BP_TempFEButton_C::BndEvt__tempButton_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_TempFEButton.UI_BP_TempFEButton_C.BndEvt__tempButton_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__tempButton_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__tempButton_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_TempFEButton_C::SetButtonText(FName ButtonText, FString CallFunc_Conv_NameToString_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_TempFEButton.UI_BP_TempFEButton_C.SetButtonText"));
    struct Params_SetButtonText {
        FName ButtonText; // 0x0
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x8
    }; // Size: 0x18
    Params_SetButtonText params{};
    params.ButtonText = (FName)ButtonText;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_TempFEButton_C::BndEvt__tempButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_TempFEButton.UI_BP_TempFEButton_C.BndEvt__tempButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__tempButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__tempButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_TempFEButton_C::OnTempFEButtonHover__DelegateSignature(UUI_BP_TempFEButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_TempFEButton.UI_BP_TempFEButton_C.OnTempFEButtonHover__DelegateSignature"));
    struct Params_OnTempFEButtonHover__DelegateSignature {
        UUI_BP_TempFEButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_OnTempFEButtonHover__DelegateSignature params{};
    params.Button = (UUI_BP_TempFEButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_TempFEButton_C::OnTempFEButtonClicked__DelegateSignature(UUI_BP_TempFEButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_TempFEButton.UI_BP_TempFEButton_C.OnTempFEButtonClicked__DelegateSignature"));
    struct Params_OnTempFEButtonClicked__DelegateSignature {
        UUI_BP_TempFEButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_OnTempFEButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_TempFEButton_C*)Button;
    ProcessEvent(func, &params);
}
