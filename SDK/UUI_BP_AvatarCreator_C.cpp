#include "AActor.hpp"
#include "ABiped_Player.hpp"
#include "AUI_BP_DummyActor_C.hpp"
#include "EAvatarPresetType.hpp"
#include "EDifficulty.hpp"
#include "EGearSlotIDEnum.hpp"
#include "EGenderEnum.hpp"
#include "EGenderPronoun.hpp"
#include "EGenderVoice.hpp"
#include "EInputEvent.hpp"
#include "ESlateVisibility.hpp"
#include "EUMGInputAction.hpp"
#include "FGearItemID.hpp"
#include "FLegendItemData.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "SocialHeritageStatusIDs.hpp"
#include "UAnalyticsManager.hpp"
#include "UAsyncLoadWrapper.hpp"
#include "UAsyncWidgetSwitcher.hpp"
#include "UAvatarCreatorPage.hpp"
#include "UCanvasPanelSlot.hpp"
#include "UFunction.hpp"
#include "UGearManager.hpp"
#include "UIconButtonWidget.hpp"
#include "ULegendItem.hpp"
#include "UObject.hpp"
#include "UOverlay.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UScaleBox.hpp"
#include "UScreen.hpp"
#include "USizeBoxSlot.hpp"
#include "UUI_BP_AsyncLoadWrapper_C.hpp"
#include "UUI_BP_AvatarCreator_C.hpp"
#include "UUI_BP_CharCreator_Finalize_C.hpp"
#include "UUI_BP_FG_CategoryNavBarHorizontal_C.hpp"
#include "UUI_BP_Legend_Horizontal_Screen_C.hpp"
#include "UUI_BP_MenuFinalized_C.hpp"
#include "UUI_BP_RotateActorPanel_C.hpp"
#include "UUI_BP_SparkleBurst_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UUserWidget.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_AvatarCreator_C::AvatarPresetDefinitionsMapToStringMaps() {}
void UUI_BP_AvatarCreator_C::SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_5() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_5"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_5 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_5 params{};
    ProcessEvent(func, &params);
}
UUI_BP_AvatarCreator_C* UUI_BP_AvatarCreator_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C");
    return (UUI_BP_AvatarCreator_C*)res;
}
void UUI_BP_AvatarCreator_C::SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_9() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_9"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_9 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_9 params{};
    ProcessEvent(func, &params);
}
TArray<FString> UUI_BP_AvatarCreator_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue) {}
void UUI_BP_AvatarCreator_C::SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_8() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_8"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_8 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_8 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::OnOutroStarted(int32_t OutroType, float OutroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.OnOutroStarted"));
    struct Params_OnOutroStarted {
        int32_t OutroType; // 0x0
        float OutroDuration; // 0x4
    }; // Size: 0x8
    Params_OnOutroStarted params{};
    params.OutroType = (int32_t)OutroType;
    params.OutroDuration = (float)OutroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_7() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_7"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_7 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_7 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_6() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_6"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_6 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_6 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::PresetButtonClicked(UObject* Caller, FString String) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.PresetButtonClicked"));
    struct Params_PresetButtonClicked {
        UObject* Caller; // 0x0
        FString String; // 0x8
    }; // Size: 0x18
    Params_PresetButtonClicked params{};
    params.Caller = (UObject*)Caller;
    params.String = (FString)String;
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_4() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_4"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_4 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_4 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_3() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_3"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_3 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_3 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_2() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_2"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_2 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_2 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_1() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_1"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_1 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_1 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::WidgetAnimationEvt_avatarCreated_K2Node_WidgetAnimationEvent_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.WidgetAnimationEvt_avatarCreated_K2Node_WidgetAnimationEvent_0"));
    struct Params_WidgetAnimationEvt_avatarCreated_K2Node_WidgetAnimationEvent_0 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_avatarCreated_K2Node_WidgetAnimationEvent_0 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_0"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_0 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_AvatarCreator_0 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::PlayBurst1() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.PlayBurst1"));
    struct Params_PlayBurst1 {
    }; // Size: 0x0
    Params_PlayBurst1 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::Show_Avatar_Creator_If_Ready(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.Show Avatar Creator If Ready"));
    struct Params_Show_Avatar_Creator_If_Ready {
        bool CallFunc_Not_PreBool_ReturnValue; // 0x0
        bool CallFunc_BooleanAND_ReturnValue; // 0x1
        bool CallFunc_BooleanAND_ReturnValue_1; // 0x2
    }; // Size: 0x3
    Params_Show_Avatar_Creator_If_Ready params{};
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue_1 = (bool)CallFunc_BooleanAND_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::Initial_Character_Loaded() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.Initial Character Loaded"));
    struct Params_Initial_Character_Loaded {
    }; // Size: 0x0
    Params_Initial_Character_Loaded params{};
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::PlayLetterBurst1() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.PlayLetterBurst1"));
    struct Params_PlayLetterBurst1 {
    }; // Size: 0x0
    Params_PlayLetterBurst1 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::WidgetAnimationEvt_fadeToIntro_K2Node_WidgetAnimationEvent_2() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.WidgetAnimationEvt_fadeToIntro_K2Node_WidgetAnimationEvent_2"));
    struct Params_WidgetAnimationEvt_fadeToIntro_K2Node_WidgetAnimationEvent_2 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_fadeToIntro_K2Node_WidgetAnimationEvent_2 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::SetScreenLegend(TArray<FLegendItemData> TempLegendItems, FLegendItemData K2Node_MakeStruct_LegendItemData, ULegendItem* CallFunc_GetLegendItem_ReturnValue, FLegendItemData K2Node_MakeStruct_LegendItemData_1, ULegendItem* CallFunc_GetLegendItem_ReturnValue_1, ULegendItem* CallFunc_GetLegendItem_ReturnValue_2, ULegendItem* CallFunc_GetLegendItem_ReturnValue_3, FLegendItemData K2Node_MakeStruct_LegendItemData_2, FLegendItemData K2Node_MakeStruct_LegendItemData_3, TArray<FLegendItemData>& K2Node_MakeArray_Array) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.SetScreenLegend"));
    struct Params_SetScreenLegend {
        TArray<FLegendItemData> TempLegendItems; // 0x0
        FLegendItemData K2Node_MakeStruct_LegendItemData; // 0x10
        ULegendItem* CallFunc_GetLegendItem_ReturnValue; // 0x40
        FLegendItemData K2Node_MakeStruct_LegendItemData_1; // 0x48
        ULegendItem* CallFunc_GetLegendItem_ReturnValue_1; // 0x78
        ULegendItem* CallFunc_GetLegendItem_ReturnValue_2; // 0x80
        ULegendItem* CallFunc_GetLegendItem_ReturnValue_3; // 0x88
        FLegendItemData K2Node_MakeStruct_LegendItemData_2; // 0x90
        FLegendItemData K2Node_MakeStruct_LegendItemData_3; // 0xc0
        TArray<FLegendItemData> K2Node_MakeArray_Array; // 0xf0
    }; // Size: 0x100
    Params_SetScreenLegend params{};
    params.TempLegendItems = (TArray<FLegendItemData>)TempLegendItems;
    params.K2Node_MakeStruct_LegendItemData = (FLegendItemData)K2Node_MakeStruct_LegendItemData;
    params.CallFunc_GetLegendItem_ReturnValue = (ULegendItem*)CallFunc_GetLegendItem_ReturnValue;
    params.K2Node_MakeStruct_LegendItemData_1 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_1;
    params.CallFunc_GetLegendItem_ReturnValue_1 = (ULegendItem*)CallFunc_GetLegendItem_ReturnValue_1;
    params.CallFunc_GetLegendItem_ReturnValue_2 = (ULegendItem*)CallFunc_GetLegendItem_ReturnValue_2;
    params.CallFunc_GetLegendItem_ReturnValue_3 = (ULegendItem*)CallFunc_GetLegendItem_ReturnValue_3;
    params.K2Node_MakeStruct_LegendItemData_2 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_2;
    params.K2Node_MakeStruct_LegendItemData_3 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_3;
    params.K2Node_MakeArray_Array = (TArray<FLegendItemData>)K2Node_MakeArray_Array;
    ProcessEvent(func, &params);
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
}
void UUI_BP_AvatarCreator_C::OnTabIconsLoaded(bool CallFunc_Not_PreBool_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.OnTabIconsLoaded"));
    struct Params_OnTabIconsLoaded {
        bool CallFunc_Not_PreBool_ReturnValue; // 0x0
    }; // Size: 0x1
    Params_OnTabIconsLoaded params{};
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::ValidatePlayerName(bool CheckProfanity, FString FirstName, FString lastName, bool& IsValidName, FString ReplaceChars, FString ConcatName, FString CallFunc_TrimTrailing_ReturnValue, FString CallFunc_TrimTrailing_ReturnValue_1, int32_t CallFunc_Len_ReturnValue, int32_t CallFunc_Len_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_ContainsBannedWord_ContainsBanned, bool CallFunc_ContainsBannedWord_ContainsBanned_1, bool CallFunc_ContainsBannedWord_ContainsBanned_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.ValidatePlayerName"));
    struct Params_ValidatePlayerName {
        bool CheckProfanity; // 0x0
        char pad_1[0x7];
        FString FirstName; // 0x8
        FString lastName; // 0x18
        bool IsValidName; // 0x28
        char pad_29[0x7];
        FString ReplaceChars; // 0x30
        FString ConcatName; // 0x40
        FString CallFunc_TrimTrailing_ReturnValue; // 0x50
        FString CallFunc_TrimTrailing_ReturnValue_1; // 0x60
        int32_t CallFunc_Len_ReturnValue; // 0x70
        int32_t CallFunc_Len_ReturnValue_1; // 0x74
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x78
        bool CallFunc_Greater_IntInt_ReturnValue_1; // 0x79
        bool CallFunc_BooleanAND_ReturnValue; // 0x7a
        char pad_7b[0x5];
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x80
        FString CallFunc_Concat_StrStr_ReturnValue_1; // 0x90
        bool CallFunc_ContainsBannedWord_ContainsBanned; // 0xa0
        bool CallFunc_ContainsBannedWord_ContainsBanned_1; // 0xa1
        bool CallFunc_ContainsBannedWord_ContainsBanned_2; // 0xa2
        bool CallFunc_BooleanOR_ReturnValue; // 0xa3
        bool CallFunc_BooleanOR_ReturnValue_1; // 0xa4
    }; // Size: 0xa5
    Params_ValidatePlayerName params{};
    params.CheckProfanity = (bool)CheckProfanity;
    params.FirstName = (FString)FirstName;
    params.lastName = (FString)lastName;
    params.IsValidName = (bool)IsValidName;
    params.ReplaceChars = (FString)ReplaceChars;
    params.ConcatName = (FString)ConcatName;
    params.CallFunc_TrimTrailing_ReturnValue = (FString)CallFunc_TrimTrailing_ReturnValue;
    params.CallFunc_TrimTrailing_ReturnValue_1 = (FString)CallFunc_TrimTrailing_ReturnValue_1;
    params.CallFunc_Len_ReturnValue = (int32_t)CallFunc_Len_ReturnValue;
    params.CallFunc_Len_ReturnValue_1 = (int32_t)CallFunc_Len_ReturnValue_1;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_Greater_IntInt_ReturnValue_1 = (bool)CallFunc_Greater_IntInt_ReturnValue_1;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue_1 = (FString)CallFunc_Concat_StrStr_ReturnValue_1;
    params.CallFunc_ContainsBannedWord_ContainsBanned = (bool)CallFunc_ContainsBannedWord_ContainsBanned;
    params.CallFunc_ContainsBannedWord_ContainsBanned_1 = (bool)CallFunc_ContainsBannedWord_ContainsBanned_1;
    params.CallFunc_ContainsBannedWord_ContainsBanned_2 = (bool)CallFunc_ContainsBannedWord_ContainsBanned_2;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue_1 = (bool)CallFunc_BooleanOR_ReturnValue_1;
    ProcessEvent(func, &params);
    IsValidName = params.IsValidName;
}
void UUI_BP_AvatarCreator_C::GoToPage(int32_t PageIndex, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_GoToCategory_CategoryChanged) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.GoToPage"));
    struct Params_GoToPage {
        int32_t PageIndex; // 0x0
        bool CallFunc_NotEqual_IntInt_ReturnValue; // 0x4
        bool CallFunc_GoToCategory_CategoryChanged; // 0x5
    }; // Size: 0x6
    Params_GoToPage params{};
    params.PageIndex = (int32_t)PageIndex;
    params.CallFunc_NotEqual_IntInt_ReturnValue = (bool)CallFunc_NotEqual_IntInt_ReturnValue;
    params.CallFunc_GoToCategory_CategoryChanged = (bool)CallFunc_GoToCategory_CategoryChanged;
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::AdjustForViewportWidth(float IdealWidth, float CurrentRatio, float CurrentWidth, float IdealRatio, FMargin K2Node_MakeStruct_Margin, FMargin K2Node_MakeStruct_Margin_1, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, USizeBoxSlot* CallFunc_SlotAsSizeBoxSlot_ReturnValue, float K2Node_MathExpression_ReturnValue, FMargin K2Node_MakeStruct_Margin_2, FMargin K2Node_MakeStruct_Margin_3, float K2Node_MathExpression_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, FVector2D CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.AdjustForViewportWidth"));
    struct Params_AdjustForViewportWidth {
        float IdealWidth; // 0x0
        float CurrentRatio; // 0x4
        float CurrentWidth; // 0x8
        float IdealRatio; // 0xc
        FMargin K2Node_MakeStruct_Margin; // 0x10
        FMargin K2Node_MakeStruct_Margin_1; // 0x20
        UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue; // 0x30
        USizeBoxSlot* CallFunc_SlotAsSizeBoxSlot_ReturnValue; // 0x38
        float K2Node_MathExpression_ReturnValue; // 0x40
        FMargin K2Node_MakeStruct_Margin_2; // 0x44
        FMargin K2Node_MakeStruct_Margin_3; // 0x54
        float K2Node_MathExpression_ReturnValue_1; // 0x64
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x68
        char pad_69[0x3];
        FVector2D CallFunc_GetViewportSize_ReturnValue; // 0x6c
        float CallFunc_BreakVector2D_X; // 0x74
        float CallFunc_BreakVector2D_Y; // 0x78
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0x7c
    }; // Size: 0x80
    Params_AdjustForViewportWidth params{};
    params.IdealWidth = (float)IdealWidth;
    params.CurrentRatio = (float)CurrentRatio;
    params.CurrentWidth = (float)CurrentWidth;
    params.IdealRatio = (float)IdealRatio;
    params.K2Node_MakeStruct_Margin = (FMargin)K2Node_MakeStruct_Margin;
    params.K2Node_MakeStruct_Margin_1 = (FMargin)K2Node_MakeStruct_Margin_1;
    params.CallFunc_SlotAsCanvasSlot_ReturnValue = (UCanvasPanelSlot*)CallFunc_SlotAsCanvasSlot_ReturnValue;
    params.CallFunc_SlotAsSizeBoxSlot_ReturnValue = (USizeBoxSlot*)CallFunc_SlotAsSizeBoxSlot_ReturnValue;
    params.K2Node_MathExpression_ReturnValue = (float)K2Node_MathExpression_ReturnValue;
    params.K2Node_MakeStruct_Margin_2 = (FMargin)K2Node_MakeStruct_Margin_2;
    params.K2Node_MakeStruct_Margin_3 = (FMargin)K2Node_MakeStruct_Margin_3;
    params.K2Node_MathExpression_ReturnValue_1 = (float)K2Node_MathExpression_ReturnValue_1;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    params.CallFunc_GetViewportSize_ReturnValue = (FVector2D)CallFunc_GetViewportSize_ReturnValue;
    params.CallFunc_BreakVector2D_X = (float)CallFunc_BreakVector2D_X;
    params.CallFunc_BreakVector2D_Y = (float)CallFunc_BreakVector2D_Y;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::CreatorSliderHovered() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.CreatorSliderHovered"));
    struct Params_CreatorSliderHovered {
    }; // Size: 0x0
    Params_CreatorSliderHovered params{};
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::CreatorItemUnhovered() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.CreatorItemUnhovered"));
    struct Params_CreatorItemUnhovered {
    }; // Size: 0x0
    Params_CreatorItemUnhovered params{};
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::BndEvt__UI_BP_AvatarCreator_FinalizedButton_K2Node_ComponentBoundEvent_14_MenuTextButtonUnhovered__DelegateSignature(UUI_BP_MenuFinalized_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.BndEvt__UI_BP_AvatarCreator_FinalizedButton_K2Node_ComponentBoundEvent_14_MenuTextButtonUnhovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_AvatarCreator_FinalizedButton_K2Node_ComponentBoundEvent_14_MenuTextButtonUnhovered__DelegateSignature {
        UUI_BP_MenuFinalized_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_AvatarCreator_FinalizedButton_K2Node_ComponentBoundEvent_14_MenuTextButtonUnhovered__DelegateSignature params{};
    params.Button = (UUI_BP_MenuFinalized_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::PlayLetterBurst2() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.PlayLetterBurst2"));
    struct Params_PlayLetterBurst2 {
    }; // Size: 0x0
    Params_PlayLetterBurst2 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::CreatorItemHovered() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.CreatorItemHovered"));
    struct Params_CreatorItemHovered {
    }; // Size: 0x0
    Params_CreatorItemHovered params{};
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::RefreshTitleKey(FString CallFunc_Array_Get_Item) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.RefreshTitleKey"));
    struct Params_RefreshTitleKey {
        FString CallFunc_Array_Get_Item; // 0x0
    }; // Size: 0x10
    Params_RefreshTitleKey params{};
    params.CallFunc_Array_Get_Item = (FString)CallFunc_Array_Get_Item;
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::RequestCameraPositionChange(int32_t CameraIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.RequestCameraPositionChange"));
    struct Params_RequestCameraPositionChange {
        int32_t CameraIndex; // 0x0
    }; // Size: 0x4
    Params_RequestCameraPositionChange params{};
    params.CameraIndex = (int32_t)CameraIndex;
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::UpdateCurrentPreset(EAvatarPresetType PresetType, FName PresetId) {}
void UUI_BP_AvatarCreator_C::UpdatePreviewActorGear(FString GearID, EGearSlotIDEnum Slot, bool CallFunc_NotEqual_StrStr_ReturnValue, UGearManager* CallFunc_Get_ReturnValue, bool CallFunc_EditorClearSlot_ReturnValue) {}
bool UUI_BP_AvatarCreator_C::BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, UAvatarCreatorPage* K2Node_DynamicCast_AsAvatar_Creator_Page, bool K2Node_DynamicCast_bSuccess) {}
void UUI_BP_AvatarCreator_C::OnIntroStarted(int32_t IntroType, float IntroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.OnIntroStarted"));
    struct Params_OnIntroStarted {
        int32_t IntroType; // 0x0
        float IntroDuration; // 0x4
    }; // Size: 0x8
    Params_OnIntroStarted params{};
    params.IntroType = (int32_t)IntroType;
    params.IntroDuration = (float)IntroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::SelectDefaultUniform() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.SelectDefaultUniform"));
    struct Params_SelectDefaultUniform {
    }; // Size: 0x0
    Params_SelectDefaultUniform params{};
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::FinalizeClicked(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.FinalizeClicked"));
    struct Params_FinalizeClicked {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_FinalizeClicked params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::Set_Character_Model(bool& Success, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, EGenderEnum Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue_1, EGenderEnum Temp_byte_Variable_1, TArray<AActor*>& CallFunc_GetAllActorsWithTag_OutActors, AActor* CallFunc_Array_Get_Item, AUI_BP_DummyActor_C* K2Node_DynamicCast_AsUI_BP_Dummy_Actor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.Set Character Model"));
    struct Params_Set_Character_Model {
        bool Success; // 0x0
        char pad_1[0x3];
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x4
        bool CallFunc_IsValid_ReturnValue; // 0x10
        char pad_11[0x3];
        FVector CallFunc_MakeVector_ReturnValue; // 0x14
        FVector CallFunc_Add_VectorVector_ReturnValue; // 0x20
        EGenderEnum Temp_byte_Variable; // 0x2c
        bool CallFunc_IsValid_ReturnValue_1; // 0x2d
        EGenderEnum Temp_byte_Variable_1; // 0x2e
        char pad_2f[0x1];
        TArray<AActor*> CallFunc_GetAllActorsWithTag_OutActors; // 0x30
        AActor* CallFunc_Array_Get_Item; // 0x40
        AUI_BP_DummyActor_C* K2Node_DynamicCast_AsUI_BP_Dummy_Actor; // 0x48
        bool K2Node_DynamicCast_bSuccess; // 0x50
        bool CallFunc_Array_IsValidIndex_ReturnValue; // 0x51
    }; // Size: 0x52
    Params_Set_Character_Model params{};
    params.Success = (bool)Success;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_MakeVector_ReturnValue = (FVector)CallFunc_MakeVector_ReturnValue;
    params.CallFunc_Add_VectorVector_ReturnValue = (FVector)CallFunc_Add_VectorVector_ReturnValue;
    params.Temp_byte_Variable = (EGenderEnum)Temp_byte_Variable;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.Temp_byte_Variable_1 = (EGenderEnum)Temp_byte_Variable_1;
    params.CallFunc_GetAllActorsWithTag_OutActors = (TArray<AActor*>)CallFunc_GetAllActorsWithTag_OutActors;
    params.CallFunc_Array_Get_Item = (AActor*)CallFunc_Array_Get_Item;
    params.K2Node_DynamicCast_AsUI_BP_Dummy_Actor = (AUI_BP_DummyActor_C*)K2Node_DynamicCast_AsUI_BP_Dummy_Actor;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_Array_IsValidIndex_ReturnValue = (bool)CallFunc_Array_IsValidIndex_ReturnValue;
    ProcessEvent(func, &params);
    Success = params.Success;
    CallFunc_GetAllActorsWithTag_OutActors = params.CallFunc_GetAllActorsWithTag_OutActors;
}
void UUI_BP_AvatarCreator_C::GetActiveFullbody(EGenderEnum Gender, FName& CurrentFullbody, bool K2Node_SwitchEnum_CmpSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.GetActiveFullbody"));
    struct Params_GetActiveFullbody {
        EGenderEnum Gender; // 0x0
        char pad_1[0x3];
        FName CurrentFullbody; // 0x4
        bool K2Node_SwitchEnum_CmpSuccess; // 0xc
    }; // Size: 0xd
    Params_GetActiveFullbody params{};
    params.Gender = (EGenderEnum)Gender;
    params.CurrentFullbody = (FName)CurrentFullbody;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    ProcessEvent(func, &params);
    CurrentFullbody = params.CurrentFullbody;
}
void UUI_BP_AvatarCreator_C::GetActivePresets(EGenderEnum Gender) {}
void UUI_BP_AvatarCreator_C::OnPresetSelected(EAvatarPresetType PresetType, FString PrestName, FName CallFunc_Conv_StringToName_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.OnPresetSelected"));
    struct Params_OnPresetSelected {
        EAvatarPresetType PresetType; // 0x0
        char pad_1[0x7];
        FString PrestName; // 0x8
        FName CallFunc_Conv_StringToName_ReturnValue; // 0x18
    }; // Size: 0x20
    Params_OnPresetSelected params{};
    params.PresetType = (EAvatarPresetType)PresetType;
    params.PrestName = (FString)PrestName;
    params.CallFunc_Conv_StringToName_ReturnValue = (FName)CallFunc_Conv_StringToName_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::ChildPageLoaded(UAsyncLoadWrapper* Child) {}
void UUI_BP_AvatarCreator_C::UpdateChildPages(bool ShouldRefreshIcons) {}
void UUI_BP_AvatarCreator_C::On_Body_Type_Selected(FString FullBodyPreset, EGenderEnum OldGenderRig, int32_t Temp_int_Variable, FName CallFunc_Conv_StringToName_ReturnValue, EGenderEnum CallFunc_GetFullBodyPreset_OutGender) {}
void UUI_BP_AvatarCreator_C::DifficultyButtonClicked(UObject* Caller, int32_t int) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.DifficultyButtonClicked"));
    struct Params_DifficultyButtonClicked {
        UObject* Caller; // 0x0
        int32_t int; // 0x8
    }; // Size: 0xc
    Params_DifficultyButtonClicked params{};
    params.Caller = (UObject*)Caller;
    params.int = (int32_t)int;
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::UpdateCurrentFullBodyPreset(FName FullBodyID, EGenderEnum CallFunc_GetFullBodyPreset_OutGender) {}
void UUI_BP_AvatarCreator_C::UpdatePreviewActorFullBody(FName FullBodyPreset) {}
void UUI_BP_AvatarCreator_C::GenderButtonClicked(UObject* Caller, FString String) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.GenderButtonClicked"));
    struct Params_GenderButtonClicked {
        UObject* Caller; // 0x0
        FString String; // 0x8
    }; // Size: 0x18
    Params_GenderButtonClicked params{};
    params.Caller = (UObject*)Caller;
    params.String = (FString)String;
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::UpdatePreviewActor(EAvatarPresetType PresetType, FName PresetName) {}
void UUI_BP_AvatarCreator_C::UpdatePreviewActorGender(EGenderEnum Gender, FName CallFunc_GetActiveFullbody_CurrentFullbody) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.UpdatePreviewActorGender"));
    struct Params_UpdatePreviewActorGender {
        EGenderEnum Gender; // 0x0
        char pad_1[0x3];
        FName CallFunc_GetActiveFullbody_CurrentFullbody; // 0x4
    }; // Size: 0xc
    Params_UpdatePreviewActorGender params{};
    params.Gender = (EGenderEnum)Gender;
    params.CallFunc_GetActiveFullbody_CurrentFullbody = (FName)CallFunc_GetActiveFullbody_CurrentFullbody;
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::OnCharacterLoaded(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.OnCharacterLoaded"));
    struct Params_OnCharacterLoaded {
        AActor* Actor; // 0x0
    }; // Size: 0x8
    Params_OnCharacterLoaded params{};
    params.Actor = (AActor*)Actor;
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::VoiceToneSelected(UObject* Caller, int32_t int) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.VoiceToneSelected"));
    struct Params_VoiceToneSelected {
        UObject* Caller; // 0x0
        int32_t int; // 0x8
    }; // Size: 0xc
    Params_VoiceToneSelected params{};
    params.Caller = (UObject*)Caller;
    params.int = (int32_t)int;
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::InitializePresetMaps() {}
void UUI_BP_AvatarCreator_C::ExecuteUbergraph_UI_BP_AvatarCreator(int32_t EntryPoint, EGenderVoice Temp_byte_Variable) {}
void UUI_BP_AvatarCreator_C::CategorySwitch(int32_t NewIndex, int32_t Temp_int_Variable, bool CallFunc_NotEqual_IntInt_ReturnValue, int32_t Temp_int_Variable_1, int32_t Temp_int_Variable_2, int32_t Temp_int_Variable_3, int32_t Temp_int_Variable_4, int32_t Temp_int_Variable_5, int32_t Temp_int_Variable_6, int32_t Temp_int_Variable_7, int32_t Temp_int_Variable_8, int32_t Temp_int_Variable_9, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32_t K2Node_Select_Default, int32_t Temp_int_Variable_10, EGenderEnum Temp_byte_Variable, int32_t K2Node_Select_Default_1, int32_t CallFunc_Add_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.CategorySwitch"));
    struct Params_CategorySwitch {
        int32_t NewIndex; // 0x0
        int32_t Temp_int_Variable; // 0x4
        bool CallFunc_NotEqual_IntInt_ReturnValue; // 0x8
        char pad_9[0x3];
        int32_t Temp_int_Variable_1; // 0xc
        int32_t Temp_int_Variable_2; // 0x10
        int32_t Temp_int_Variable_3; // 0x14
        int32_t Temp_int_Variable_4; // 0x18
        int32_t Temp_int_Variable_5; // 0x1c
        int32_t Temp_int_Variable_6; // 0x20
        int32_t Temp_int_Variable_7; // 0x24
        int32_t Temp_int_Variable_8; // 0x28
        int32_t Temp_int_Variable_9; // 0x2c
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x30
        bool CallFunc_BooleanAND_ReturnValue; // 0x34
        char pad_35[0x3];
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x38
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x40
        int32_t K2Node_Select_Default; // 0x48
        int32_t Temp_int_Variable_10; // 0x4c
        EGenderEnum Temp_byte_Variable; // 0x50
        char pad_51[0x3];
        int32_t K2Node_Select_Default_1; // 0x54
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x58
    }; // Size: 0x5c
    Params_CategorySwitch params{};
    params.NewIndex = (int32_t)NewIndex;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_NotEqual_IntInt_ReturnValue = (bool)CallFunc_NotEqual_IntInt_ReturnValue;
    params.Temp_int_Variable_1 = (int32_t)Temp_int_Variable_1;
    params.Temp_int_Variable_2 = (int32_t)Temp_int_Variable_2;
    params.Temp_int_Variable_3 = (int32_t)Temp_int_Variable_3;
    params.Temp_int_Variable_4 = (int32_t)Temp_int_Variable_4;
    params.Temp_int_Variable_5 = (int32_t)Temp_int_Variable_5;
    params.Temp_int_Variable_6 = (int32_t)Temp_int_Variable_6;
    params.Temp_int_Variable_7 = (int32_t)Temp_int_Variable_7;
    params.Temp_int_Variable_8 = (int32_t)Temp_int_Variable_8;
    params.Temp_int_Variable_9 = (int32_t)Temp_int_Variable_9;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    params.K2Node_Select_Default = (int32_t)K2Node_Select_Default;
    params.Temp_int_Variable_10 = (int32_t)Temp_int_Variable_10;
    params.Temp_byte_Variable = (EGenderEnum)Temp_byte_Variable;
    params.K2Node_Select_Default_1 = (int32_t)K2Node_Select_Default_1;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::FinalizeCharacter(FString PlayerFirstName, FString PlayerLastName, EGenderEnum Temp_byte_Variable, FString CallFunc_Concat_StrStr_ReturnValue, FString Temp_string_Variable, FString CallFunc_Concat_StrStr_ReturnValue_1, FString Temp_string_Variable_1, FString Temp_string_Variable_2, int32_t Temp_int_Array_Index_Variable, bool CallFunc_SaveCurrentVoicePitch_ReturnValue, FString Temp_string_Variable_3, FString Temp_string_Variable_4, EGenderVoice Temp_byte_Variable_1, FString Temp_string_Variable_5, FString K2Node_Select_Default, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, bool CallFunc_SetCurrentGameDifficulty_ReturnValue, FString Temp_string_Variable_6, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, bool CallFunc_SetPlayerGenderVoice_ReturnValue, bool CallFunc_SetPlayerGenderPronoun_ReturnValue, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2, FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_SetPlayerSocialHeritage_ReturnValue, EGenderPronoun Temp_byte_Variable_2, UGearManager* CallFunc_Get_ReturnValue, FGearItemID CallFunc_GenerateGearAndAddToInventory_ReturnValue, FString K2Node_Select_Default_1, bool CallFunc_SetEquippedGearItemID_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, FString K2Node_Select_Default_2, UAnalyticsManager* CallFunc_Get_ReturnValue_1, FString CallFunc_GetCharacterID_ReturnValue) {}
void UUI_BP_AvatarCreator_C::BndEvt__UI_BP_AvatarCreator_creatorSwitcher_K2Node_ComponentBoundEvent_1_WidgetActiveEvent__DelegateSignature(UUserWidget* ActiveWidget) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.BndEvt__UI_BP_AvatarCreator_creatorSwitcher_K2Node_ComponentBoundEvent_1_WidgetActiveEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_AvatarCreator_creatorSwitcher_K2Node_ComponentBoundEvent_1_WidgetActiveEvent__DelegateSignature {
        UUserWidget* ActiveWidget; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_AvatarCreator_creatorSwitcher_K2Node_ComponentBoundEvent_1_WidgetActiveEvent__DelegateSignature params{};
    params.ActiveWidget = (UUserWidget*)ActiveWidget;
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::WidgetSwitch() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.WidgetSwitch"));
    struct Params_WidgetSwitch {
    }; // Size: 0x0
    Params_WidgetSwitch params{};
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::VoicePitchChanged(UObject* Caller, int32_t int) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.VoicePitchChanged"));
    struct Params_VoicePitchChanged {
        UObject* Caller; // 0x0
        int32_t int; // 0x8
    }; // Size: 0xc
    Params_VoicePitchChanged params{};
    params.Caller = (UObject*)Caller;
    params.int = (int32_t)int;
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::PlayBurst2() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.PlayBurst2"));
    struct Params_PlayBurst2 {
    }; // Size: 0x0
    Params_PlayBurst2 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::ShowCharacterCreator() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.ShowCharacterCreator"));
    struct Params_ShowCharacterCreator {
    }; // Size: 0x0
    Params_ShowCharacterCreator params{};
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::LetterHideComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.LetterHideComplete"));
    struct Params_LetterHideComplete {
    }; // Size: 0x0
    Params_LetterHideComplete params{};
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::FirstNameChanged(UObject* Caller, FString String) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.FirstNameChanged"));
    struct Params_FirstNameChanged {
        UObject* Caller; // 0x0
        FString String; // 0x8
    }; // Size: 0x18
    Params_FirstNameChanged params{};
    params.Caller = (UObject*)Caller;
    params.String = (FString)String;
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::LetterRevealComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.LetterRevealComplete"));
    struct Params_LetterRevealComplete {
    }; // Size: 0x0
    Params_LetterRevealComplete params{};
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::BodyButtonClicked(UObject* Caller, FString String) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.BodyButtonClicked"));
    struct Params_BodyButtonClicked {
        UObject* Caller; // 0x0
        FString String; // 0x8
    }; // Size: 0x18
    Params_BodyButtonClicked params{};
    params.Caller = (UObject*)Caller;
    params.String = (FString)String;
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::GlassesButtonClicked(UObject* Caller, FString String) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.GlassesButtonClicked"));
    struct Params_GlassesButtonClicked {
        UObject* Caller; // 0x0
        FString String; // 0x8
    }; // Size: 0x18
    Params_GlassesButtonClicked params{};
    params.Caller = (UObject*)Caller;
    params.String = (FString)String;
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::LastNameChanged(UObject* Caller, FString String) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.LastNameChanged"));
    struct Params_LastNameChanged {
        UObject* Caller; // 0x0
        FString String; // 0x8
    }; // Size: 0x18
    Params_LastNameChanged params{};
    params.Caller = (UObject*)Caller;
    params.String = (FString)String;
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::BndEvt__UI_BP_AvatarCreator_NavBarHorizontal_K2Node_ComponentBoundEvent_0_ChangedCategory__DelegateSignature(int32_t NewCategoryIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.BndEvt__UI_BP_AvatarCreator_NavBarHorizontal_K2Node_ComponentBoundEvent_0_ChangedCategory__DelegateSignature"));
    struct Params_BndEvt__UI_BP_AvatarCreator_NavBarHorizontal_K2Node_ComponentBoundEvent_0_ChangedCategory__DelegateSignature {
        int32_t NewCategoryIndex; // 0x0
    }; // Size: 0x4
    Params_BndEvt__UI_BP_AvatarCreator_NavBarHorizontal_K2Node_ComponentBoundEvent_0_ChangedCategory__DelegateSignature params{};
    params.NewCategoryIndex = (int32_t)NewCategoryIndex;
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::BndEvt__UI_BP_AvatarCreator_AsyncBody_K2Node_ComponentBoundEvent_2_AsyncWrapperClassLoadEvent__DelegateSignature(UAsyncLoadWrapper* SelfReference) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.BndEvt__UI_BP_AvatarCreator_AsyncBody_K2Node_ComponentBoundEvent_2_AsyncWrapperClassLoadEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_AvatarCreator_AsyncBody_K2Node_ComponentBoundEvent_2_AsyncWrapperClassLoadEvent__DelegateSignature {
        UAsyncLoadWrapper* SelfReference; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_AvatarCreator_AsyncBody_K2Node_ComponentBoundEvent_2_AsyncWrapperClassLoadEvent__DelegateSignature params{};
    params.SelfReference = (UAsyncLoadWrapper*)SelfReference;
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::BndEvt__UI_BP_AvatarCreator_AsyncComplexion_K2Node_ComponentBoundEvent_3_AsyncWrapperClassLoadEvent__DelegateSignature(UAsyncLoadWrapper* SelfReference) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.BndEvt__UI_BP_AvatarCreator_AsyncComplexion_K2Node_ComponentBoundEvent_3_AsyncWrapperClassLoadEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_AvatarCreator_AsyncComplexion_K2Node_ComponentBoundEvent_3_AsyncWrapperClassLoadEvent__DelegateSignature {
        UAsyncLoadWrapper* SelfReference; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_AvatarCreator_AsyncComplexion_K2Node_ComponentBoundEvent_3_AsyncWrapperClassLoadEvent__DelegateSignature params{};
    params.SelfReference = (UAsyncLoadWrapper*)SelfReference;
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::BndEvt__UI_BP_AvatarCreator_AsyncEyebrows_K2Node_ComponentBoundEvent_4_AsyncWrapperClassLoadEvent__DelegateSignature(UAsyncLoadWrapper* SelfReference) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.BndEvt__UI_BP_AvatarCreator_AsyncEyebrows_K2Node_ComponentBoundEvent_4_AsyncWrapperClassLoadEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_AvatarCreator_AsyncEyebrows_K2Node_ComponentBoundEvent_4_AsyncWrapperClassLoadEvent__DelegateSignature {
        UAsyncLoadWrapper* SelfReference; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_AvatarCreator_AsyncEyebrows_K2Node_ComponentBoundEvent_4_AsyncWrapperClassLoadEvent__DelegateSignature params{};
    params.SelfReference = (UAsyncLoadWrapper*)SelfReference;
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::BndEvt__UI_BP_AvatarCreator_AsyncFace_K2Node_ComponentBoundEvent_5_AsyncWrapperClassLoadEvent__DelegateSignature(UAsyncLoadWrapper* SelfReference) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.BndEvt__UI_BP_AvatarCreator_AsyncFace_K2Node_ComponentBoundEvent_5_AsyncWrapperClassLoadEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_AvatarCreator_AsyncFace_K2Node_ComponentBoundEvent_5_AsyncWrapperClassLoadEvent__DelegateSignature {
        UAsyncLoadWrapper* SelfReference; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_AvatarCreator_AsyncFace_K2Node_ComponentBoundEvent_5_AsyncWrapperClassLoadEvent__DelegateSignature params{};
    params.SelfReference = (UAsyncLoadWrapper*)SelfReference;
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::OnCharacterLoadComplete(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.OnCharacterLoadComplete"));
    struct Params_OnCharacterLoadComplete {
        AActor* Actor; // 0x0
    }; // Size: 0x8
    Params_OnCharacterLoadComplete params{};
    params.Actor = (AActor*)Actor;
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::BndEvt__UI_BP_AvatarCreator_AsyncHair_K2Node_ComponentBoundEvent_6_AsyncWrapperClassLoadEvent__DelegateSignature(UAsyncLoadWrapper* SelfReference) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.BndEvt__UI_BP_AvatarCreator_AsyncHair_K2Node_ComponentBoundEvent_6_AsyncWrapperClassLoadEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_AvatarCreator_AsyncHair_K2Node_ComponentBoundEvent_6_AsyncWrapperClassLoadEvent__DelegateSignature {
        UAsyncLoadWrapper* SelfReference; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_AvatarCreator_AsyncHair_K2Node_ComponentBoundEvent_6_AsyncWrapperClassLoadEvent__DelegateSignature params{};
    params.SelfReference = (UAsyncLoadWrapper*)SelfReference;
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::BndEvt__UI_BP_AvatarCreator_AsyncVoice_K2Node_ComponentBoundEvent_7_AsyncWrapperClassLoadEvent__DelegateSignature(UAsyncLoadWrapper* SelfReference) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.BndEvt__UI_BP_AvatarCreator_AsyncVoice_K2Node_ComponentBoundEvent_7_AsyncWrapperClassLoadEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_AvatarCreator_AsyncVoice_K2Node_ComponentBoundEvent_7_AsyncWrapperClassLoadEvent__DelegateSignature {
        UAsyncLoadWrapper* SelfReference; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_AvatarCreator_AsyncVoice_K2Node_ComponentBoundEvent_7_AsyncWrapperClassLoadEvent__DelegateSignature params{};
    params.SelfReference = (UAsyncLoadWrapper*)SelfReference;
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::BndEvt__UI_BP_AvatarCreator_NavBarHorizontal_K2Node_ComponentBoundEvent_8_HoveredCategory__DelegateSignature(int32_t ButtonIndex, UIconButtonWidget* CategoryButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.BndEvt__UI_BP_AvatarCreator_NavBarHorizontal_K2Node_ComponentBoundEvent_8_HoveredCategory__DelegateSignature"));
    struct Params_BndEvt__UI_BP_AvatarCreator_NavBarHorizontal_K2Node_ComponentBoundEvent_8_HoveredCategory__DelegateSignature {
        int32_t ButtonIndex; // 0x0
        char pad_4[0x4];
        UIconButtonWidget* CategoryButton; // 0x8
    }; // Size: 0x10
    Params_BndEvt__UI_BP_AvatarCreator_NavBarHorizontal_K2Node_ComponentBoundEvent_8_HoveredCategory__DelegateSignature params{};
    params.ButtonIndex = (int32_t)ButtonIndex;
    params.CategoryButton = (UIconButtonWidget*)CategoryButton;
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::BndEvt__UI_BP_AvatarCreator_NavBarHorizontal_K2Node_ComponentBoundEvent_9_UnhoveredCategory__DelegateSignature(int32_t Index, UIconButtonWidget* CategoryButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.BndEvt__UI_BP_AvatarCreator_NavBarHorizontal_K2Node_ComponentBoundEvent_9_UnhoveredCategory__DelegateSignature"));
    struct Params_BndEvt__UI_BP_AvatarCreator_NavBarHorizontal_K2Node_ComponentBoundEvent_9_UnhoveredCategory__DelegateSignature {
        int32_t Index; // 0x0
        char pad_4[0x4];
        UIconButtonWidget* CategoryButton; // 0x8
    }; // Size: 0x10
    Params_BndEvt__UI_BP_AvatarCreator_NavBarHorizontal_K2Node_ComponentBoundEvent_9_UnhoveredCategory__DelegateSignature params{};
    params.Index = (int32_t)Index;
    params.CategoryButton = (UIconButtonWidget*)CategoryButton;
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::BndEvt__UI_BP_AvatarCreator_FinalizedButton_K2Node_ComponentBoundEvent_10_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuFinalized_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.BndEvt__UI_BP_AvatarCreator_FinalizedButton_K2Node_ComponentBoundEvent_10_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_AvatarCreator_FinalizedButton_K2Node_ComponentBoundEvent_10_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_MenuFinalized_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_AvatarCreator_FinalizedButton_K2Node_ComponentBoundEvent_10_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_MenuFinalized_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::BndEvt__UI_BP_AvatarCreator_FinalizePage_K2Node_ComponentBoundEvent_12_ActivateFinalizeButton__DelegateSignature(bool Activate) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.BndEvt__UI_BP_AvatarCreator_FinalizePage_K2Node_ComponentBoundEvent_12_ActivateFinalizeButton__DelegateSignature"));
    struct Params_BndEvt__UI_BP_AvatarCreator_FinalizePage_K2Node_ComponentBoundEvent_12_ActivateFinalizeButton__DelegateSignature {
        bool Activate; // 0x0
    }; // Size: 0x1
    Params_BndEvt__UI_BP_AvatarCreator_FinalizePage_K2Node_ComponentBoundEvent_12_ActivateFinalizeButton__DelegateSignature params{};
    params.Activate = (bool)Activate;
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::BndEvt__UI_BP_AvatarCreator_FinalizedButton_K2Node_ComponentBoundEvent_13_MenuTextButtonHovered__DelegateSignature(UUI_BP_MenuFinalized_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.BndEvt__UI_BP_AvatarCreator_FinalizedButton_K2Node_ComponentBoundEvent_13_MenuTextButtonHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_AvatarCreator_FinalizedButton_K2Node_ComponentBoundEvent_13_MenuTextButtonHovered__DelegateSignature {
        UUI_BP_MenuFinalized_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_AvatarCreator_FinalizedButton_K2Node_ComponentBoundEvent_13_MenuTextButtonHovered__DelegateSignature params{};
    params.Button = (UUI_BP_MenuFinalized_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::OnFullBodyPresetLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.OnFullBodyPresetLoaded"));
    struct Params_OnFullBodyPresetLoaded {
    }; // Size: 0x0
    Params_OnFullBodyPresetLoaded params{};
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::ShowLetter() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.ShowLetter"));
    struct Params_ShowLetter {
    }; // Size: 0x0
    Params_ShowLetter params{};
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::CreatorReady__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.CreatorReady__DelegateSignature"));
    struct Params_CreatorReady__DelegateSignature {
    }; // Size: 0x0
    Params_CreatorReady__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_AvatarCreator_C::FinalizeButtonPressed__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_AvatarCreator.UI_BP_AvatarCreator_C.FinalizeButtonPressed__DelegateSignature"));
    struct Params_FinalizeButtonPressed__DelegateSignature {
    }; // Size: 0x0
    Params_FinalizeButtonPressed__DelegateSignature params{};
    ProcessEvent(func, &params);
}
