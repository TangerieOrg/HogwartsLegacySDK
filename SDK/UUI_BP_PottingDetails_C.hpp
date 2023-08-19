#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "FLegendItemData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSeedInfo.hpp"
#include "FTimespan.hpp"
#include "FTransfigurationUnlockSource.hpp"
#include "UPhoenixUserWidget.hpp"
class UPhoenixTextBlock;
class UHorizontalBox;
class UUI_BP_Legend_Horizontal_Tooltip_C;
class UUI_BP_FG_DetailsPanelBack_C;
class UVerticalBox;
class UHerbPlotManager;
#pragma pack(push, 1)
class UUI_BP_PottingDetails_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UPhoenixTextBlock* detailsDescription; // 0x330
    UPhoenixTextBlock* detailsTitle; // 0x338
    UHorizontalBox* ErrorText; // 0x340
    UPhoenixTextBlock* ErrorTextMain; // 0x348
    UPhoenixTextBlock* GrowthTimeHeader; // 0x350
    UPhoenixTextBlock* GrowthTimeText; // 0x358
    UUI_BP_Legend_Horizontal_Tooltip_C* NewTooltipLegend; // 0x360
    UUI_BP_FG_DetailsPanelBack_C* panelBack; // 0x368
    UPhoenixTextBlock* PlotSizeHeader; // 0x370
    UPhoenixTextBlock* PlotSizeText; // 0x378
    UVerticalBox* plottingDetails; // 0x380
    static UUI_BP_PottingDetails_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1, ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
    void Set_Up_Plotting_Legend(FName LockId, bool IsUnlocked, bool CanPlantInPlot, TArray<FLegendItemData> TempLegendDataArray, bool Temp_bool_Variable, FLegendItemData K2Node_MakeStruct_LegendItemData, TArray<FLegendItemData>& K2Node_MakeArray_Array, FTransfigurationUnlockSource CallFunc_GetUnlockSourceForLockID_static_ReturnValue);
    void SetUpPlottingDetails(bool IsUnlocked, int32_t NewGrowthTime, FName PlantSize, FString CallFunc_Conv_NameToString_ReturnValue, UHerbPlotManager* CallFunc_BP_Get_ReturnValue, float CallFunc_GetGrowthTimeMultiplier_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32_t CallFunc_FTrunc_ReturnValue, FTimespan CallFunc_MakeTimespan_ReturnValue);
    void InitPlottingData(FSeedInfo SeedInfo, bool CanPlantInPlot, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue);
    void Construct();
    void ExecuteUbergraph_UI_BP_PottingDetails(int32_t EntryPoint);
}; // Size: 0x388
#pragma pack(pop)
