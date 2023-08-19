#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateColor.hpp"
#include "UBorder.hpp"
#include "UButton.hpp"
#include "UFunction.hpp"
#include "UMapSubSystem.hpp"
#include "UPhoenixImage.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UUI_BP_FastTravelButton_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_FastTravelButton_C::Hovered(bool CurrentlyHovered) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_FastTravelButton.UI_BP_FastTravelButton_C.Hovered"));
    struct Params_Hovered {
        bool CurrentlyHovered; // 0x0
    }; // Size: 0x1
    Params_Hovered params{};
    params.CurrentlyHovered = (bool)CurrentlyHovered;
    ProcessEvent(func, &params);
}
UUI_BP_FastTravelButton_C* UUI_BP_FastTravelButton_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Map/UI_BP_FastTravelButton.UI_BP_FastTravelButton_C");
    return (UUI_BP_FastTravelButton_C*)res;
}
void UUI_BP_FastTravelButton_C::Set_Unlocked(UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, FLinearColor CallFunc_GetIconColorByState_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_FastTravelButton.UI_BP_FastTravelButton_C.Set Unlocked"));
    struct Params_Set_Unlocked {
        UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue; // 0x0
        FLinearColor CallFunc_GetIconColorByState_ReturnValue; // 0x8
        FSlateColor K2Node_MakeStruct_SlateColor; // 0x18
    }; // Size: 0x40
    Params_Set_Unlocked params{};
    params.CallFunc_GetGameInstanceSubsystem_ReturnValue = (UMapSubSystem*)CallFunc_GetGameInstanceSubsystem_ReturnValue;
    params.CallFunc_GetIconColorByState_ReturnValue = (FLinearColor)CallFunc_GetIconColorByState_ReturnValue;
    params.K2Node_MakeStruct_SlateColor = (FSlateColor)K2Node_MakeStruct_SlateColor;
    ProcessEvent(func, &params);
}
TArray<FString> UUI_BP_FastTravelButton_C::GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue) {}
void UUI_BP_FastTravelButton_C::SetButtonState(bool IsSelected, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_FastTravelButton.UI_BP_FastTravelButton_C.SetButtonState"));
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
void UUI_BP_FastTravelButton_C::HandleUnhovered(UUI_BP_FastTravelButton_C* Button, bool JustChangeHighjlight, float CallFunc_GetRenderOpacity_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_FastTravelButton.UI_BP_FastTravelButton_C.HandleUnhovered"));
    struct Params_HandleUnhovered {
        UUI_BP_FastTravelButton_C* Button; // 0x0
        bool JustChangeHighjlight; // 0x8
        char pad_9[0x3];
        float CallFunc_GetRenderOpacity_ReturnValue; // 0xc
        bool CallFunc_EqualEqual_FloatFloat_ReturnValue; // 0x10
        char pad_11[0x7];
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x18
    }; // Size: 0x20
    Params_HandleUnhovered params{};
    params.Button = (UUI_BP_FastTravelButton_C*)Button;
    params.JustChangeHighjlight = (bool)JustChangeHighjlight;
    params.CallFunc_GetRenderOpacity_ReturnValue = (float)CallFunc_GetRenderOpacity_ReturnValue;
    params.CallFunc_EqualEqual_FloatFloat_ReturnValue = (bool)CallFunc_EqualEqual_FloatFloat_ReturnValue;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelButton_C::HandleHovered(UUI_BP_FastTravelButton_C* Button, bool JustChangeHighlight, float CallFunc_GetRenderOpacity_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_FastTravelButton.UI_BP_FastTravelButton_C.HandleHovered"));
    struct Params_HandleHovered {
        UUI_BP_FastTravelButton_C* Button; // 0x0
        bool JustChangeHighlight; // 0x8
        char pad_9[0x3];
        float CallFunc_GetRenderOpacity_ReturnValue; // 0xc
        bool CallFunc_EqualEqual_FloatFloat_ReturnValue; // 0x10
        char pad_11[0x3];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x14
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x18
    }; // Size: 0x20
    Params_HandleHovered params{};
    params.Button = (UUI_BP_FastTravelButton_C*)Button;
    params.JustChangeHighlight = (bool)JustChangeHighlight;
    params.CallFunc_GetRenderOpacity_ReturnValue = (float)CallFunc_GetRenderOpacity_ReturnValue;
    params.CallFunc_EqualEqual_FloatFloat_ReturnValue = (bool)CallFunc_EqualEqual_FloatFloat_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelButton_C::ExpandAnimationComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_FastTravelButton.UI_BP_FastTravelButton_C.ExpandAnimationComplete"));
    struct Params_ExpandAnimationComplete {
    }; // Size: 0x0
    Params_ExpandAnimationComplete params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_FastTravelButton.UI_BP_FastTravelButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelButton_C::SetButtonText(FString ButtonText) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_FastTravelButton.UI_BP_FastTravelButton_C.SetButtonText"));
    struct Params_SetButtonText {
        FString ButtonText; // 0x0
    }; // Size: 0x10
    Params_SetButtonText params{};
    params.ButtonText = (FString)ButtonText;
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelButton_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_FastTravelButton.UI_BP_FastTravelButton_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelButton_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_FastTravelButton.UI_BP_FastTravelButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelButton_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_FastTravelButton.UI_BP_FastTravelButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelButton_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_FastTravelButton.UI_BP_FastTravelButton_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelButton_C::FastTravelButtonHovered__DelegateSignature(UUI_BP_FastTravelButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_FastTravelButton.UI_BP_FastTravelButton_C.FastTravelButtonHovered__DelegateSignature"));
    struct Params_FastTravelButtonHovered__DelegateSignature {
        UUI_BP_FastTravelButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_FastTravelButtonHovered__DelegateSignature params{};
    params.Button = (UUI_BP_FastTravelButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelButton_C::CollapseAnimationComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_FastTravelButton.UI_BP_FastTravelButton_C.CollapseAnimationComplete"));
    struct Params_CollapseAnimationComplete {
    }; // Size: 0x0
    Params_CollapseAnimationComplete params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelButton_C::ExecuteUbergraph_UI_BP_FastTravelButton(int32_t EntryPoint, float CallFunc_GetRenderOpacity_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool K2Node_Event_IsDesignTime, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, float CallFunc_GetRenderOpacity_ReturnValue_1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_FastTravelButton.UI_BP_FastTravelButton_C.ExecuteUbergraph_UI_BP_FastTravelButton"));
    struct Params_ExecuteUbergraph_UI_BP_FastTravelButton {
        int32_t EntryPoint; // 0x0
        float CallFunc_GetRenderOpacity_ReturnValue; // 0x4
        bool CallFunc_EqualEqual_FloatFloat_ReturnValue; // 0x8
        bool K2Node_Event_IsDesignTime; // 0x9
        char pad_a[0x2];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0xc
        int32_t CallFunc_PostEventAtLocation_ReturnValue_1; // 0x10
        char pad_14[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x18
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x20
        float CallFunc_GetRenderOpacity_ReturnValue_1; // 0x28
        bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1; // 0x2c
    }; // Size: 0x2d
    Params_ExecuteUbergraph_UI_BP_FastTravelButton params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_GetRenderOpacity_ReturnValue = (float)CallFunc_GetRenderOpacity_ReturnValue;
    params.CallFunc_EqualEqual_FloatFloat_ReturnValue = (bool)CallFunc_EqualEqual_FloatFloat_ReturnValue;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue_1 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_1;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_GetRenderOpacity_ReturnValue_1 = (float)CallFunc_GetRenderOpacity_ReturnValue_1;
    params.CallFunc_EqualEqual_FloatFloat_ReturnValue_1 = (bool)CallFunc_EqualEqual_FloatFloat_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelButton_C::CollapseComplete__DelegateSignature(UUI_BP_FastTravelButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_FastTravelButton.UI_BP_FastTravelButton_C.CollapseComplete__DelegateSignature"));
    struct Params_CollapseComplete__DelegateSignature {
        UUI_BP_FastTravelButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_CollapseComplete__DelegateSignature params{};
    params.Button = (UUI_BP_FastTravelButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelButton_C::ExpandComplete__DelegateSignature(UUI_BP_FastTravelButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_FastTravelButton.UI_BP_FastTravelButton_C.ExpandComplete__DelegateSignature"));
    struct Params_ExpandComplete__DelegateSignature {
        UUI_BP_FastTravelButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_ExpandComplete__DelegateSignature params{};
    params.Button = (UUI_BP_FastTravelButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelButton_C::FastTravelButtonUnhovered__DelegateSignature(UUI_BP_FastTravelButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_FastTravelButton.UI_BP_FastTravelButton_C.FastTravelButtonUnhovered__DelegateSignature"));
    struct Params_FastTravelButtonUnhovered__DelegateSignature {
        UUI_BP_FastTravelButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_FastTravelButtonUnhovered__DelegateSignature params{};
    params.Button = (UUI_BP_FastTravelButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelButton_C::FastTravelButtonClicked__DelegateSignature(UUI_BP_FastTravelButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_FastTravelButton.UI_BP_FastTravelButton_C.FastTravelButtonClicked__DelegateSignature"));
    struct Params_FastTravelButtonClicked__DelegateSignature {
        UUI_BP_FastTravelButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_FastTravelButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_FastTravelButton_C*)Button;
    ProcessEvent(func, &params);
}
