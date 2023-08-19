#include "EInputEvent.hpp"
#include "ESlateVisibility.hpp"
#include "EUMGInputAction.hpp"
#include "FInputActionHoldInfo.hpp"
#include "FLegendItemData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UButton.hpp"
#include "UCanvasPanel.hpp"
#include "UFunction.hpp"
#include "UHorizontalBox.hpp"
#include "ULegendItem.hpp"
#include "UPhoenixRichTextBlock.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPopupScreen.hpp"
#include "UUI_BP_AudioLegendPopup_C.hpp"
#include "UUI_BP_AudioLegendTooltipContent_C.hpp"
#include "UUI_BP_Legend_Horizontal_Tooltip_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UUserWidget.hpp"
#include "UVerticalBox.hpp"
#include "UVerticalBoxSlot.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_AudioLegendPopup_C* UUI_BP_AudioLegendPopup_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Common/Popup/UI_BP_AudioLegendPopup.UI_BP_AudioLegendPopup_C");
    return (UUI_BP_AudioLegendPopup_C*)res;
}
void UUI_BP_AudioLegendPopup_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Popup/UI_BP_AudioLegendPopup.UI_BP_AudioLegendPopup_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_AudioLegendPopup_C::ShowPopup(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Popup/UI_BP_AudioLegendPopup.UI_BP_AudioLegendPopup_C.ShowPopup"));
    struct Params_ShowPopup {
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_ShowPopup params{};
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_AudioLegendPopup_C::SequenceEvent__ENTRYPOINTUI_BP_AudioLegendPopup_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Popup/UI_BP_AudioLegendPopup.UI_BP_AudioLegendPopup_C.SequenceEvent__ENTRYPOINTUI_BP_AudioLegendPopup_0"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_AudioLegendPopup_0 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_AudioLegendPopup_0 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_AudioLegendPopup_C::HidePopup(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Popup/UI_BP_AudioLegendPopup.UI_BP_AudioLegendPopup_C.HidePopup"));
    struct Params_HidePopup {
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_HidePopup params{};
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
TArray<FString> UUI_BP_AudioLegendPopup_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_2, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_3, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_4, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_5, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_6, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_7, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_8, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_9, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_10, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_11, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_12, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_13, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_14, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_15) {}
void UUI_BP_AudioLegendPopup_C::ExecuteUbergraph_UI_BP_AudioLegendPopup(int32_t EntryPoint, int32_t K2Node_Event_OutroType, float K2Node_Event_OutroDuration, ESlateVisibility Temp_byte_Variable, float CallFunc_Divide_FloatFloat_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32_t K2Node_Event_IntroType, float K2Node_Event_IntroDuration, UUserWidget* K2Node_Event_ContentWidget, float CallFunc_Divide_FloatFloat_ReturnValue_1, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_bUsesWaitIndicator, TArray<FInputActionHoldInfo>& K2Node_Event_CompletionActions, TArray<FLegendItemData>& K2Node_Event_LegendItems, ULegendItem* K2Node_CustomEvent_LegendItem, bool K2Node_CustomEvent_HoldWasCompleted, FString K2Node_Event_DescriptionString, bool K2Node_Event_isTranslated, FString K2Node_Event_TitleString, bool K2Node_Event_IsDesignTime, bool Temp_bool_Variable, int32_t CallFunc_Array_Find_ReturnValue, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Popup/UI_BP_AudioLegendPopup.UI_BP_AudioLegendPopup_C.ExecuteUbergraph_UI_BP_AudioLegendPopup"));
    struct Params_ExecuteUbergraph_UI_BP_AudioLegendPopup {
        int32_t EntryPoint; // 0x0
        int32_t K2Node_Event_OutroType; // 0x4
        float K2Node_Event_OutroDuration; // 0x8
        ESlateVisibility Temp_byte_Variable; // 0xc
        char pad_d[0x3];
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0x10
        char pad_14[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x18
        int32_t K2Node_Event_IntroType; // 0x20
        float K2Node_Event_IntroDuration; // 0x24
        UUserWidget* K2Node_Event_ContentWidget; // 0x28
        float CallFunc_Divide_FloatFloat_ReturnValue_1; // 0x30
        char pad_34[0x4];
        UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue; // 0x38
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1; // 0x40
        bool CallFunc_IsValid_ReturnValue; // 0x48
        bool K2Node_Event_bUsesWaitIndicator; // 0x49
        char pad_4a[0x6];
        TArray<FInputActionHoldInfo> K2Node_Event_CompletionActions; // 0x50
        TArray<FLegendItemData> K2Node_Event_LegendItems; // 0x60
        ULegendItem* K2Node_CustomEvent_LegendItem; // 0x70
        bool K2Node_CustomEvent_HoldWasCompleted; // 0x78
        char pad_79[0x7];
        FString K2Node_Event_DescriptionString; // 0x80
        bool K2Node_Event_isTranslated; // 0x90
        char pad_91[0x7];
        FString K2Node_Event_TitleString; // 0x98
        bool K2Node_Event_IsDesignTime; // 0xa8
        bool Temp_bool_Variable; // 0xa9
        char pad_aa[0x2];
        int32_t CallFunc_Array_Find_ReturnValue; // 0xac
        ESlateVisibility Temp_byte_Variable_1; // 0xb0
        ESlateVisibility K2Node_Select_Default; // 0xb1
    }; // Size: 0xb2
    Params_ExecuteUbergraph_UI_BP_AudioLegendPopup params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_OutroType = (int32_t)K2Node_Event_OutroType;
    params.K2Node_Event_OutroDuration = (float)K2Node_Event_OutroDuration;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.K2Node_Event_IntroType = (int32_t)K2Node_Event_IntroType;
    params.K2Node_Event_IntroDuration = (float)K2Node_Event_IntroDuration;
    params.K2Node_Event_ContentWidget = (UUserWidget*)K2Node_Event_ContentWidget;
    params.CallFunc_Divide_FloatFloat_ReturnValue_1 = (float)CallFunc_Divide_FloatFloat_ReturnValue_1;
    params.CallFunc_AddChildToVerticalBox_ReturnValue = (UVerticalBoxSlot*)CallFunc_AddChildToVerticalBox_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue_1 = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue_1;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.K2Node_Event_bUsesWaitIndicator = (bool)K2Node_Event_bUsesWaitIndicator;
    params.K2Node_Event_CompletionActions = (TArray<FInputActionHoldInfo>)K2Node_Event_CompletionActions;
    params.K2Node_Event_LegendItems = (TArray<FLegendItemData>)K2Node_Event_LegendItems;
    params.K2Node_CustomEvent_LegendItem = (ULegendItem*)K2Node_CustomEvent_LegendItem;
    params.K2Node_CustomEvent_HoldWasCompleted = (bool)K2Node_CustomEvent_HoldWasCompleted;
    params.K2Node_Event_DescriptionString = (FString)K2Node_Event_DescriptionString;
    params.K2Node_Event_isTranslated = (bool)K2Node_Event_isTranslated;
    params.K2Node_Event_TitleString = (FString)K2Node_Event_TitleString;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.CallFunc_Array_Find_ReturnValue = (int32_t)CallFunc_Array_Find_ReturnValue;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    ProcessEvent(func, &params);
    K2Node_Event_CompletionActions = params.K2Node_Event_CompletionActions;
    K2Node_Event_LegendItems = params.K2Node_Event_LegendItems;
}
void UUI_BP_AudioLegendPopup_C::BndEvt__UI_BP_AudioLegendPopup_LegendBackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Popup/UI_BP_AudioLegendPopup.UI_BP_AudioLegendPopup_C.BndEvt__UI_BP_AudioLegendPopup_LegendBackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_AudioLegendPopup_LegendBackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_AudioLegendPopup_LegendBackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
bool UUI_BP_AudioLegendPopup_C::BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Array_Index_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, int32_t Temp_int_Loop_Counter_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, int32_t CallFunc_Add_IntInt_ReturnValue_1, ULegendItem* CallFunc_GetLegendItem_ReturnValue, FInputActionHoldInfo CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, ULegendItem* CallFunc_GetLegendItem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, FInputActionHoldInfo CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, bool CallFunc_EqualEqual_ByteByte_ReturnValue_8) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Popup/UI_BP_AudioLegendPopup.UI_BP_AudioLegendPopup_C.BlueprintOnUMGInputAction"));
    struct Params_BlueprintOnUMGInputAction {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
        bool ReturnValue; // 0x2
        char pad_3[0x1];
        int32_t Temp_int_Array_Index_Variable; // 0x4
        int32_t Temp_int_Array_Index_Variable_1; // 0x8
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0xc
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0xd
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_2; // 0xe
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_3; // 0xf
        int32_t Temp_int_Loop_Counter_Variable; // 0x10
        bool CallFunc_BooleanOR_ReturnValue; // 0x14
        bool CallFunc_BooleanOR_ReturnValue_1; // 0x15
        char pad_16[0x2];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x18
        bool CallFunc_BooleanOR_ReturnValue_2; // 0x1c
        char pad_1d[0x3];
        int32_t Temp_int_Loop_Counter_Variable_1; // 0x20
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_4; // 0x24
        char pad_25[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x28
        char pad_2c[0x4];
        ULegendItem* CallFunc_GetLegendItem_ReturnValue; // 0x30
        FInputActionHoldInfo CallFunc_Array_Get_Item; // 0x38
        bool CallFunc_IsValid_ReturnValue; // 0x3a
        char pad_3b[0x1];
        int32_t CallFunc_Array_Length_ReturnValue; // 0x3c
        bool CallFunc_Less_IntInt_ReturnValue; // 0x40
        char pad_41[0x7];
        ULegendItem* CallFunc_GetLegendItem_ReturnValue_1; // 0x48
        bool CallFunc_IsValid_ReturnValue_1; // 0x50
        FInputActionHoldInfo CallFunc_Array_Get_Item_1; // 0x51
        char pad_53[0x1];
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x54
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0x58
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_5; // 0x59
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_6; // 0x5a
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_7; // 0x5b
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_8; // 0x5c
    }; // Size: 0x5d
    Params_BlueprintOnUMGInputAction params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_2;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_3;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue_1 = (bool)CallFunc_BooleanOR_ReturnValue_1;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue_2 = (bool)CallFunc_BooleanOR_ReturnValue_2;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_4;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_GetLegendItem_ReturnValue = (ULegendItem*)CallFunc_GetLegendItem_ReturnValue;
    params.CallFunc_Array_Get_Item = (FInputActionHoldInfo)CallFunc_Array_Get_Item;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_GetLegendItem_ReturnValue_1 = (ULegendItem*)CallFunc_GetLegendItem_ReturnValue_1;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_Array_Get_Item_1 = (FInputActionHoldInfo)CallFunc_Array_Get_Item_1;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_5;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_6 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_6;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_7 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_7;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_8 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_8;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_AudioLegendPopup_C::OnIntroStarted(int32_t IntroType, float IntroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Popup/UI_BP_AudioLegendPopup.UI_BP_AudioLegendPopup_C.OnIntroStarted"));
    struct Params_OnIntroStarted {
        int32_t IntroType; // 0x0
        float IntroDuration; // 0x4
    }; // Size: 0x8
    Params_OnIntroStarted params{};
    params.IntroType = (int32_t)IntroType;
    params.IntroDuration = (float)IntroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_AudioLegendPopup_C::OnOutroStarted(int32_t OutroType, float OutroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Popup/UI_BP_AudioLegendPopup.UI_BP_AudioLegendPopup_C.OnOutroStarted"));
    struct Params_OnOutroStarted {
        int32_t OutroType; // 0x0
        float OutroDuration; // 0x4
    }; // Size: 0x8
    Params_OnOutroStarted params{};
    params.OutroType = (int32_t)OutroType;
    params.OutroDuration = (float)OutroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_AudioLegendPopup_C::SetPopupContentWidget0(UUserWidget* ContentWidget) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Popup/UI_BP_AudioLegendPopup.UI_BP_AudioLegendPopup_C.SetPopupContentWidget"));
    struct Params_SetPopupContentWidget {
        UUserWidget* ContentWidget; // 0x0
    }; // Size: 0x8
    Params_SetPopupContentWidget params{};
    params.ContentWidget = (UUserWidget*)ContentWidget;
    ProcessEvent(func, &params);
}
void UUI_BP_AudioLegendPopup_C::SetPopupUsesWaitIndicator0(bool bUsesWaitIndicator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Popup/UI_BP_AudioLegendPopup.UI_BP_AudioLegendPopup_C.SetPopupUsesWaitIndicator"));
    struct Params_SetPopupUsesWaitIndicator {
        bool bUsesWaitIndicator; // 0x0
    }; // Size: 0x1
    Params_SetPopupUsesWaitIndicator params{};
    params.bUsesWaitIndicator = (bool)bUsesWaitIndicator;
    ProcessEvent(func, &params);
}
void UUI_BP_AudioLegendPopup_C::SetPopupCompletionActions0(TArray<FInputActionHoldInfo>& CompletionActions) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Popup/UI_BP_AudioLegendPopup.UI_BP_AudioLegendPopup_C.SetPopupCompletionActions"));
    struct Params_SetPopupCompletionActions {
        TArray<FInputActionHoldInfo> CompletionActions; // 0x0
    }; // Size: 0x10
    Params_SetPopupCompletionActions params{};
    params.CompletionActions = (TArray<FInputActionHoldInfo>)CompletionActions;
    ProcessEvent(func, &params);
    CompletionActions = params.CompletionActions;
}
void UUI_BP_AudioLegendPopup_C::SetPopupLegendItems0(TArray<FLegendItemData>& LegendItems) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Popup/UI_BP_AudioLegendPopup.UI_BP_AudioLegendPopup_C.SetPopupLegendItems"));
    struct Params_SetPopupLegendItems {
        TArray<FLegendItemData> LegendItems; // 0x0
    }; // Size: 0x10
    Params_SetPopupLegendItems params{};
    params.LegendItems = (TArray<FLegendItemData>)LegendItems;
    ProcessEvent(func, &params);
    LegendItems = params.LegendItems;
}
void UUI_BP_AudioLegendPopup_C::CompletionButtonReleased(ULegendItem* LegendItem, bool HoldWasCompleted) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Popup/UI_BP_AudioLegendPopup.UI_BP_AudioLegendPopup_C.CompletionButtonReleased"));
    struct Params_CompletionButtonReleased {
        ULegendItem* LegendItem; // 0x0
        bool HoldWasCompleted; // 0x8
    }; // Size: 0x9
    Params_CompletionButtonReleased params{};
    params.LegendItem = (ULegendItem*)LegendItem;
    params.HoldWasCompleted = (bool)HoldWasCompleted;
    ProcessEvent(func, &params);
}
void UUI_BP_AudioLegendPopup_C::SetPopupDescription0(FString DescriptionString, bool isTranslated) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Popup/UI_BP_AudioLegendPopup.UI_BP_AudioLegendPopup_C.SetPopupDescription"));
    struct Params_SetPopupDescription {
        FString DescriptionString; // 0x0
        bool isTranslated; // 0x10
    }; // Size: 0x11
    Params_SetPopupDescription params{};
    params.DescriptionString = (FString)DescriptionString;
    params.isTranslated = (bool)isTranslated;
    ProcessEvent(func, &params);
}
void UUI_BP_AudioLegendPopup_C::SetPopupTitle0(FString TitleString) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Popup/UI_BP_AudioLegendPopup.UI_BP_AudioLegendPopup_C.SetPopupTitle"));
    struct Params_SetPopupTitle {
        FString TitleString; // 0x0
    }; // Size: 0x10
    Params_SetPopupTitle params{};
    params.TitleString = (FString)TitleString;
    ProcessEvent(func, &params);
}
void UUI_BP_AudioLegendPopup_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Popup/UI_BP_AudioLegendPopup.UI_BP_AudioLegendPopup_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_AudioLegendPopup_C::CollapseAudioLegend() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Popup/UI_BP_AudioLegendPopup.UI_BP_AudioLegendPopup_C.CollapseAudioLegend"));
    struct Params_CollapseAudioLegend {
    }; // Size: 0x0
    Params_CollapseAudioLegend params{};
    ProcessEvent(func, &params);
}
