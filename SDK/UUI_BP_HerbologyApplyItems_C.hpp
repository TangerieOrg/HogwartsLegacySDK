#pragma once
#include <cstdint>
#include "EHerbGrowthState.hpp"
#include "ESlateVisibility.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FGeometry.hpp"
#include "FInventoryResult.hpp"
#include "FLegendItemData.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimespan.hpp"
#include "UPhoenixUserWidget.hpp"
class UWidgetAnimation;
class UHorizontalBox;
class UPhoenixTextBlock;
class UUI_BP_ItemTooltipEffectDescription_C;
class UVerticalBox;
class UImage;
class UHerbPlotState;
class AHerbPlot;
class UMenuCursorWidget;
class UUI_BP_NurtureProgressDiamond_C;
class UIconButtonWidget;
class UUI_BP_HerbologyFertilizerButton_C;
class UUMGSequencePlayer;
#pragma pack(push, 1)
class UUI_BP_HerbologyApplyItems_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* Main_OUT; // 0x330
    UPhoenixTextBlock* FactSheetText; // 0x338
    UVerticalBox* FertilizerList_1; // 0x340
    UPhoenixTextBlock* GrowthTimeHeader; // 0x348
    UPhoenixTextBlock* GrowthTimeText; // 0x350
    UImage* Image_198; // 0x358
    UHorizontalBox* NoFertilizersText; // 0x360
    UPhoenixTextBlock* PlantNameText; // 0x368
    UUI_BP_NurtureProgressDiamond_C* progressMeter; // 0x370
    UPhoenixTextBlock* Yield; // 0x378
    UPhoenixTextBlock* yieldValue; // 0x380
    char pad_388[0x10];
    TArray<FInventoryResult> PreviewFertilizers; // 0x398
    char pad_3a8[0x50];
    FName PreviewPlantID; // 0x3f8
    UUI_BP_ItemTooltipEffectDescription_C* FertilizerTooltip; // 0x400
    FMargin ItemMargin; // 0x408
    UHerbPlotState* HerbPlotState; // 0x418
    AHerbPlot* HerbPlot; // 0x420
    UIconButtonWidget* HoveredFertilizerButton; // 0x428
    bool PlantButtonIsHovered; // 0x430
    bool FertilizerButtonHovered; // 0x431
    char pad_432[0x16];
    bool HerbPlotIsSet; // 0x448
    bool AudioIsPlaying; // 0x449
    char pad_44a[0x16];
    TArray<UUI_BP_HerbologyFertilizerButton_C*> FertilizerButtonArray; // 0x460
    static UUI_BP_HerbologyApplyItems_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, UUI_BP_HerbologyFertilizerButton_C* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue);
    void SetHerbPlot(AHerbPlot* NewHerbPlot, bool CallFunc_IsValid_ReturnValue, int32_t CallFunc_GetYield_ReturnValue);
    void AudioStopLoop(TArray<FAkExternalSourceInfo>& Temp_struct_Variable);
    void AudioPlayLoop(TArray<FAkExternalSourceInfo>& Temp_struct_Variable);
    void GetGrowthProgressRation(float& Progress, float CallFunc_GetGrowthProgressRatio_ReturnValue, float CallFunc_GetRegrowthTimeRatio_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, EHerbGrowthState CallFunc_GetGrowthState_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
    void RefreshPlantTooltip(TArray<FLegendItemData>& K2Node_MakeArray_Array, FName CallFunc_GetPlantID_ReturnValue, UMenuCursorWidget* CallFunc_GetCursorWidget_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue);
    void RefreshFertilizerTooltip(FName FertilizerID, bool IsErrorUsed, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FLegendItemData K2Node_MakeStruct_LegendItemData, TArray<FLegendItemData>& K2Node_MakeArray_Array, UMenuCursorWidget* CallFunc_GetCursorWidget_ReturnValue);
    void GetIsGrowing(bool& Growing, EHerbGrowthState CallFunc_GetGrowthState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
    void UpdateToolTip(FString ItemName, bool IsErrorUsed, bool CallFunc_Not_PreBool_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FLegendItemData K2Node_MakeStruct_LegendItemData, UMenuCursorWidget* CallFunc_GetCursorWidget_ReturnValue, TArray<FLegendItemData>& K2Node_MakeArray_Array);
    void PopulateFertilizers(TArray<FInventoryResult>& Fertilizers, bool CanBeApplied, FInventoryResult InventoryResult, UUI_BP_HerbologyFertilizerButton_C* FertilizerButton, ESlateVisibility Temp_byte_Variable, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, UUI_BP_HerbologyFertilizerButton_C* CallFunc_Create_ReturnValue, int32_t Temp_int_Array_Index_Variable, ESlateVisibility Temp_byte_Variable_1, FInventoryResult CallFunc_Array_Get_Item, int32_t CallFunc_Array_Add_ReturnValue);
    void Set_Plant_Details(FName PlantID, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue);
    void RefreshWidget(AHerbPlot* Plot, TArray<FInventoryResult>& CallFunc_GetInventoryTextBP_InventoryResultArray, FName CallFunc_GetPlantID_ReturnValue);
    void OnFertilizerButtonHovered(FName FertilizerID, UUI_BP_HerbologyFertilizerButton_C* FertilizerButton);
    void OnFertilizerButtonUnhovered(FName FertilizerID);
    void OnIntroStarted0(int32_t IntroType, float IntroDuration);
    void OnOutroStarted0(int32_t OutroType, float OutroDuration);
    void OnFertilizerButtonClicked(FName FertilizerID);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Destruct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_BP_HerbologyApplyItems(int32_t EntryPoint, int32_t CallFunc_PostEventAtLocation_ReturnValue, FName K2Node_CustomEvent_FertilizerID_2, UUI_BP_HerbologyFertilizerButton_C* K2Node_CustomEvent_FertilizerButton, FName K2Node_CustomEvent_FertilizerID_1, FString CallFunc_Conv_NameToString_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, int32_t K2Node_Event_IntroType, float K2Node_Event_IntroDuration, int32_t K2Node_Event_OutroType, float K2Node_Event_OutroDuration, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, FName K2Node_CustomEvent_FertilizerID, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, FString CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetGrowthProgressRation_Progress, FTimespan CallFunc_GetGrowthTimeRemaining_ReturnValue);
    void OnFertilizerHovered__DelegateSignature(UUI_BP_HerbologyFertilizerButton_C* FertilizerButton);
    void OnRequiresLegendUpdate__DelegateSignature();
    void OnFertilizerSelected__DelegateSignature(FName FertilizerID);
}; // Size: 0x470
#pragma pack(pop)
