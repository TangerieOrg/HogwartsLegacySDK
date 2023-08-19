#include "FPointerToUberGraphFrame.hpp"
#include "FSlateColor.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UTextButtonWidget.hpp"
#include "UUI_BP_NavBarButton_C.hpp"
#include "UUI_BP_NewIndicator_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_NavBarButton_C::SetItemCount(int32_t NewCount, bool CallFunc_Greater_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_NavBarButton.UI_BP_NavBarButton_C.SetItemCount"));
    struct Params_SetItemCount {
        int32_t NewCount; // 0x0
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x4
    }; // Size: 0x5
    Params_SetItemCount params{};
    params.NewCount = (int32_t)NewCount;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_NavBarButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_NavBarButton.UI_BP_NavBarButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__Button_0_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__Button_0_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
UUI_BP_NavBarButton_C* UUI_BP_NavBarButton_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Common/Buttons/UI_BP_NavBarButton.UI_BP_NavBarButton_C");
    return (UUI_BP_NavBarButton_C*)res;
}
TArray<FString> UUI_BP_NavBarButton_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue) {}
void UUI_BP_NavBarButton_C::SetSelectedState(bool isSelectedButton, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_NavBarButton.UI_BP_NavBarButton_C.SetSelectedState"));
    struct Params_SetSelectedState {
        bool isSelectedButton; // 0x0
        char pad_1[0x7];
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x8
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_SetSelectedState params{};
    params.isSelectedButton = (bool)isSelectedButton;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_NavBarButton_C::OnSynchronizeProperties0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_NavBarButton.UI_BP_NavBarButton_C.OnSynchronizeProperties"));
    struct Params_OnSynchronizeProperties {
    }; // Size: 0x0
    Params_OnSynchronizeProperties params{};
    ProcessEvent(func, &params);
}
void UUI_BP_NavBarButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_NavBarButton.UI_BP_NavBarButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__Button_0_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__Button_0_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_NavBarButton_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_NavBarButton.UI_BP_NavBarButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_NavBarButton_C::OnHoveredEventDispatcher__DelegateSignature(UUI_BP_NavBarButton_C* Me) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_NavBarButton.UI_BP_NavBarButton_C.OnHoveredEventDispatcher__DelegateSignature"));
    struct Params_OnHoveredEventDispatcher__DelegateSignature {
        UUI_BP_NavBarButton_C* Me; // 0x0
    }; // Size: 0x8
    Params_OnHoveredEventDispatcher__DelegateSignature params{};
    params.Me = (UUI_BP_NavBarButton_C*)Me;
    ProcessEvent(func, &params);
}
void UUI_BP_NavBarButton_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_NavBarButton.UI_BP_NavBarButton_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_NavBarButton_C::ExecuteUbergraph_UI_BP_NavBarButton(int32_t EntryPoint, FSlateColor K2Node_MakeStruct_SlateColor, FSlateColor K2Node_MakeStruct_SlateColor_1, FString CallFunc_Conv_TextToString_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_NavBarButton.UI_BP_NavBarButton_C.ExecuteUbergraph_UI_BP_NavBarButton"));
    struct Params_ExecuteUbergraph_UI_BP_NavBarButton {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        FSlateColor K2Node_MakeStruct_SlateColor; // 0x8
        FSlateColor K2Node_MakeStruct_SlateColor_1; // 0x30
        FString CallFunc_Conv_TextToString_ReturnValue; // 0x58
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x68
        int32_t CallFunc_PostEventAtLocation_ReturnValue_1; // 0x6c
    }; // Size: 0x70
    Params_ExecuteUbergraph_UI_BP_NavBarButton params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_MakeStruct_SlateColor = (FSlateColor)K2Node_MakeStruct_SlateColor;
    params.K2Node_MakeStruct_SlateColor_1 = (FSlateColor)K2Node_MakeStruct_SlateColor_1;
    params.CallFunc_Conv_TextToString_ReturnValue = (FString)CallFunc_Conv_TextToString_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue_1 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_NavBarButton_C::OnUnhoveredEventDispatcher__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_NavBarButton.UI_BP_NavBarButton_C.OnUnhoveredEventDispatcher__DelegateSignature"));
    struct Params_OnUnhoveredEventDispatcher__DelegateSignature {
    }; // Size: 0x0
    Params_OnUnhoveredEventDispatcher__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_NavBarButton_C::OnClickedEventDispatcher__DelegateSignature(UUI_BP_NavBarButton_C* Me) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_NavBarButton.UI_BP_NavBarButton_C.OnClickedEventDispatcher__DelegateSignature"));
    struct Params_OnClickedEventDispatcher__DelegateSignature {
        UUI_BP_NavBarButton_C* Me; // 0x0
    }; // Size: 0x8
    Params_OnClickedEventDispatcher__DelegateSignature params{};
    params.Me = (UUI_BP_NavBarButton_C*)Me;
    ProcessEvent(func, &params);
}
