#include "APlayerController.hpp"
#include "ESlateVisibility.hpp"
#include "FCompassIconStyle.hpp"
#include "FLegendItemData.hpp"
#include "FLinearColor.hpp"
#include "FMapToolTipData.hpp"
#include "FMargin.hpp"
#include "FMissionRewardData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRegionPopuplData.hpp"
#include "FTaskData.hpp"
#include "UCanvasPanel.hpp"
#include "UExperienceManager.hpp"
#include "UFunction.hpp"
#include "UHorizontalBox.hpp"
#include "UImage.hpp"
#include "ULegendItem.hpp"
#include "UMissionManager.hpp"
#include "UObject.hpp"
#include "UOverlay.hpp"
#include "UPanelSlot.hpp"
#include "UPhoenixRichTextBlock.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UScaleBox.hpp"
#include "UUI_BP_AvailableMissionNote_C.hpp"
#include "UUI_BP_Legend_Horizontal_Tooltip_C.hpp"
#include "UUI_BP_MapToolTip_C.hpp"
#include "UUI_BP_QuestObjective_C.hpp"
#include "UUI_BP_QuestReward_C.hpp"
#include "UUI_BP_QuestSpellRequirement_C.hpp"
#include "UUI_BP_RegionInfoItem_C.hpp"
#include "UVerticalBox.hpp"
#include "UVerticalBoxSlot.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_MapToolTip_C::FlipMapTooltipLeft(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Map/UI_BP_MapToolTip.UI_BP_MapToolTip_C.FlipMapTooltipLeft"));
    struct Params_FlipMapTooltipLeft {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_FlipMapTooltipLeft params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_MapToolTip_C::ResetTooltip() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Map/UI_BP_MapToolTip.UI_BP_MapToolTip_C.ResetTooltip"));
    struct Params_ResetTooltip {
    }; // Size: 0x0
    Params_ResetTooltip params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MapToolTip_C::SetItemData(TArray<FRegionPopuplData>& ItemData, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, int32_t Temp_int_Array_Index_Variable, bool CallFunc_Less_IntInt_ReturnValue, FRegionPopuplData CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue, UUI_BP_RegionInfoItem_C* CallFunc_Create_ReturnValue, UPanelSlot* CallFunc_AddChild_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Map/UI_BP_MapToolTip.UI_BP_MapToolTip_C.SetItemData"));
    struct Params_SetItemData {
        TArray<FRegionPopuplData> ItemData; // 0x0
        int32_t CallFunc_Array_Length_ReturnValue; // 0x10
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x14
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x18
        char pad_19[0x3];
        int32_t Temp_int_Loop_Counter_Variable; // 0x1c
        int32_t Temp_int_Array_Index_Variable; // 0x20
        bool CallFunc_Less_IntInt_ReturnValue; // 0x24
        char pad_25[0x3];
        FRegionPopuplData CallFunc_Array_Get_Item; // 0x28
        bool CallFunc_Greater_IntInt_ReturnValue_1; // 0x58
        char pad_59[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x5c
        APlayerController* CallFunc_GetPlayerController_ReturnValue; // 0x60
        UUI_BP_RegionInfoItem_C* CallFunc_Create_ReturnValue; // 0x68
        UPanelSlot* CallFunc_AddChild_ReturnValue; // 0x70
        int32_t CallFunc_Array_Add_ReturnValue; // 0x78
    }; // Size: 0x7c
    Params_SetItemData params{};
    params.ItemData = (TArray<FRegionPopuplData>)ItemData;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Array_Get_Item = (FRegionPopuplData)CallFunc_Array_Get_Item;
    params.CallFunc_Greater_IntInt_ReturnValue_1 = (bool)CallFunc_Greater_IntInt_ReturnValue_1;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_GetPlayerController_ReturnValue = (APlayerController*)CallFunc_GetPlayerController_ReturnValue;
    params.CallFunc_Create_ReturnValue = (UUI_BP_RegionInfoItem_C*)CallFunc_Create_ReturnValue;
    params.CallFunc_AddChild_ReturnValue = (UPanelSlot*)CallFunc_AddChild_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    ProcessEvent(func, &params);
    ItemData = params.ItemData;
}
UUI_BP_MapToolTip_C* UUI_BP_MapToolTip_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/FieldGuide/Map/UI_BP_MapToolTip.UI_BP_MapToolTip_C");
    return (UUI_BP_MapToolTip_C*)res;
}
void UUI_BP_MapToolTip_C::GetMissionLockedState(FString Prereq1, FString Prereq2, int32_t CurrentMissionLevel, bool& MeetsLockRequirements, bool IsLevelMet, bool IsPrereq2Met, bool IsPrereq1Met, bool CallFunc_BooleanOR_ReturnValue, UExperienceManager* CallFunc_Get_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, int32_t CallFunc_GetExperienceLevel_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_IsUnlocked_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue_1, bool CallFunc_IsUnlocked_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Map/UI_BP_MapToolTip.UI_BP_MapToolTip_C.GetMissionLockedState"));
    struct Params_GetMissionLockedState {
        FString Prereq1; // 0x0
        FString Prereq2; // 0x10
        int32_t CurrentMissionLevel; // 0x20
        bool MeetsLockRequirements; // 0x24
        bool IsLevelMet; // 0x25
        bool IsPrereq2Met; // 0x26
        bool IsPrereq1Met; // 0x27
        bool CallFunc_BooleanOR_ReturnValue; // 0x28
        char pad_29[0x7];
        UExperienceManager* CallFunc_Get_ReturnValue; // 0x30
        bool CallFunc_BooleanOR_ReturnValue_1; // 0x38
        char pad_39[0x3];
        int32_t CallFunc_GetExperienceLevel_ReturnValue; // 0x3c
        bool CallFunc_GreaterEqual_IntInt_ReturnValue; // 0x40
        char pad_41[0x3];
        FName CallFunc_Conv_StringToName_ReturnValue; // 0x44
        bool CallFunc_IsUnlocked_ReturnValue; // 0x4c
        char pad_4d[0x3];
        FName CallFunc_Conv_StringToName_ReturnValue_1; // 0x50
        bool CallFunc_IsUnlocked_ReturnValue_1; // 0x58
    }; // Size: 0x59
    Params_GetMissionLockedState params{};
    params.Prereq1 = (FString)Prereq1;
    params.Prereq2 = (FString)Prereq2;
    params.CurrentMissionLevel = (int32_t)CurrentMissionLevel;
    params.MeetsLockRequirements = (bool)MeetsLockRequirements;
    params.IsLevelMet = (bool)IsLevelMet;
    params.IsPrereq2Met = (bool)IsPrereq2Met;
    params.IsPrereq1Met = (bool)IsPrereq1Met;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_Get_ReturnValue = (UExperienceManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue_1 = (bool)CallFunc_BooleanOR_ReturnValue_1;
    params.CallFunc_GetExperienceLevel_ReturnValue = (int32_t)CallFunc_GetExperienceLevel_ReturnValue;
    params.CallFunc_GreaterEqual_IntInt_ReturnValue = (bool)CallFunc_GreaterEqual_IntInt_ReturnValue;
    params.CallFunc_Conv_StringToName_ReturnValue = (FName)CallFunc_Conv_StringToName_ReturnValue;
    params.CallFunc_IsUnlocked_ReturnValue = (bool)CallFunc_IsUnlocked_ReturnValue;
    params.CallFunc_Conv_StringToName_ReturnValue_1 = (FName)CallFunc_Conv_StringToName_ReturnValue_1;
    params.CallFunc_IsUnlocked_ReturnValue_1 = (bool)CallFunc_IsUnlocked_ReturnValue_1;
    ProcessEvent(func, &params);
    MeetsLockRequirements = params.MeetsLockRequirements;
}
void UUI_BP_MapToolTip_C::SetMissionTasks(TArray<FTaskData>& MissionData, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Array_Index_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, UUI_BP_QuestObjective_C* CallFunc_Create_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, FTaskData CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Map/UI_BP_MapToolTip.UI_BP_MapToolTip_C.SetMissionTasks"));
    struct Params_SetMissionTasks {
        TArray<FTaskData> MissionData; // 0x0
        int32_t CallFunc_Array_Length_ReturnValue; // 0x10
        int32_t Temp_int_Array_Index_Variable; // 0x14
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x18
        char pad_19[0x3];
        int32_t Temp_int_Loop_Counter_Variable; // 0x1c
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x20
        char pad_24[0x4];
        UUI_BP_QuestObjective_C* CallFunc_Create_ReturnValue; // 0x28
        int32_t CallFunc_Array_Add_ReturnValue; // 0x30
        char pad_34[0x4];
        FTaskData CallFunc_Array_Get_Item; // 0x38
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x58
        bool CallFunc_Less_IntInt_ReturnValue; // 0x5c
        char pad_5d[0x3];
        UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue; // 0x60
    }; // Size: 0x68
    Params_SetMissionTasks params{};
    params.MissionData = (TArray<FTaskData>)MissionData;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Create_ReturnValue = (UUI_BP_QuestObjective_C*)CallFunc_Create_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.CallFunc_Array_Get_Item = (FTaskData)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_AddChildToVerticalBox_ReturnValue = (UVerticalBoxSlot*)CallFunc_AddChildToVerticalBox_ReturnValue;
    ProcessEvent(func, &params);
    MissionData = params.MissionData;
}
TArray<FString> UUI_BP_MapToolTip_C::GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, int32_t Temp_int_Loop_Counter_Variable, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_1, int32_t Temp_int_Loop_Counter_Variable_2, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Array_Index_Variable_1, int32_t Temp_int_Loop_Counter_Variable_3, int32_t CallFunc_Add_IntInt_ReturnValue_3, int32_t Temp_int_Array_Index_Variable_2, int32_t Temp_int_Array_Index_Variable_3, ESlateVisibility CallFunc_GetVisibility_ReturnValue) {}
void UUI_BP_MapToolTip_C::GetMissionIcon(bool MeetsLockedReq, bool IsMain, bool IsAssignment, bool IsRelationship, FString& IconName, FName TableRowName, FCompassIconStyle CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Map/UI_BP_MapToolTip.UI_BP_MapToolTip_C.GetMissionIcon"));
    struct Params_GetMissionIcon {
        bool MeetsLockedReq; // 0x0
        bool IsMain; // 0x1
        bool IsAssignment; // 0x2
        bool IsRelationship; // 0x3
        char pad_4[0x4];
        FString IconName; // 0x8
        FName TableRowName; // 0x18
        FCompassIconStyle CallFunc_GetDataTableRowFromName_OutRow; // 0x20
        bool CallFunc_GetDataTableRowFromName_ReturnValue; // 0x88
    }; // Size: 0x89
    Params_GetMissionIcon params{};
    params.MeetsLockedReq = (bool)MeetsLockedReq;
    params.IsMain = (bool)IsMain;
    params.IsAssignment = (bool)IsAssignment;
    params.IsRelationship = (bool)IsRelationship;
    params.IconName = (FString)IconName;
    params.TableRowName = (FName)TableRowName;
    params.CallFunc_GetDataTableRowFromName_OutRow = (FCompassIconStyle)CallFunc_GetDataTableRowFromName_OutRow;
    params.CallFunc_GetDataTableRowFromName_ReturnValue = (bool)CallFunc_GetDataTableRowFromName_ReturnValue;
    ProcessEvent(func, &params);
    IconName = params.IconName;
}
void UUI_BP_MapToolTip_C::SetMissionRewards(TArray<FMissionRewardData>& MissionRewards, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Array_Index_Variable_1, UUI_BP_QuestReward_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, FMissionRewardData CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, UUI_BP_QuestReward_C* CallFunc_Array_Get_Item_2, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Map/UI_BP_MapToolTip.UI_BP_MapToolTip_C.SetMissionRewards"));
    struct Params_SetMissionRewards {
        TArray<FMissionRewardData> MissionRewards; // 0x0
        int32_t CallFunc_Array_Length_ReturnValue; // 0x10
        int32_t Temp_int_Loop_Counter_Variable; // 0x14
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x18
        char pad_19[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x1c
        int32_t Temp_int_Array_Index_Variable; // 0x20
        int32_t Temp_int_Loop_Counter_Variable_1; // 0x24
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x28
        int32_t Temp_int_Array_Index_Variable_1; // 0x2c
        UUI_BP_QuestReward_C* CallFunc_Array_Get_Item; // 0x30
        bool CallFunc_IsValid_ReturnValue; // 0x38
        char pad_39[0x7];
        FMissionRewardData CallFunc_Array_Get_Item_1; // 0x40
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x68
        bool CallFunc_Less_IntInt_ReturnValue; // 0x6c
        char pad_6d[0x3];
        UUI_BP_QuestReward_C* CallFunc_Array_Get_Item_2; // 0x70
        int32_t CallFunc_Array_Length_ReturnValue_2; // 0x78
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0x7c
    }; // Size: 0x7d
    Params_SetMissionRewards params{};
    params.MissionRewards = (TArray<FMissionRewardData>)MissionRewards;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.CallFunc_Array_Get_Item = (UUI_BP_QuestReward_C*)CallFunc_Array_Get_Item;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_Array_Get_Item_1 = (FMissionRewardData)CallFunc_Array_Get_Item_1;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Array_Get_Item_2 = (UUI_BP_QuestReward_C*)CallFunc_Array_Get_Item_2;
    params.CallFunc_Array_Length_ReturnValue_2 = (int32_t)CallFunc_Array_Length_ReturnValue_2;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    ProcessEvent(func, &params);
    MissionRewards = params.MissionRewards;
}
void UUI_BP_MapToolTip_C::SetMissionTitleAndDescription(FString MissionIcon, FString NewTitle, FString NewDescription, FString AlternateDesc, bool IsTrackedMission, FString tempDesc, int32_t CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_AsyncFindIconTexture2D_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Map/UI_BP_MapToolTip.UI_BP_MapToolTip_C.SetMissionTitleAndDescription"));
    struct Params_SetMissionTitleAndDescription {
        FString MissionIcon; // 0x0
        FString NewTitle; // 0x10
        FString NewDescription; // 0x20
        FString AlternateDesc; // 0x30
        bool IsTrackedMission; // 0x40
        char pad_41[0x7];
        FString tempDesc; // 0x48
        int32_t CallFunc_Len_ReturnValue; // 0x58
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x5c
        bool CallFunc_EqualEqual_StrStr_ReturnValue; // 0x5d
        bool CallFunc_EqualEqual_StrStr_ReturnValue_1; // 0x5e
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue; // 0x5f
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue_1; // 0x60
    }; // Size: 0x61
    Params_SetMissionTitleAndDescription params{};
    params.MissionIcon = (FString)MissionIcon;
    params.NewTitle = (FString)NewTitle;
    params.NewDescription = (FString)NewDescription;
    params.AlternateDesc = (FString)AlternateDesc;
    params.IsTrackedMission = (bool)IsTrackedMission;
    params.tempDesc = (FString)tempDesc;
    params.CallFunc_Len_ReturnValue = (int32_t)CallFunc_Len_ReturnValue;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_EqualEqual_StrStr_ReturnValue = (bool)CallFunc_EqualEqual_StrStr_ReturnValue;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_1 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_1;
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue;
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue_1 = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_MapToolTip_C::CheckPrerequisiteString(FString Prereq, bool& IsBroomOrSpell, bool CallFunc_Contains_ReturnValue, bool CallFunc_Contains_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Map/UI_BP_MapToolTip.UI_BP_MapToolTip_C.CheckPrerequisiteString"));
    struct Params_CheckPrerequisiteString {
        FString Prereq; // 0x0
        bool IsBroomOrSpell; // 0x10
        bool CallFunc_Contains_ReturnValue; // 0x11
        bool CallFunc_Contains_ReturnValue_1; // 0x12
        bool CallFunc_BooleanOR_ReturnValue; // 0x13
    }; // Size: 0x14
    Params_CheckPrerequisiteString params{};
    params.Prereq = (FString)Prereq;
    params.IsBroomOrSpell = (bool)IsBroomOrSpell;
    params.CallFunc_Contains_ReturnValue = (bool)CallFunc_Contains_ReturnValue;
    params.CallFunc_Contains_ReturnValue_1 = (bool)CallFunc_Contains_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    ProcessEvent(func, &params);
    IsBroomOrSpell = params.IsBroomOrSpell;
}
void UUI_BP_MapToolTip_C::SetMissionPrereqs(FString PrereqID1, FString PrereqID2, bool& NoSpellReqs, bool NoShowSpell2, bool NoShowSpell1, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_CheckPrerequisiteString_IsBroomOrSpell, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default, bool CallFunc_CheckPrerequisiteString_IsBroomOrSpell_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Map/UI_BP_MapToolTip.UI_BP_MapToolTip_C.SetMissionPrereqs"));
    struct Params_SetMissionPrereqs {
        FString PrereqID1; // 0x0
        FString PrereqID2; // 0x10
        bool NoSpellReqs; // 0x20
        bool NoShowSpell2; // 0x21
        bool NoShowSpell1; // 0x22
        ESlateVisibility Temp_byte_Variable; // 0x23
        ESlateVisibility Temp_byte_Variable_1; // 0x24
        bool CallFunc_BooleanAND_ReturnValue; // 0x25
        bool CallFunc_BooleanOR_ReturnValue; // 0x26
        bool CallFunc_CheckPrerequisiteString_IsBroomOrSpell; // 0x27
        bool Temp_bool_Variable; // 0x28
        ESlateVisibility K2Node_Select_Default; // 0x29
        bool CallFunc_CheckPrerequisiteString_IsBroomOrSpell_1; // 0x2a
    }; // Size: 0x2b
    Params_SetMissionPrereqs params{};
    params.PrereqID1 = (FString)PrereqID1;
    params.PrereqID2 = (FString)PrereqID2;
    params.NoSpellReqs = (bool)NoSpellReqs;
    params.NoShowSpell2 = (bool)NoShowSpell2;
    params.NoShowSpell1 = (bool)NoShowSpell1;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_CheckPrerequisiteString_IsBroomOrSpell = (bool)CallFunc_CheckPrerequisiteString_IsBroomOrSpell;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    params.CallFunc_CheckPrerequisiteString_IsBroomOrSpell_1 = (bool)CallFunc_CheckPrerequisiteString_IsBroomOrSpell_1;
    ProcessEvent(func, &params);
    NoSpellReqs = params.NoSpellReqs;
}
void UUI_BP_MapToolTip_C::Set_Available_Missions_Data(bool ShowAvailableMissions, FString NewTitle, TArray<FString>& AvailableMissionNames, TArray<FString>& AvailableMissionIcons, TArray<FLinearColor>& AvailableMissionColors, int32_t MissionsNumber, int32_t TotalMissions, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, FMargin K2Node_MakeStruct_Margin, int32_t CallFunc_Add_IntInt_ReturnValue_1, FString CallFunc_Array_Get_Item, FString CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, int32_t CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1) {}
void UUI_BP_MapToolTip_C::SetTooltipTitleAndDescription(FString NewTitle, FString NewDesc, bool isVendor, bool Temp_bool_Variable, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue, FString K2Node_Select_Default, bool CallFunc_EqualEqual_StrStr_ReturnValue_3, bool CallFunc_EqualEqual_StrStr_ReturnValue_4, bool CallFunc_EqualEqual_StrStr_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Map/UI_BP_MapToolTip.UI_BP_MapToolTip_C.SetTooltipTitleAndDescription"));
    struct Params_SetTooltipTitleAndDescription {
        FString NewTitle; // 0x0
        FString NewDesc; // 0x10
        bool isVendor; // 0x20
        bool Temp_bool_Variable; // 0x21
        bool CallFunc_EqualEqual_StrStr_ReturnValue; // 0x22
        bool CallFunc_EqualEqual_StrStr_ReturnValue_1; // 0x23
        bool CallFunc_EqualEqual_StrStr_ReturnValue_2; // 0x24
        char pad_25[0x3];
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x28
        FString K2Node_Select_Default; // 0x38
        bool CallFunc_EqualEqual_StrStr_ReturnValue_3; // 0x48
        bool CallFunc_EqualEqual_StrStr_ReturnValue_4; // 0x49
        bool CallFunc_EqualEqual_StrStr_ReturnValue_5; // 0x4a
        bool CallFunc_BooleanOR_ReturnValue; // 0x4b
        bool CallFunc_BooleanOR_ReturnValue_1; // 0x4c
        bool CallFunc_BooleanOR_ReturnValue_2; // 0x4d
        bool CallFunc_BooleanOR_ReturnValue_3; // 0x4e
    }; // Size: 0x4f
    Params_SetTooltipTitleAndDescription params{};
    params.NewTitle = (FString)NewTitle;
    params.NewDesc = (FString)NewDesc;
    params.isVendor = (bool)isVendor;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.CallFunc_EqualEqual_StrStr_ReturnValue = (bool)CallFunc_EqualEqual_StrStr_ReturnValue;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_1 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_1;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_2 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_2;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.K2Node_Select_Default = (FString)K2Node_Select_Default;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_3 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_3;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_4 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_4;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_5 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_5;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue_1 = (bool)CallFunc_BooleanOR_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue_2 = (bool)CallFunc_BooleanOR_ReturnValue_2;
    params.CallFunc_BooleanOR_ReturnValue_3 = (bool)CallFunc_BooleanOR_ReturnValue_3;
    ProcessEvent(func, &params);
}
void UUI_BP_MapToolTip_C::SetQuestLevel(int32_t RequiredLevel, int32_t SuggestedLevel, bool& NoLevelRequirement, bool IsPlayerLevelLessThanRequirement, int32_t TempLevel, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue) {}
void UUI_BP_MapToolTip_C::SetTooltipDataFromTipData(FMapToolTipData TipData, bool isVendor, bool NoSpellReqs, bool NoLevelReqs, UMissionManager* CallFunc_Get_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_SetMissionPrereqs_NoSpellReqs, bool CallFunc_GetMissionLockedState_MeetsLockRequirements, FString CallFunc_GetMissionIcon_IconName, bool CallFunc_SetQuestLevel_NoLevelRequirement, bool CallFunc_SetQuestLevel_NoLevelRequirement_1, bool CallFunc_IsFocusMissionBP_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_AsyncFindIconTexture2D_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_AsyncFindIconTexture2D_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Map/UI_BP_MapToolTip.UI_BP_MapToolTip_C.SetTooltipDataFromTipData"));
    struct Params_SetTooltipDataFromTipData {
        FMapToolTipData TipData; // 0x0
        bool isVendor; // 0x1b8
        bool NoSpellReqs; // 0x1b9
        bool NoLevelReqs; // 0x1ba
        char pad_1bb[0x5];
        UMissionManager* CallFunc_Get_ReturnValue; // 0x1c0
        int32_t CallFunc_Array_Length_ReturnValue; // 0x1c8
        bool K2Node_SwitchEnum_CmpSuccess; // 0x1cc
        bool CallFunc_LessEqual_IntInt_ReturnValue; // 0x1cd
        bool CallFunc_SetMissionPrereqs_NoSpellReqs; // 0x1ce
        bool CallFunc_GetMissionLockedState_MeetsLockRequirements; // 0x1cf
        FString CallFunc_GetMissionIcon_IconName; // 0x1d0
        bool CallFunc_SetQuestLevel_NoLevelRequirement; // 0x1e0
        bool CallFunc_SetQuestLevel_NoLevelRequirement_1; // 0x1e1
        bool CallFunc_IsFocusMissionBP_ReturnValue; // 0x1e2
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x1e3
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x1e4
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue; // 0x1e8
        bool CallFunc_LessEqual_IntInt_ReturnValue_1; // 0x1e9
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue_1; // 0x1ea
    }; // Size: 0x1eb
    Params_SetTooltipDataFromTipData params{};
    params.TipData = (FMapToolTipData)TipData;
    params.isVendor = (bool)isVendor;
    params.NoSpellReqs = (bool)NoSpellReqs;
    params.NoLevelReqs = (bool)NoLevelReqs;
    params.CallFunc_Get_ReturnValue = (UMissionManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    params.CallFunc_LessEqual_IntInt_ReturnValue = (bool)CallFunc_LessEqual_IntInt_ReturnValue;
    params.CallFunc_SetMissionPrereqs_NoSpellReqs = (bool)CallFunc_SetMissionPrereqs_NoSpellReqs;
    params.CallFunc_GetMissionLockedState_MeetsLockRequirements = (bool)CallFunc_GetMissionLockedState_MeetsLockRequirements;
    params.CallFunc_GetMissionIcon_IconName = (FString)CallFunc_GetMissionIcon_IconName;
    params.CallFunc_SetQuestLevel_NoLevelRequirement = (bool)CallFunc_SetQuestLevel_NoLevelRequirement;
    params.CallFunc_SetQuestLevel_NoLevelRequirement_1 = (bool)CallFunc_SetQuestLevel_NoLevelRequirement_1;
    params.CallFunc_IsFocusMissionBP_ReturnValue = (bool)CallFunc_IsFocusMissionBP_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue;
    params.CallFunc_LessEqual_IntInt_ReturnValue_1 = (bool)CallFunc_LessEqual_IntInt_ReturnValue_1;
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue_1 = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_MapToolTip_C::SetTooltipLegend(TArray<FString>& LegendArray, FString tempLegendString, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Array_Index_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, FLegendItemData K2Node_MakeStruct_LegendItemData, int32_t CallFunc_Add_IntInt_ReturnValue, FLegendItemData K2Node_MakeStruct_LegendItemData_1, FLegendItemData K2Node_MakeStruct_LegendItemData_2, bool CallFunc_Contains_ReturnValue, bool CallFunc_Contains_ReturnValue_1, bool CallFunc_Contains_ReturnValue_2, bool CallFunc_Contains_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Contains_ReturnValue_4, FLegendItemData K2Node_MakeStruct_LegendItemData_3, FString CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Map/UI_BP_MapToolTip.UI_BP_MapToolTip_C.SetTooltipLegend"));
    struct Params_SetTooltipLegend {
        TArray<FString> LegendArray; // 0x0
        FString tempLegendString; // 0x10
        int32_t CallFunc_Array_Length_ReturnValue; // 0x20
        int32_t Temp_int_Array_Index_Variable; // 0x24
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x28
        char pad_29[0x3];
        int32_t Temp_int_Loop_Counter_Variable; // 0x2c
        FLegendItemData K2Node_MakeStruct_LegendItemData; // 0x30
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x60
        char pad_64[0x4];
        FLegendItemData K2Node_MakeStruct_LegendItemData_1; // 0x68
        FLegendItemData K2Node_MakeStruct_LegendItemData_2; // 0x98
        bool CallFunc_Contains_ReturnValue; // 0xc8
        bool CallFunc_Contains_ReturnValue_1; // 0xc9
        bool CallFunc_Contains_ReturnValue_2; // 0xca
        bool CallFunc_Contains_ReturnValue_3; // 0xcb
        bool CallFunc_BooleanOR_ReturnValue; // 0xcc
        bool CallFunc_Contains_ReturnValue_4; // 0xcd
        char pad_ce[0x2];
        FLegendItemData K2Node_MakeStruct_LegendItemData_3; // 0xd0
        FString CallFunc_Array_Get_Item; // 0x100
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x110
        bool CallFunc_Less_IntInt_ReturnValue; // 0x114
    }; // Size: 0x115
    Params_SetTooltipLegend params{};
    params.LegendArray = (TArray<FString>)LegendArray;
    params.tempLegendString = (FString)tempLegendString;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.K2Node_MakeStruct_LegendItemData = (FLegendItemData)K2Node_MakeStruct_LegendItemData;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.K2Node_MakeStruct_LegendItemData_1 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_1;
    params.K2Node_MakeStruct_LegendItemData_2 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_2;
    params.CallFunc_Contains_ReturnValue = (bool)CallFunc_Contains_ReturnValue;
    params.CallFunc_Contains_ReturnValue_1 = (bool)CallFunc_Contains_ReturnValue_1;
    params.CallFunc_Contains_ReturnValue_2 = (bool)CallFunc_Contains_ReturnValue_2;
    params.CallFunc_Contains_ReturnValue_3 = (bool)CallFunc_Contains_ReturnValue_3;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_Contains_ReturnValue_4 = (bool)CallFunc_Contains_ReturnValue_4;
    params.K2Node_MakeStruct_LegendItemData_3 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_3;
    params.CallFunc_Array_Get_Item = (FString)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    ProcessEvent(func, &params);
    LegendArray = params.LegendArray;
}
void UUI_BP_MapToolTip_C::SetTooltipData(FString NewTitle, FString NewDescription) {}
void UUI_BP_MapToolTip_C::ExecuteUbergraph_UI_BP_MapToolTip(int32_t EntryPoint, int32_t CallFunc_Array_Length_ReturnValue) {}
void UUI_BP_MapToolTip_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Map/UI_BP_MapToolTip.UI_BP_MapToolTip_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MapToolTip_C::FlipMapTooltipRight(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Map/UI_BP_MapToolTip.UI_BP_MapToolTip_C.FlipMapTooltipRight"));
    struct Params_FlipMapTooltipRight {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_FlipMapTooltipRight params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
