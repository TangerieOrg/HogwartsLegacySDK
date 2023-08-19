#include "ETextJustify\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UButton.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UUI_BP_MenuTextButton_C.hpp"
#include "UUI_BP_ScrollingTextBlock_C.hpp"
#include "UUI_BP_ScrollingTextTestButton_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UUserWidget.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_ScrollingTextTestButton_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_ScrollingTextTestButton.UI_BP_ScrollingTextTestButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
UUI_BP_ScrollingTextTestButton_C* UUI_BP_ScrollingTextTestButton_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/UI_BP_ScrollingTextTestButton.UI_BP_ScrollingTextTestButton_C");
    return (UUI_BP_ScrollingTextTestButton_C*)res;
}
void UUI_BP_ScrollingTextTestButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_ScrollingTextTestButton.UI_BP_ScrollingTextTestButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ScrollingTextTestButton_C::HandleHovered(UUI_BP_MenuTextButton_C* Button, bool JustChangeHighlight, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_ScrollingTextTestButton.UI_BP_ScrollingTextTestButton_C.HandleHovered"));
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
void UUI_BP_ScrollingTextTestButton_C::HandleUnhovered(UUI_BP_MenuTextButton_C* Button, bool JustChangeHighjlight, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_ScrollingTextTestButton.UI_BP_ScrollingTextTestButton_C.HandleUnhovered"));
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
void UUI_BP_ScrollingTextTestButton_C::SetButtonState(bool IsSelected, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_ScrollingTextTestButton.UI_BP_ScrollingTextTestButton_C.SetButtonState"));
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
void UUI_BP_ScrollingTextTestButton_C::Hovered(bool CurrentlyHovered) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_ScrollingTextTestButton.UI_BP_ScrollingTextTestButton_C.Hovered"));
    struct Params_Hovered {
        bool CurrentlyHovered; // 0x0
    }; // Size: 0x1
    Params_Hovered params{};
    params.CurrentlyHovered = (bool)CurrentlyHovered;
    ProcessEvent(func, &params);
}
void UUI_BP_ScrollingTextTestButton_C::ExecuteUbergraph_UI_BP_ScrollingTextTestButton(int32_t EntryPoint, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool K2Node_Event_IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_ScrollingTextTestButton.UI_BP_ScrollingTextTestButton_C.ExecuteUbergraph_UI_BP_ScrollingTextTestButton"));
    struct Params_ExecuteUbergraph_UI_BP_ScrollingTextTestButton {
        int32_t EntryPoint; // 0x0
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x4
        int32_t CallFunc_PostEventAtLocation_ReturnValue_1; // 0x8
        char pad_c[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x10
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x18
        bool K2Node_Event_IsDesignTime; // 0x20
    }; // Size: 0x21
    Params_ExecuteUbergraph_UI_BP_ScrollingTextTestButton params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue_1 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_1;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_ScrollingTextTestButton_C::SetButtonText(FString ButtonText) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_ScrollingTextTestButton.UI_BP_ScrollingTextTestButton_C.SetButtonText"));
    struct Params_SetButtonText {
        FString ButtonText; // 0x0
    }; // Size: 0x10
    Params_SetButtonText params{};
    params.ButtonText = (FString)ButtonText;
    ProcessEvent(func, &params);
}
void UUI_BP_ScrollingTextTestButton_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_ScrollingTextTestButton.UI_BP_ScrollingTextTestButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ScrollingTextTestButton_C::PreConstruct0(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_ScrollingTextTestButton.UI_BP_ScrollingTextTestButton_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_ScrollingTextTestButton_C::ScrollingTextButtonUnhovered__DelegateSignature(UUI_BP_ScrollingTextTestButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_ScrollingTextTestButton.UI_BP_ScrollingTextTestButton_C.ScrollingTextButtonUnhovered__DelegateSignature"));
    struct Params_ScrollingTextButtonUnhovered__DelegateSignature {
        UUI_BP_ScrollingTextTestButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_ScrollingTextButtonUnhovered__DelegateSignature params{};
    params.Button = (UUI_BP_ScrollingTextTestButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_ScrollingTextTestButton_C::ScrollingTextButtonHovered__DelegateSignature(UUI_BP_ScrollingTextTestButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_ScrollingTextTestButton.UI_BP_ScrollingTextTestButton_C.ScrollingTextButtonHovered__DelegateSignature"));
    struct Params_ScrollingTextButtonHovered__DelegateSignature {
        UUI_BP_ScrollingTextTestButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_ScrollingTextButtonHovered__DelegateSignature params{};
    params.Button = (UUI_BP_ScrollingTextTestButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_ScrollingTextTestButton_C::ScrollingTextButtonClicked__DelegateSignature(UUI_BP_ScrollingTextTestButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_ScrollingTextTestButton.UI_BP_ScrollingTextTestButton_C.ScrollingTextButtonClicked__DelegateSignature"));
    struct Params_ScrollingTextButtonClicked__DelegateSignature {
        UUI_BP_ScrollingTextTestButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_ScrollingTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_ScrollingTextTestButton_C*)Button;
    ProcessEvent(func, &params);
}
