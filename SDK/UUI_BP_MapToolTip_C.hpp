#pragma once
#include <cstdint>
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
#include "UPhoenixUserWidget.hpp"
class UCanvasPanel;
class UWidgetAnimation;
class UUI_BP_QuestReward_C;
class UHorizontalBox;
class UPhoenixTextBlock;
class UUI_BP_QuestSpellRequirement_C;
class UVerticalBox;
class APlayerController;
class UImage;
class UScaleBox;
class UPhoenixRichTextBlock;
class UUI_BP_Legend_Horizontal_Tooltip_C;
class UOverlay;
class UUI_BP_AvailableMissionNote_C;
class UUI_BP_RegionInfoItem_C;
class ULegendItem;
class UUI_BP_QuestObjective_C;
class UVerticalBoxSlot;
class UPanelSlot;
class UExperienceManager;
class UMissionManager;
class UObject;
#pragma pack(push, 1)
class UUI_BP_MapToolTip_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* TooltipLeft; // 0x330
    UWidgetAnimation* TooltipRight; // 0x338
    UPhoenixTextBlock* availableMissionsText; // 0x340
    UVerticalBox* ContextActionBox; // 0x348
    UHorizontalBox* ExtraQuestBox; // 0x350
    UPhoenixTextBlock* ExtraQuestsPlus; // 0x358
    UPhoenixTextBlock* ExtraQuestsText; // 0x360
    UCanvasPanel* ItemDivider; // 0x368
    UVerticalBox* ItemList; // 0x370
    UVerticalBox* ItemsContainer; // 0x378
    UCanvasPanel* LevelReqPanel; // 0x380
    UPhoenixTextBlock* LevelText; // 0x388
    UImage* MapIcon; // 0x390
    UImage* MapIcon_1; // 0x398
    UVerticalBox* MissionAvailable; // 0x3a0
    UVerticalBox* missionList; // 0x3a8
    UVerticalBox* MissionRewards; // 0x3b0
    UPhoenixTextBlock* noSpellReqText; // 0x3b8
    UPhoenixTextBlock* QuestNumber; // 0x3c0
    UPhoenixTextBlock* RequiredLevel; // 0x3c8
    UVerticalBox* requirementList; // 0x3d0
    UPhoenixTextBlock* requirementTitle; // 0x3d8
    UUI_BP_QuestReward_C* reward1; // 0x3e0
    UUI_BP_QuestReward_C* reward2; // 0x3e8
    UUI_BP_QuestReward_C* reward3; // 0x3f0
    UPhoenixTextBlock* RewardsTitle; // 0x3f8
    UUI_BP_QuestSpellRequirement_C* Spell1; // 0x400
    UUI_BP_QuestSpellRequirement_C* Spell2; // 0x408
    UVerticalBox* taskList; // 0x410
    UScaleBox* titleDividerBox; // 0x418
    UPhoenixRichTextBlock* tooltipDesc; // 0x420
    UUI_BP_Legend_Horizontal_Tooltip_C* TooltipLegend; // 0x428
    UOverlay* ToolTipLimits; // 0x430
    UPhoenixTextBlock* tooltipTitle; // 0x438
    UUI_BP_AvailableMissionNote_C* UI_BP_AvailableMissionNote; // 0x440
    UUI_BP_RegionInfoItem_C* UI_BP_RegionInfoItem; // 0x448
    ULegendItem* legendItemMap; // 0x450
    ULegendItem* legendItemTravel; // 0x458
    ULegendItem* legendItemExtra; // 0x460
    ULegendItem* legendItemPath; // 0x468
    TArray<UUI_BP_QuestReward_C*> RewardArray; // 0x470
    TArray<UUI_BP_RegionInfoItem_C*> ItemArray; // 0x480
    TArray<UUI_BP_AvailableMissionNote_C*> MIssionNoteArray; // 0x490
    TArray<UUI_BP_QuestObjective_C*> CachedQuestObjectives; // 0x4a0
    static UUI_BP_MapToolTip_C* StaticClass();
    void SetMissionTasks(TArray<FTaskData>& MissionData, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Array_Index_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, UUI_BP_QuestObjective_C* CallFunc_Create_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, FTaskData CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
    TArray<FString> GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, int32_t Temp_int_Loop_Counter_Variable, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_1, int32_t Temp_int_Loop_Counter_Variable_2, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Array_Index_Variable_1, int32_t Temp_int_Loop_Counter_Variable_3, int32_t CallFunc_Add_IntInt_ReturnValue_3, int32_t Temp_int_Array_Index_Variable_2, int32_t Temp_int_Array_Index_Variable_3, ESlateVisibility CallFunc_GetVisibility_ReturnValue);
    void SetItemData(TArray<FRegionPopuplData>& ItemData, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, int32_t Temp_int_Array_Index_Variable, bool CallFunc_Less_IntInt_ReturnValue, FRegionPopuplData CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue, UUI_BP_RegionInfoItem_C* CallFunc_Create_ReturnValue, UPanelSlot* CallFunc_AddChild_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue);
    void GetMissionLockedState(FString Prereq1, FString Prereq2, int32_t CurrentMissionLevel, bool& MeetsLockRequirements, bool IsLevelMet, bool IsPrereq2Met, bool IsPrereq1Met, bool CallFunc_BooleanOR_ReturnValue, UExperienceManager* CallFunc_Get_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, int32_t CallFunc_GetExperienceLevel_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_IsUnlocked_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue_1, bool CallFunc_IsUnlocked_ReturnValue_1);
    void GetMissionIcon(bool MeetsLockedReq, bool IsMain, bool IsAssignment, bool IsRelationship, FString& IconName, FName TableRowName, FCompassIconStyle CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
    void ResetTooltip();
    void SetMissionRewards(TArray<FMissionRewardData>& MissionRewards, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Array_Index_Variable_1, UUI_BP_QuestReward_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, FMissionRewardData CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, UUI_BP_QuestReward_C* CallFunc_Array_Get_Item_2, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1);
    void SetMissionTitleAndDescription(FString MissionIcon, FString NewTitle, FString NewDescription, FString AlternateDesc, bool IsTrackedMission, FString tempDesc, int32_t CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_AsyncFindIconTexture2D_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue_1);
    void CheckPrerequisiteString(FString Prereq, bool& IsBroomOrSpell, bool CallFunc_Contains_ReturnValue, bool CallFunc_Contains_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
    void SetMissionPrereqs(FString PrereqID1, FString PrereqID2, bool& NoSpellReqs, bool NoShowSpell2, bool NoShowSpell1, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_CheckPrerequisiteString_IsBroomOrSpell, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default, bool CallFunc_CheckPrerequisiteString_IsBroomOrSpell_1);
    void Set_Available_Missions_Data(bool ShowAvailableMissions, FString NewTitle, TArray<FString>& AvailableMissionNames, TArray<FString>& AvailableMissionIcons, TArray<FLinearColor>& AvailableMissionColors, int32_t MissionsNumber, int32_t TotalMissions, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, FMargin K2Node_MakeStruct_Margin, int32_t CallFunc_Add_IntInt_ReturnValue_1, FString CallFunc_Array_Get_Item, FString CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, int32_t CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1);
    void SetTooltipTitleAndDescription(FString NewTitle, FString NewDesc, bool isVendor, bool Temp_bool_Variable, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue, FString K2Node_Select_Default, bool CallFunc_EqualEqual_StrStr_ReturnValue_3, bool CallFunc_EqualEqual_StrStr_ReturnValue_4, bool CallFunc_EqualEqual_StrStr_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3);
    void SetQuestLevel(int32_t RequiredLevel, int32_t SuggestedLevel, bool& NoLevelRequirement, bool IsPlayerLevelLessThanRequirement, int32_t TempLevel, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue);
    void SetTooltipDataFromTipData(FMapToolTipData TipData, bool isVendor, bool NoSpellReqs, bool NoLevelReqs, UMissionManager* CallFunc_Get_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_SetMissionPrereqs_NoSpellReqs, bool CallFunc_GetMissionLockedState_MeetsLockRequirements, FString CallFunc_GetMissionIcon_IconName, bool CallFunc_SetQuestLevel_NoLevelRequirement, bool CallFunc_SetQuestLevel_NoLevelRequirement_1, bool CallFunc_IsFocusMissionBP_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_AsyncFindIconTexture2D_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_AsyncFindIconTexture2D_ReturnValue_1);
    void SetTooltipLegend(TArray<FString>& LegendArray, FString tempLegendString, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Array_Index_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, FLegendItemData K2Node_MakeStruct_LegendItemData, int32_t CallFunc_Add_IntInt_ReturnValue, FLegendItemData K2Node_MakeStruct_LegendItemData_1, FLegendItemData K2Node_MakeStruct_LegendItemData_2, bool CallFunc_Contains_ReturnValue, bool CallFunc_Contains_ReturnValue_1, bool CallFunc_Contains_ReturnValue_2, bool CallFunc_Contains_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Contains_ReturnValue_4, FLegendItemData K2Node_MakeStruct_LegendItemData_3, FString CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue);
    void SetTooltipData(FString NewTitle, FString NewDescription);
    void Construct();
    void FlipMapTooltipRight(UObject* Caller);
    void FlipMapTooltipLeft(UObject* Caller);
    void ExecuteUbergraph_UI_BP_MapToolTip(int32_t EntryPoint, int32_t CallFunc_Array_Length_ReturnValue);
}; // Size: 0x4b0
#pragma pack(pop)
