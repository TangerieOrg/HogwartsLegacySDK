#pragma once
#include <cstdint>
#include "EMenuReaderInterruptType.hpp"
#include "FInventoryResult.hpp"
#include "FLegendItemData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSeedInfo.hpp"
#include "UPhoenixUserWidget.hpp"
class UWidgetAnimation;
class UUniformGridPanel;
class UPhoenixTextBlock;
class UIconButtonWidget;
class UUI_BP_PottingDetails_C;
class UUniformGridSlot;
class UUI_BP_HerbologySeedTooltip_C;
class AHerbPlot;
class UUI_BP_InventoryIconButton_C;
class UWidget;
class UUMGSequencePlayer;
#pragma pack(push, 1)
class UUI_BP_HerbologySeedSelection_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* ShowPlotDetails; // 0x330
    UWidgetAnimation* Main_OUT; // 0x338
    UPhoenixTextBlock* NoSeedsText; // 0x340
    UUI_BP_PottingDetails_C* plotDetails; // 0x348
    UUniformGridPanel* SeedList; // 0x350
    char pad_358[0x10];
    UUI_BP_HerbologySeedTooltip_C* SeedTooltip; // 0x368
    int32_t NumPreviewListCopies; // 0x370
    int32_t GridWidth; // 0x374
    TArray<bool> CanPlantInPlotArray; // 0x378
    int32_t MouseCursorAdjustmentLoops; // 0x388
    char pad_38c[0x4];
    TArray<FSeedInfo> SeedInfoList; // 0x390
    UIconButtonWidget* HoveredSeedButton; // 0x3a0
    UUI_BP_HerbologySeedTooltip_C* HerbSeedContent; // 0x3a8
    TArray<FName> TutorialHiglights; // 0x3b0
    TArray<FSeedInfo> PreviewSeedList; // 0x3c0
    bool IsFirstHover; // 0x3d0
    char pad_3d1[0x7];
    static UUI_BP_HerbologySeedSelection_C* StaticClass();
    void GridIndexToRowColumn(int32_t GridIndex, int32_t GridWidth, int32_t& OutRow, int32_t& OutColumn, int32_t CallFunc_Divide_IntInt_ReturnValue, int32_t CallFunc_Percent_IntInt_ReturnValue);
    void UpdateSeedTooltip(TArray<FLegendItemData> LegendDataArray, bool LocalCanPlantInPlot, FString TempLegend, FSeedInfo CallFunc_GetSeedInfoFromButton_SeedInfo, bool CallFunc_GetSeedInfoFromButton_CanPlantInPlot);
    void GetCurrentlyHoveredPlantID(FName& PlantID, bool CallFunc_IsValid_ReturnValue, FSeedInfo CallFunc_GetSeedInfoFromButton_SeedInfo, bool CallFunc_GetSeedInfoFromButton_CanPlantInPlot);
    void GetSeedInfoFromButton(UIconButtonWidget* Button, FSeedInfo& SeedInfo, bool& CanPlantInPlot, int32_t Index, UUniformGridSlot* CallFunc_SlotAsUniformGridSlot_ReturnValue, int32_t CallFunc_Multiply_IntInt_ReturnValue, bool CallFunc_Array_Get_Item, int32_t CallFunc_Add_IntInt_ReturnValue, FSeedInfo CallFunc_Array_Get_Item_1);
    void PopulatePreviewSeedList(int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
    void RefreshSeedList(AHerbPlot* Herb_Plot, TArray<FSeedInfo>& CallFunc_GetOwnedSeeds_OwnedSeeds);
    void PopulateSeedList(TArray<FSeedInfo>& Seeds, AHerbPlot* Herb_Plot, int32_t GridIndex, bool CanPlantHerb, UUI_BP_InventoryIconButton_C* IconButton, int32_t Temp_int_Array_Index_Variable, int32_t CallFunc_Array_Length_ReturnValue, FSeedInfo CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue_1, FInventoryResult K2Node_MakeStruct_InventoryResult, bool CallFunc_Greater_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Variable, int32_t CallFunc_GridIndexToRowColumn_OutRow, int32_t CallFunc_GridIndexToRowColumn_OutColumn, int32_t CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_Variable, UUI_BP_InventoryIconButton_C* CallFunc_Create_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, bool CallFunc_DoesSeedFitInPlot_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void OnSeedButtonHovered(UIconButtonWidget* Seed_Button);
    void OnSeedButtonUnhovered(UIconButtonWidget* Seed_Button);
    void OnSeedButtonClicked(UIconButtonWidget* Seed_Button);
    void HoverFirstSeed();
    void OnIntroStarted0(int32_t IntroType, float IntroDuration);
    void OnOutroStarted0(int32_t OutroType, float OutroDuration);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_BP_HerbologySeedSelection(int32_t EntryPoint, FName Temp_name_Variable, bool Temp_bool_Variable, EMenuReaderInterruptType Temp_byte_Variable, EMenuReaderInterruptType Temp_byte_Variable_1, UIconButtonWidget* K2Node_CustomEvent_Seed_Button_2, UIconButtonWidget* K2Node_CustomEvent_Seed_Button_1, UIconButtonWidget* K2Node_CustomEvent_Seed_Button, FSeedInfo CallFunc_GetSeedInfoFromButton_SeedInfo, bool CallFunc_GetSeedInfoFromButton_CanPlantInPlot, UUI_BP_HerbologySeedTooltip_C* CallFunc_Create_ReturnValue, UWidget* CallFunc_GetChildAt_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, int32_t K2Node_Event_IntroType, float K2Node_Event_IntroDuration, int32_t K2Node_Event_OutroType, float K2Node_Event_OutroDuration, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, FString CallFunc_GetMissionStepBP_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool K2Node_Event_IsDesignTime, int32_t CallFunc_Array_Add_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, EMenuReaderInterruptType K2Node_Select_Default);
    void OnPlantSelected__DelegateSignature(FName PlantID);
}; // Size: 0x3d8
#pragma pack(pop)
