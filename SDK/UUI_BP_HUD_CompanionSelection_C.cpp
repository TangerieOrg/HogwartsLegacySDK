#include "EInputEvent.hpp"
#include "ESlateVisibility.hpp"
#include "EUMGInputAction.hpp"
#include "FLegendItemData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UMenuCursorWidget.hpp"
#include "UObject.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UScreen.hpp"
#include "UUI_BP_CompanionSelectionButton_C.hpp"
#include "UUI_BP_HUD_CompanionSelection_C.hpp"
#include "UUI_BP_LegendBar_C.hpp"
#include "UUI_BP_Legend_Horizontal_Screen_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_HUD_CompanionSelection_C::CompanionHovered(UUI_BP_CompanionSelectionButton_C* compButton, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/CompanionSelection/UI_BP_HUD_CompanionSelection.UI_BP_HUD_CompanionSelection_C.CompanionHovered"));
    struct Params_CompanionHovered {
        UUI_BP_CompanionSelectionButton_C* compButton; // 0x0
        ESlateVisibility Temp_byte_Variable; // 0x8
        ESlateVisibility Temp_byte_Variable_1; // 0x9
        char pad_a[0x2];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0xc
        bool CallFunc_Array_Contains_ReturnValue; // 0x10
        bool CallFunc_EqualEqual_NameName_ReturnValue; // 0x11
        bool Temp_bool_Variable; // 0x12
        ESlateVisibility K2Node_Select_Default; // 0x13
    }; // Size: 0x14
    Params_CompanionHovered params{};
    params.compButton = (UUI_BP_CompanionSelectionButton_C*)compButton;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_Array_Contains_ReturnValue = (bool)CallFunc_Array_Contains_ReturnValue;
    params.CallFunc_EqualEqual_NameName_ReturnValue = (bool)CallFunc_EqualEqual_NameName_ReturnValue;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    ProcessEvent(func, &params);
}
UUI_BP_HUD_CompanionSelection_C* UUI_BP_HUD_CompanionSelection_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/CompanionSelection/UI_BP_HUD_CompanionSelection.UI_BP_HUD_CompanionSelection_C");
    return (UUI_BP_HUD_CompanionSelection_C*)res;
}
void UUI_BP_HUD_CompanionSelection_C::UpdateLegend(bool CharacterHovered, bool HoveredCharacterSelected, bool CallFunc_Array_Contains_ReturnValue, FLegendItemData K2Node_MakeStruct_LegendItemData, FLegendItemData K2Node_MakeStruct_LegendItemData_1, TArray<FLegendItemData>& K2Node_MakeArray_Array, TArray<FLegendItemData>& K2Node_MakeArray_Array_1, FLegendItemData K2Node_MakeStruct_LegendItemData_2, FLegendItemData K2Node_MakeStruct_LegendItemData_3, FLegendItemData K2Node_MakeStruct_LegendItemData_4, TArray<FLegendItemData>& K2Node_MakeArray_Array_2, FLegendItemData K2Node_MakeStruct_LegendItemData_5, TArray<FLegendItemData>& K2Node_MakeArray_Array_3) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/CompanionSelection/UI_BP_HUD_CompanionSelection.UI_BP_HUD_CompanionSelection_C.UpdateLegend"));
    struct Params_UpdateLegend {
        bool CharacterHovered; // 0x0
        bool HoveredCharacterSelected; // 0x1
        bool CallFunc_Array_Contains_ReturnValue; // 0x2
        char pad_3[0x5];
        FLegendItemData K2Node_MakeStruct_LegendItemData; // 0x8
        FLegendItemData K2Node_MakeStruct_LegendItemData_1; // 0x38
        TArray<FLegendItemData> K2Node_MakeArray_Array; // 0x68
        TArray<FLegendItemData> K2Node_MakeArray_Array_1; // 0x78
        FLegendItemData K2Node_MakeStruct_LegendItemData_2; // 0x88
        FLegendItemData K2Node_MakeStruct_LegendItemData_3; // 0xb8
        FLegendItemData K2Node_MakeStruct_LegendItemData_4; // 0xe8
        TArray<FLegendItemData> K2Node_MakeArray_Array_2; // 0x118
        FLegendItemData K2Node_MakeStruct_LegendItemData_5; // 0x128
        TArray<FLegendItemData> K2Node_MakeArray_Array_3; // 0x158
    }; // Size: 0x168
    Params_UpdateLegend params{};
    params.CharacterHovered = (bool)CharacterHovered;
    params.HoveredCharacterSelected = (bool)HoveredCharacterSelected;
    params.CallFunc_Array_Contains_ReturnValue = (bool)CallFunc_Array_Contains_ReturnValue;
    params.K2Node_MakeStruct_LegendItemData = (FLegendItemData)K2Node_MakeStruct_LegendItemData;
    params.K2Node_MakeStruct_LegendItemData_1 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_1;
    params.K2Node_MakeArray_Array = (TArray<FLegendItemData>)K2Node_MakeArray_Array;
    params.K2Node_MakeArray_Array_1 = (TArray<FLegendItemData>)K2Node_MakeArray_Array_1;
    params.K2Node_MakeStruct_LegendItemData_2 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_2;
    params.K2Node_MakeStruct_LegendItemData_3 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_3;
    params.K2Node_MakeStruct_LegendItemData_4 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_4;
    params.K2Node_MakeArray_Array_2 = (TArray<FLegendItemData>)K2Node_MakeArray_Array_2;
    params.K2Node_MakeStruct_LegendItemData_5 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_5;
    params.K2Node_MakeArray_Array_3 = (TArray<FLegendItemData>)K2Node_MakeArray_Array_3;
    ProcessEvent(func, &params);
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
    K2Node_MakeArray_Array_2 = params.K2Node_MakeArray_Array_2;
    K2Node_MakeArray_Array_1 = params.K2Node_MakeArray_Array_1;
    K2Node_MakeArray_Array_3 = params.K2Node_MakeArray_Array_3;
}
void UUI_BP_HUD_CompanionSelection_C::SetCompanionSelectionButton(FName CompanionName, UUI_BP_CompanionSelectionButton_C* CompanionSelectionButton) {}
bool UUI_BP_HUD_CompanionSelection_C::BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/CompanionSelection/UI_BP_HUD_CompanionSelection.UI_BP_HUD_CompanionSelection_C.BlueprintOnUMGInputAction"));
    struct Params_BlueprintOnUMGInputAction {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
        bool ReturnValue; // 0x2
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x3
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x4
        bool CallFunc_BooleanOR_ReturnValue; // 0x5
    }; // Size: 0x6
    Params_BlueprintOnUMGInputAction params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_HUD_CompanionSelection_C::ExecuteUbergraph_UI_BP_HUD_CompanionSelection(int32_t EntryPoint, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t K2Node_Event_OutroType_1, float K2Node_Event_OutroDuration, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32_t K2Node_Event_IntroType_1, float K2Node_Event_IntroDuration, int32_t K2Node_Event_OutroType, UMenuCursorWidget* CallFunc_GetCursorWidget_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1) {}
