#include "ESlateVisibility.hpp"
#include "FInputAxisKeyMapping.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UButton.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UPhoenixRichTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UUI_BP_InputAxis_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_InputAxis_C::ExecuteUbergraph_UI_BP_InputAxis(int32_t EntryPoint, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_InputAxis.UI_BP_InputAxis_C.ExecuteUbergraph_UI_BP_InputAxis"));
    struct Params_ExecuteUbergraph_UI_BP_InputAxis {
        int32_t EntryPoint; // 0x0
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x4
        int32_t CallFunc_PostEventAtLocation_ReturnValue_1; // 0x8
        char pad_c[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x10
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x18
    }; // Size: 0x20
    Params_ExecuteUbergraph_UI_BP_InputAxis params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue_1 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_1;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_InputAxis_C::SetRebindingFlair(bool IsRebinding, FLinearColor HighlightColor, FLinearColor DefaultColor, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_InputAxis.UI_BP_InputAxis_C.SetRebindingFlair"));
    struct Params_SetRebindingFlair {
        bool IsRebinding; // 0x0
        char pad_1[0x3];
        FLinearColor HighlightColor; // 0x4
        FLinearColor DefaultColor; // 0x14
        char pad_24[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x28
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x30
    }; // Size: 0x38
    Params_SetRebindingFlair params{};
    params.IsRebinding = (bool)IsRebinding;
    params.HighlightColor = (FLinearColor)HighlightColor;
    params.DefaultColor = (FLinearColor)DefaultColor;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    ProcessEvent(func, &params);
}
UUI_BP_InputAxis_C* UUI_BP_InputAxis_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/OptionsMenu/UI_BP_InputAxis.UI_BP_InputAxis_C");
    return (UUI_BP_InputAxis_C*)res;
}
TArray<FString> UUI_BP_InputAxis_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue) {}
void UUI_BP_InputAxis_C::SetKeyboardKey(FInputAxisKeyMapping Key, bool IsPrimary, bool IsLocked, FInputAxisKeyMapping NewLocalVar_0, bool CallFunc_IsAxisKeyValid_ReturnValue, FString CallFunc_KeyToString_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_BooleanAND_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_InputAxis.UI_BP_InputAxis_C.SetKeyboardKey"));
    struct Params_SetKeyboardKey {
        FInputAxisKeyMapping Key; // 0x0
        bool IsPrimary; // 0x38
        bool IsLocked; // 0x39
        char pad_3a[0x6];
        FInputAxisKeyMapping NewLocalVar_0; // 0x40
        bool CallFunc_IsAxisKeyValid_ReturnValue; // 0x78
        char pad_79[0x7];
        FString CallFunc_KeyToString_ReturnValue; // 0x80
        bool CallFunc_NotEqual_NameName_ReturnValue; // 0x90
        char pad_91[0x7];
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x98
        bool CallFunc_BooleanAND_ReturnValue; // 0xa8
    }; // Size: 0xa9
    Params_SetKeyboardKey params{};
    params.Key = (FInputAxisKeyMapping)Key;
    params.IsPrimary = (bool)IsPrimary;
    params.IsLocked = (bool)IsLocked;
    params.NewLocalVar_0 = (FInputAxisKeyMapping)NewLocalVar_0;
    params.CallFunc_IsAxisKeyValid_ReturnValue = (bool)CallFunc_IsAxisKeyValid_ReturnValue;
    params.CallFunc_KeyToString_ReturnValue = (FString)CallFunc_KeyToString_ReturnValue;
    params.CallFunc_NotEqual_NameName_ReturnValue = (bool)CallFunc_NotEqual_NameName_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_InputAxis_C::BndEvt__KeyboardButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_InputAxis.UI_BP_InputAxis_C.BndEvt__KeyboardButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__KeyboardButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__KeyboardButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_InputAxis_C::BndEvt__KeyboardButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_InputAxis.UI_BP_InputAxis_C.BndEvt__KeyboardButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__KeyboardButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__KeyboardButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_InputAxis_C::BndEvt__KeyboardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_InputAxis.UI_BP_InputAxis_C.BndEvt__KeyboardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__KeyboardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__KeyboardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_InputAxis_C::KeyboardButtonUnhovered__DelegateSignature(bool IsPrimary, UUI_BP_InputAxis_C* InputAxis) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_InputAxis.UI_BP_InputAxis_C.KeyboardButtonUnhovered__DelegateSignature"));
    struct Params_KeyboardButtonUnhovered__DelegateSignature {
        bool IsPrimary; // 0x0
        char pad_1[0x7];
        UUI_BP_InputAxis_C* InputAxis; // 0x8
    }; // Size: 0x10
    Params_KeyboardButtonUnhovered__DelegateSignature params{};
    params.IsPrimary = (bool)IsPrimary;
    params.InputAxis = (UUI_BP_InputAxis_C*)InputAxis;
    ProcessEvent(func, &params);
}
void UUI_BP_InputAxis_C::KeyboardButtonHovered__DelegateSignature(bool IsPrimary, UUI_BP_InputAxis_C* InputAxis) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_InputAxis.UI_BP_InputAxis_C.KeyboardButtonHovered__DelegateSignature"));
    struct Params_KeyboardButtonHovered__DelegateSignature {
        bool IsPrimary; // 0x0
        char pad_1[0x7];
        UUI_BP_InputAxis_C* InputAxis; // 0x8
    }; // Size: 0x10
    Params_KeyboardButtonHovered__DelegateSignature params{};
    params.IsPrimary = (bool)IsPrimary;
    params.InputAxis = (UUI_BP_InputAxis_C*)InputAxis;
    ProcessEvent(func, &params);
}
void UUI_BP_InputAxis_C::KeyboardButtonClicked__DelegateSignature(bool IsPrimary, UUI_BP_InputAxis_C* InputAxis) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_InputAxis.UI_BP_InputAxis_C.KeyboardButtonClicked__DelegateSignature"));
    struct Params_KeyboardButtonClicked__DelegateSignature {
        bool IsPrimary; // 0x0
        char pad_1[0x7];
        UUI_BP_InputAxis_C* InputAxis; // 0x8
    }; // Size: 0x10
    Params_KeyboardButtonClicked__DelegateSignature params{};
    params.IsPrimary = (bool)IsPrimary;
    params.InputAxis = (UUI_BP_InputAxis_C*)InputAxis;
    ProcessEvent(func, &params);
}
