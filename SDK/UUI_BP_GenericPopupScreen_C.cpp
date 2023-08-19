#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "FInputActionHoldInfo.hpp"
#include "FLegendItemData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UCanvasPanel.hpp"
#include "UFunction.hpp"
#include "UHorizontalBox.hpp"
#include "ULegendItem.hpp"
#include "UPhoenixRichTextBlock.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPopupScreen.hpp"
#include "UUI_BP_GenericPopupScreen_C.hpp"
#include "UUI_BP_Legend_Horizontal_Tooltip_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UUserWidget.hpp"
#include "UVerticalBox.hpp"
#include "UVerticalBoxSlot.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_GenericPopupScreen_C::SetPopupDescription0(FString DescriptionString, bool isTranslated) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Popup/UI_BP_GenericPopupScreen.UI_BP_GenericPopupScreen_C.SetPopupDescription"));
    struct Params_SetPopupDescription {
        FString DescriptionString; // 0x0
        bool isTranslated; // 0x10
    }; // Size: 0x11
    Params_SetPopupDescription params{};
    params.DescriptionString = (FString)DescriptionString;
    params.isTranslated = (bool)isTranslated;
    ProcessEvent(func, &params);
}
UUI_BP_GenericPopupScreen_C* UUI_BP_GenericPopupScreen_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Common/Popup/UI_BP_GenericPopupScreen.UI_BP_GenericPopupScreen_C");
    return (UUI_BP_GenericPopupScreen_C*)res;
}
bool UUI_BP_GenericPopupScreen_C::BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Array_Index_Variable_1, ULegendItem* CallFunc_GetLegendItem_ReturnValue, FInputActionHoldInfo CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, ULegendItem* CallFunc_GetLegendItem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue, FInputActionHoldInfo CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Popup/UI_BP_GenericPopupScreen.UI_BP_GenericPopupScreen_C.BlueprintOnUMGInputAction"));
    struct Params_BlueprintOnUMGInputAction {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
        bool ReturnValue; // 0x2
        char pad_3[0x1];
        int32_t Temp_int_Array_Index_Variable; // 0x4
        int32_t Temp_int_Array_Index_Variable_1; // 0x8
        char pad_c[0x4];
        ULegendItem* CallFunc_GetLegendItem_ReturnValue; // 0x10
        FInputActionHoldInfo CallFunc_Array_Get_Item; // 0x18
        bool CallFunc_IsValid_ReturnValue; // 0x1a
        char pad_1b[0x1];
        int32_t CallFunc_Array_Length_ReturnValue; // 0x1c
        int32_t Temp_int_Loop_Counter_Variable; // 0x20
        char pad_24[0x4];
        ULegendItem* CallFunc_GetLegendItem_ReturnValue_1; // 0x28
        bool CallFunc_IsValid_ReturnValue_1; // 0x30
        char pad_31[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x34
        FInputActionHoldInfo CallFunc_Array_Get_Item_1; // 0x38
        char pad_3a[0x2];
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x3c
        bool CallFunc_Less_IntInt_ReturnValue; // 0x40
        char pad_41[0x3];
        int32_t Temp_int_Loop_Counter_Variable_1; // 0x44
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x48
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0x49
        char pad_4a[0x2];
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x4c
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x50
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_2; // 0x51
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_3; // 0x52
    }; // Size: 0x53
    Params_BlueprintOnUMGInputAction params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.CallFunc_GetLegendItem_ReturnValue = (ULegendItem*)CallFunc_GetLegendItem_ReturnValue;
    params.CallFunc_Array_Get_Item = (FInputActionHoldInfo)CallFunc_Array_Get_Item;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_GetLegendItem_ReturnValue_1 = (ULegendItem*)CallFunc_GetLegendItem_ReturnValue_1;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Array_Get_Item_1 = (FInputActionHoldInfo)CallFunc_Array_Get_Item_1;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_2;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_3;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
TArray<FString> UUI_BP_GenericPopupScreen_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1) {}
void UUI_BP_GenericPopupScreen_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Popup/UI_BP_GenericPopupScreen.UI_BP_GenericPopupScreen_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_GenericPopupScreen_C::SetPopupCompletionActions0(TArray<FInputActionHoldInfo>& CompletionActions) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Popup/UI_BP_GenericPopupScreen.UI_BP_GenericPopupScreen_C.SetPopupCompletionActions"));
    struct Params_SetPopupCompletionActions {
        TArray<FInputActionHoldInfo> CompletionActions; // 0x0
    }; // Size: 0x10
    Params_SetPopupCompletionActions params{};
    params.CompletionActions = (TArray<FInputActionHoldInfo>)CompletionActions;
    ProcessEvent(func, &params);
    CompletionActions = params.CompletionActions;
}
void UUI_BP_GenericPopupScreen_C::SetPopupTitle0(FString TitleString) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Popup/UI_BP_GenericPopupScreen.UI_BP_GenericPopupScreen_C.SetPopupTitle"));
    struct Params_SetPopupTitle {
        FString TitleString; // 0x0
    }; // Size: 0x10
    Params_SetPopupTitle params{};
    params.TitleString = (FString)TitleString;
    ProcessEvent(func, &params);
}
void UUI_BP_GenericPopupScreen_C::SetPopupLegendItems0(TArray<FLegendItemData>& LegendItems) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Popup/UI_BP_GenericPopupScreen.UI_BP_GenericPopupScreen_C.SetPopupLegendItems"));
    struct Params_SetPopupLegendItems {
        TArray<FLegendItemData> LegendItems; // 0x0
    }; // Size: 0x10
    Params_SetPopupLegendItems params{};
    params.LegendItems = (TArray<FLegendItemData>)LegendItems;
    ProcessEvent(func, &params);
    LegendItems = params.LegendItems;
}
void UUI_BP_GenericPopupScreen_C::SetPopupUsesWaitIndicator0(bool bUsesWaitIndicator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Popup/UI_BP_GenericPopupScreen.UI_BP_GenericPopupScreen_C.SetPopupUsesWaitIndicator"));
    struct Params_SetPopupUsesWaitIndicator {
        bool bUsesWaitIndicator; // 0x0
    }; // Size: 0x1
    Params_SetPopupUsesWaitIndicator params{};
    params.bUsesWaitIndicator = (bool)bUsesWaitIndicator;
    ProcessEvent(func, &params);
}
void UUI_BP_GenericPopupScreen_C::OnIntroStarted(int32_t IntroType, float IntroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Popup/UI_BP_GenericPopupScreen.UI_BP_GenericPopupScreen_C.OnIntroStarted"));
    struct Params_OnIntroStarted {
        int32_t IntroType; // 0x0
        float IntroDuration; // 0x4
    }; // Size: 0x8
    Params_OnIntroStarted params{};
    params.IntroType = (int32_t)IntroType;
    params.IntroDuration = (float)IntroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_GenericPopupScreen_C::SetPopupContentWidget0(UUserWidget* ContentWidget) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Popup/UI_BP_GenericPopupScreen.UI_BP_GenericPopupScreen_C.SetPopupContentWidget"));
    struct Params_SetPopupContentWidget {
        UUserWidget* ContentWidget; // 0x0
    }; // Size: 0x8
    Params_SetPopupContentWidget params{};
    params.ContentWidget = (UUserWidget*)ContentWidget;
    ProcessEvent(func, &params);
}
void UUI_BP_GenericPopupScreen_C::OnIntroEnded(int32_t IntroType) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Popup/UI_BP_GenericPopupScreen.UI_BP_GenericPopupScreen_C.OnIntroEnded"));
    struct Params_OnIntroEnded {
        int32_t IntroType; // 0x0
    }; // Size: 0x4
    Params_OnIntroEnded params{};
    params.IntroType = (int32_t)IntroType;
    ProcessEvent(func, &params);
}
void UUI_BP_GenericPopupScreen_C::OnOutroStarted(int32_t OutroType, float OutroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Popup/UI_BP_GenericPopupScreen.UI_BP_GenericPopupScreen_C.OnOutroStarted"));
    struct Params_OnOutroStarted {
        int32_t OutroType; // 0x0
        float OutroDuration; // 0x4
    }; // Size: 0x8
    Params_OnOutroStarted params{};
    params.OutroType = (int32_t)OutroType;
    params.OutroDuration = (float)OutroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_GenericPopupScreen_C::CompletionButtonReleased(ULegendItem* LegendItem, bool HoldWasCompleted) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Popup/UI_BP_GenericPopupScreen.UI_BP_GenericPopupScreen_C.CompletionButtonReleased"));
    struct Params_CompletionButtonReleased {
        ULegendItem* LegendItem; // 0x0
        bool HoldWasCompleted; // 0x8
    }; // Size: 0x9
    Params_CompletionButtonReleased params{};
    params.LegendItem = (ULegendItem*)LegendItem;
    params.HoldWasCompleted = (bool)HoldWasCompleted;
    ProcessEvent(func, &params);
}
void UUI_BP_GenericPopupScreen_C::ExecuteUbergraph_UI_BP_GenericPopupScreen(int32_t EntryPoint, bool K2Node_Event_IsDesignTime, FString K2Node_Event_TitleString, FString K2Node_Event_DescriptionString, bool K2Node_Event_isTranslated, TArray<FLegendItemData>& K2Node_Event_LegendItems, TArray<FInputActionHoldInfo>& K2Node_Event_CompletionActions, bool K2Node_Event_bUsesWaitIndicator, bool CallFunc_Not_PreBool_ReturnValue, UUserWidget* K2Node_Event_ContentWidget, bool CallFunc_IsValid_ReturnValue, int32_t K2Node_Event_IntroType_1, float K2Node_Event_IntroDuration, float CallFunc_Divide_FloatFloat_ReturnValue, int32_t K2Node_Event_OutroType, float K2Node_Event_OutroDuration, float CallFunc_Divide_FloatFloat_ReturnValue_1, int32_t Temp_int_Loop_Counter_Variable, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, bool Temp_bool_Variable, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32_t Temp_int_Array_Index_Variable, ULegendItem* CallFunc_GetLegendItem_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, ULegendItem* K2Node_CustomEvent_LegendItem, bool K2Node_CustomEvent_HoldWasCompleted, FInputActionHoldInfo CallFunc_Array_Get_Item) {}
