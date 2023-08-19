#include "ESlateVisibility.hpp"
#include "FInputActionKeyMapping.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UButton.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UPhoenixRichTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UUI_BP_InputAction_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_InputAction_C* UUI_BP_InputAction_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/OptionsMenu/UI_BP_InputAction.UI_BP_InputAction_C");
    return (UUI_BP_InputAction_C*)res;
}
void UUI_BP_InputAction_C::ExecuteUbergraph_UI_BP_InputAction(int32_t EntryPoint, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_InputAction.UI_BP_InputAction_C.ExecuteUbergraph_UI_BP_InputAction"));
    struct Params_ExecuteUbergraph_UI_BP_InputAction {
        int32_t EntryPoint; // 0x0
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x4
        int32_t CallFunc_PostEventAtLocation_ReturnValue_1; // 0x8
        char pad_c[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x10
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x18
    }; // Size: 0x20
    Params_ExecuteUbergraph_UI_BP_InputAction params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue_1 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_1;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_InputAction_C::KeyboardButtonHovered__DelegateSignature(bool IsPrimary, UUI_BP_InputAction_C* InputAction) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_InputAction.UI_BP_InputAction_C.KeyboardButtonHovered__DelegateSignature"));
    struct Params_KeyboardButtonHovered__DelegateSignature {
        bool IsPrimary; // 0x0
        char pad_1[0x7];
        UUI_BP_InputAction_C* InputAction; // 0x8
    }; // Size: 0x10
    Params_KeyboardButtonHovered__DelegateSignature params{};
    params.IsPrimary = (bool)IsPrimary;
    params.InputAction = (UUI_BP_InputAction_C*)InputAction;
    ProcessEvent(func, &params);
}
TArray<FString> UUI_BP_InputAction_C::GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue) {}
void UUI_BP_InputAction_C::SetKeyboardKey(FInputActionKeyMapping Key, bool IsPrimary, bool IsLocked, bool CallFunc_IsActionKeyValid_ReturnValue, FString CallFunc_KeyToString_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_BooleanAND_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_InputAction.UI_BP_InputAction_C.SetKeyboardKey"));
    struct Params_SetKeyboardKey {
        FInputActionKeyMapping Key; // 0x0
        bool IsPrimary; // 0x38
        bool IsLocked; // 0x39
        bool CallFunc_IsActionKeyValid_ReturnValue; // 0x3a
        char pad_3b[0x5];
        FString CallFunc_KeyToString_ReturnValue; // 0x40
        bool CallFunc_NotEqual_NameName_ReturnValue; // 0x50
        char pad_51[0x7];
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x58
        bool CallFunc_BooleanAND_ReturnValue; // 0x68
    }; // Size: 0x69
    Params_SetKeyboardKey params{};
    params.Key = (FInputActionKeyMapping)Key;
    params.IsPrimary = (bool)IsPrimary;
    params.IsLocked = (bool)IsLocked;
    params.CallFunc_IsActionKeyValid_ReturnValue = (bool)CallFunc_IsActionKeyValid_ReturnValue;
    params.CallFunc_KeyToString_ReturnValue = (FString)CallFunc_KeyToString_ReturnValue;
    params.CallFunc_NotEqual_NameName_ReturnValue = (bool)CallFunc_NotEqual_NameName_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_InputAction_C::BndEvt__KeyboardButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_InputAction.UI_BP_InputAction_C.BndEvt__KeyboardButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__KeyboardButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__KeyboardButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_InputAction_C::BndEvt__KeyboardButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_InputAction.UI_BP_InputAction_C.BndEvt__KeyboardButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__KeyboardButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__KeyboardButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_InputAction_C::BndEvt__KeyboardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_InputAction.UI_BP_InputAction_C.BndEvt__KeyboardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__KeyboardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__KeyboardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_InputAction_C::KeyboardButtonUnhovered__DelegateSignature(bool IsPrimary, UUI_BP_InputAction_C* InputAction) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_InputAction.UI_BP_InputAction_C.KeyboardButtonUnhovered__DelegateSignature"));
    struct Params_KeyboardButtonUnhovered__DelegateSignature {
        bool IsPrimary; // 0x0
        char pad_1[0x7];
        UUI_BP_InputAction_C* InputAction; // 0x8
    }; // Size: 0x10
    Params_KeyboardButtonUnhovered__DelegateSignature params{};
    params.IsPrimary = (bool)IsPrimary;
    params.InputAction = (UUI_BP_InputAction_C*)InputAction;
    ProcessEvent(func, &params);
}
void UUI_BP_InputAction_C::KeyboardButtonClicked__DelegateSignature(bool IsPrimary, UUI_BP_InputAction_C* InputAction) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_InputAction.UI_BP_InputAction_C.KeyboardButtonClicked__DelegateSignature"));
    struct Params_KeyboardButtonClicked__DelegateSignature {
        bool IsPrimary; // 0x0
        char pad_1[0x7];
        UUI_BP_InputAction_C* InputAction; // 0x8
    }; // Size: 0x10
    Params_KeyboardButtonClicked__DelegateSignature params{};
    params.IsPrimary = (bool)IsPrimary;
    params.InputAction = (UUI_BP_InputAction_C*)InputAction;
    ProcessEvent(func, &params);
}
