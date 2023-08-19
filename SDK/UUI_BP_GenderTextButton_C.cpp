#include "FPointerToUberGraphFrame.hpp"
#include "FSlateBrush.hpp"
#include "UAvaUserWidget.hpp"
#include "UButton.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UPhoenixImage.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UUI_BP_GenderTextButton_C.hpp"
#include "UUI_BP_SelectedBox_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_GenderTextButton_C* UUI_BP_GenderTextButton_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/CharacterCreator/UI_BP_GenderTextButton.UI_BP_GenderTextButton_C");
    return (UUI_BP_GenderTextButton_C*)res;
}
TArray<FString> UUI_BP_GenderTextButton_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue) {}
void UUI_BP_GenderTextButton_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_GenderTextButton.UI_BP_GenderTextButton_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_GenderTextButton_C::SetIsSelected(bool IsSelected, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_GenderTextButton.UI_BP_GenderTextButton_C.SetIsSelected"));
    struct Params_SetIsSelected {
        bool IsSelected; // 0x0
        char pad_1[0x7];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x8
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1; // 0x10
    }; // Size: 0x18
    Params_SetIsSelected params{};
    params.IsSelected = (bool)IsSelected;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue_1 = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_GenderTextButton_C::SetButtonText(FString ButtonText) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_GenderTextButton.UI_BP_GenderTextButton_C.SetButtonText"));
    struct Params_SetButtonText {
        FString ButtonText; // 0x0
    }; // Size: 0x10
    Params_SetButtonText params{};
    params.ButtonText = (FString)ButtonText;
    ProcessEvent(func, &params);
}
void UUI_BP_GenderTextButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_GenderTextButton.UI_BP_GenderTextButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_GenderTextButton_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_GenderTextButton.UI_BP_GenderTextButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_GenderTextButton_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_GenderTextButton.UI_BP_GenderTextButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_GenderTextButton_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_GenderTextButton.UI_BP_GenderTextButton_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_GenderTextButton_C::ExecuteUbergraph_UI_BP_GenderTextButton(int32_t EntryPoint, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, bool CallFunc_IsAnimationPlaying_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue_1, FSlateBrush K2Node_MakeStruct_SlateBrush, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool K2Node_Event_IsDesignTime, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_GenderTextButton.UI_BP_GenderTextButton_C.ExecuteUbergraph_UI_BP_GenderTextButton"));
    struct Params_ExecuteUbergraph_UI_BP_GenderTextButton {
        int32_t EntryPoint; // 0x0
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x4
        int32_t CallFunc_PostEventAtLocation_ReturnValue_1; // 0x8
        bool CallFunc_IsAnimationPlaying_ReturnValue; // 0xc
        char pad_d[0x3];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x10
        bool CallFunc_IsAnimationPlaying_ReturnValue_1; // 0x18
        char pad_19[0x7];
        FSlateBrush K2Node_MakeStruct_SlateBrush; // 0x20
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0xa8
        bool K2Node_Event_IsDesignTime; // 0xb0
        char pad_b1[0x7];
        UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0xb8
    }; // Size: 0xc0
    Params_ExecuteUbergraph_UI_BP_GenderTextButton params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue_1 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_1;
    params.CallFunc_IsAnimationPlaying_ReturnValue = (bool)CallFunc_IsAnimationPlaying_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_IsAnimationPlaying_ReturnValue_1 = (bool)CallFunc_IsAnimationPlaying_ReturnValue_1;
    params.K2Node_MakeStruct_SlateBrush = (FSlateBrush)K2Node_MakeStruct_SlateBrush;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    params.CallFunc_CreateDynamicMaterialInstance_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_GenderTextButton_C::MenuTextButtonUnhovered__DelegateSignature(UUI_BP_GenderTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_GenderTextButton.UI_BP_GenderTextButton_C.MenuTextButtonUnhovered__DelegateSignature"));
    struct Params_MenuTextButtonUnhovered__DelegateSignature {
        UUI_BP_GenderTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_MenuTextButtonUnhovered__DelegateSignature params{};
    params.Button = (UUI_BP_GenderTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_GenderTextButton_C::MenuTextButtonHovered__DelegateSignature(UUI_BP_GenderTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_GenderTextButton.UI_BP_GenderTextButton_C.MenuTextButtonHovered__DelegateSignature"));
    struct Params_MenuTextButtonHovered__DelegateSignature {
        UUI_BP_GenderTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_MenuTextButtonHovered__DelegateSignature params{};
    params.Button = (UUI_BP_GenderTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_GenderTextButton_C::MenuTextButtonClicked__DelegateSignature(UUI_BP_GenderTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_GenderTextButton.UI_BP_GenderTextButton_C.MenuTextButtonClicked__DelegateSignature"));
    struct Params_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_GenderTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_GenderTextButton_C*)Button;
    ProcessEvent(func, &params);
}
