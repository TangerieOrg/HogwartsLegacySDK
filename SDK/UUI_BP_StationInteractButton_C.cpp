#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateColor.hpp"
#include "UBorder.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UPhoenixRichTextBlock.hpp"
#include "UTextButtonWidget.hpp"
#include "UUI_BP_StationInteractButton_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_StationInteractButton_C::ScaleButton(bool IsHoveredOver) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_StationInteractButton.UI_BP_StationInteractButton_C.ScaleButton"));
    struct Params_ScaleButton {
        bool IsHoveredOver; // 0x0
    }; // Size: 0x1
    Params_ScaleButton params{};
    params.IsHoveredOver = (bool)IsHoveredOver;
    ProcessEvent(func, &params);
}
UUI_BP_StationInteractButton_C* UUI_BP_StationInteractButton_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Common/Buttons/UI_BP_StationInteractButton.UI_BP_StationInteractButton_C");
    return (UUI_BP_StationInteractButton_C*)res;
}
void UUI_BP_StationInteractButton_C::ToggleActive(bool IsActive, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float CallFunc_GetAnimationCurrentTime_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, bool CallFunc_IsAnimationPlaying_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_StationInteractButton.UI_BP_StationInteractButton_C.ToggleActive"));
    struct Params_ToggleActive {
        bool IsActive; // 0x0
        char pad_1[0x7];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x8
        float CallFunc_GetAnimationCurrentTime_ReturnValue; // 0x10
        bool CallFunc_IsAnimationPlaying_ReturnValue; // 0x14
        char pad_15[0x3];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1; // 0x18
        float CallFunc_GetAnimationCurrentTime_ReturnValue_1; // 0x20
        char pad_24[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2; // 0x28
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3; // 0x30
        bool CallFunc_IsAnimationPlaying_ReturnValue_1; // 0x38
    }; // Size: 0x39
    Params_ToggleActive params{};
    params.IsActive = (bool)IsActive;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    params.CallFunc_GetAnimationCurrentTime_ReturnValue = (float)CallFunc_GetAnimationCurrentTime_ReturnValue;
    params.CallFunc_IsAnimationPlaying_ReturnValue = (bool)CallFunc_IsAnimationPlaying_ReturnValue;
    params.CallFunc_PlayAnimation_ReturnValue_1 = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue_1;
    params.CallFunc_GetAnimationCurrentTime_ReturnValue_1 = (float)CallFunc_GetAnimationCurrentTime_ReturnValue_1;
    params.CallFunc_PlayAnimation_ReturnValue_2 = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue_2;
    params.CallFunc_PlayAnimation_ReturnValue_3 = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue_3;
    params.CallFunc_IsAnimationPlaying_ReturnValue_1 = (bool)CallFunc_IsAnimationPlaying_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_StationInteractButton_C::SetTypeIcon(FString Type, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_StationInteractButton.UI_BP_StationInteractButton_C.SetTypeIcon"));
    struct Params_SetTypeIcon {
        FString Type; // 0x0
        bool CallFunc_EqualEqual_StrStr_ReturnValue; // 0x10
        bool CallFunc_EqualEqual_StrStr_ReturnValue_1; // 0x11
        bool CallFunc_BooleanOR_ReturnValue; // 0x12
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue; // 0x13
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue_1; // 0x14
    }; // Size: 0x15
    Params_SetTypeIcon params{};
    params.Type = (FString)Type;
    params.CallFunc_EqualEqual_StrStr_ReturnValue = (bool)CallFunc_EqualEqual_StrStr_ReturnValue;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_1 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue;
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue_1 = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_StationInteractButton_C::OnStationButtonSelected__DelegateSignature(UUI_BP_StationInteractButton_C* SelectedOption) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_StationInteractButton.UI_BP_StationInteractButton_C.OnStationButtonSelected__DelegateSignature"));
    struct Params_OnStationButtonSelected__DelegateSignature {
        UUI_BP_StationInteractButton_C* SelectedOption; // 0x0
    }; // Size: 0x8
    Params_OnStationButtonSelected__DelegateSignature params{};
    params.SelectedOption = (UUI_BP_StationInteractButton_C*)SelectedOption;
    ProcessEvent(func, &params);
}
void UUI_BP_StationInteractButton_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_StationInteractButton.UI_BP_StationInteractButton_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_StationInteractButton_C::BndEvt__theButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_StationInteractButton.UI_BP_StationInteractButton_C.BndEvt__theButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__theButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__theButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_StationInteractButton_C::ExecuteUbergraph_UI_BP_StationInteractButton(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_StationInteractButton.UI_BP_StationInteractButton_C.ExecuteUbergraph_UI_BP_StationInteractButton"));
    struct Params_ExecuteUbergraph_UI_BP_StationInteractButton {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_UI_BP_StationInteractButton params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
