#include "FPointerToUberGraphFrame.hpp"
#include "UAvaUserWidget.hpp"
#include "UButton.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UPhoenixImage.hpp"
#include "UPhoenixRichTextBlock.hpp"
#include "UUI_BP_HYDRATextButton_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_HYDRATextButton_C* UUI_BP_HYDRATextButton_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HYDRA/UI_BP_HYDRATextButton.UI_BP_HYDRATextButton_C");
    return (UUI_BP_HYDRATextButton_C*)res;
}
TArray<FString> UUI_BP_HYDRATextButton_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue) {}
void UUI_BP_HYDRATextButton_C::Hovered(bool CurrentlyHovered) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HYDRA/UI_BP_HYDRATextButton.UI_BP_HYDRATextButton_C.Hovered"));
    struct Params_Hovered {
        bool CurrentlyHovered; // 0x0
    }; // Size: 0x1
    Params_Hovered params{};
    params.CurrentlyHovered = (bool)CurrentlyHovered;
    ProcessEvent(func, &params);
}
void UUI_BP_HYDRATextButton_C::SetButtonText(FString ButtonText) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HYDRA/UI_BP_HYDRATextButton.UI_BP_HYDRATextButton_C.SetButtonText"));
    struct Params_SetButtonText {
        FString ButtonText; // 0x0
    }; // Size: 0x10
    Params_SetButtonText params{};
    params.ButtonText = (FString)ButtonText;
    ProcessEvent(func, &params);
}
void UUI_BP_HYDRATextButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HYDRA/UI_BP_HYDRATextButton.UI_BP_HYDRATextButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HYDRATextButton_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HYDRA/UI_BP_HYDRATextButton.UI_BP_HYDRATextButton_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_HYDRATextButton_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HYDRA/UI_BP_HYDRATextButton.UI_BP_HYDRATextButton_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HYDRATextButton_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HYDRA/UI_BP_HYDRATextButton.UI_BP_HYDRATextButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HYDRATextButton_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HYDRA/UI_BP_HYDRATextButton.UI_BP_HYDRATextButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HYDRATextButton_C::ExecuteUbergraph_UI_BP_HYDRATextButton(int32_t EntryPoint, bool K2Node_Event_IsDesignTime, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HYDRA/UI_BP_HYDRATextButton.UI_BP_HYDRATextButton_C.ExecuteUbergraph_UI_BP_HYDRATextButton"));
    struct Params_ExecuteUbergraph_UI_BP_HYDRATextButton {
        int32_t EntryPoint; // 0x0
        bool K2Node_Event_IsDesignTime; // 0x4
        char pad_5[0x3];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x8
        int32_t CallFunc_PostEventAtLocation_ReturnValue_1; // 0xc
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x10
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x18
    }; // Size: 0x20
    Params_ExecuteUbergraph_UI_BP_HYDRATextButton params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue_1 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_1;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_HYDRATextButton_C::HYDRATextButtonUnhovered__DelegateSignature(UUI_BP_HYDRATextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HYDRA/UI_BP_HYDRATextButton.UI_BP_HYDRATextButton_C.HYDRATextButtonUnhovered__DelegateSignature"));
    struct Params_HYDRATextButtonUnhovered__DelegateSignature {
        UUI_BP_HYDRATextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_HYDRATextButtonUnhovered__DelegateSignature params{};
    params.Button = (UUI_BP_HYDRATextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_HYDRATextButton_C::HYDRATextButtonHovered__DelegateSignature(UUI_BP_HYDRATextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HYDRA/UI_BP_HYDRATextButton.UI_BP_HYDRATextButton_C.HYDRATextButtonHovered__DelegateSignature"));
    struct Params_HYDRATextButtonHovered__DelegateSignature {
        UUI_BP_HYDRATextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_HYDRATextButtonHovered__DelegateSignature params{};
    params.Button = (UUI_BP_HYDRATextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_HYDRATextButton_C::HYDRATextButtonClicked__DelegateSignature(UUI_BP_HYDRATextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HYDRA/UI_BP_HYDRATextButton.UI_BP_HYDRATextButton_C.HYDRATextButtonClicked__DelegateSignature"));
    struct Params_HYDRATextButtonClicked__DelegateSignature {
        UUI_BP_HYDRATextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_HYDRATextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_HYDRATextButton_C*)Button;
    ProcessEvent(func, &params);
}