void UUI_BP_HUD_CompanionSelection_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/CompanionSelection/UI_BP_HUD_CompanionSelection.UI_BP_HUD_CompanionSelection_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HUD_CompanionSelection_C::CompanionSelected(UUI_BP_CompanionSelectionButton_C* compButton, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/CompanionSelection/UI_BP_HUD_CompanionSelection.UI_BP_HUD_CompanionSelection_C.CompanionSelected"));
    struct Params_CompanionSelected {
        UUI_BP_CompanionSelectionButton_C* compButton; // 0x0
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x8
        bool CallFunc_Not_PreBool_ReturnValue; // 0xc
        bool CallFunc_Array_Contains_ReturnValue; // 0xd
        bool CallFunc_Not_PreBool_ReturnValue_1; // 0xe
        bool CallFunc_EqualEqual_NameName_ReturnValue; // 0xf
    }; // Size: 0x10
    Params_CompanionSelected params{};
    params.compButton = (UUI_BP_CompanionSelectionButton_C*)compButton;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_Array_Contains_ReturnValue = (bool)CallFunc_Array_Contains_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue_1 = (bool)CallFunc_Not_PreBool_ReturnValue_1;
    params.CallFunc_EqualEqual_NameName_ReturnValue = (bool)CallFunc_EqualEqual_NameName_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_HUD_CompanionSelection_C::OnIntroEnded(int32_t IntroType) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/CompanionSelection/UI_BP_HUD_CompanionSelection.UI_BP_HUD_CompanionSelection_C.OnIntroEnded"));
    struct Params_OnIntroEnded {
        int32_t IntroType; // 0x0
    }; // Size: 0x4
    Params_OnIntroEnded params{};
    params.IntroType = (int32_t)IntroType;
    ProcessEvent(func, &params);
}
void UUI_BP_HUD_CompanionSelection_C::companionUnhovered(UUI_BP_CompanionSelectionButton_C* compButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/CompanionSelection/UI_BP_HUD_CompanionSelection.UI_BP_HUD_CompanionSelection_C.companionUnhovered"));
    struct Params_companionUnhovered {
        UUI_BP_CompanionSelectionButton_C* compButton; // 0x0
    }; // Size: 0x8
    Params_companionUnhovered params{};
    params.compButton = (UUI_BP_CompanionSelectionButton_C*)compButton;
    ProcessEvent(func, &params);
}
void UUI_BP_HUD_CompanionSelection_C::OnOutroStarted(int32_t OutroType, float OutroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/CompanionSelection/UI_BP_HUD_CompanionSelection.UI_BP_HUD_CompanionSelection_C.OnOutroStarted"));
    struct Params_OnOutroStarted {
        int32_t OutroType; // 0x0
        float OutroDuration; // 0x4
    }; // Size: 0x8
    Params_OnOutroStarted params{};
    params.OutroType = (int32_t)OutroType;
    params.OutroDuration = (float)OutroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_HUD_CompanionSelection_C::OnIntroStarted(int32_t IntroType, float IntroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/CompanionSelection/UI_BP_HUD_CompanionSelection.UI_BP_HUD_CompanionSelection_C.OnIntroStarted"));
    struct Params_OnIntroStarted {
        int32_t IntroType; // 0x0
        float IntroDuration; // 0x4
    }; // Size: 0x8
    Params_OnIntroStarted params{};
    params.IntroType = (int32_t)IntroType;
    params.IntroDuration = (float)IntroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_HUD_CompanionSelection_C::OnOutroEnded(int32_t OutroType) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/CompanionSelection/UI_BP_HUD_CompanionSelection.UI_BP_HUD_CompanionSelection_C.OnOutroEnded"));
    struct Params_OnOutroEnded {
        int32_t OutroType; // 0x0
    }; // Size: 0x4
    Params_OnOutroEnded params{};
    params.OutroType = (int32_t)OutroType;
    ProcessEvent(func, &params);
}
void UUI_BP_HUD_CompanionSelection_C::CompanionLevelShown(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/CompanionSelection/UI_BP_HUD_CompanionSelection.UI_BP_HUD_CompanionSelection_C.CompanionLevelShown"));
    struct Params_CompanionLevelShown {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_CompanionLevelShown params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_HUD_CompanionSelection_C::Destruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/CompanionSelection/UI_BP_HUD_CompanionSelection.UI_BP_HUD_CompanionSelection_C.Destruct"));
    struct Params_Destruct {
    }; // Size: 0x0
    Params_Destruct params{};
    ProcessEvent(func, &params);
}
