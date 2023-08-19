#include "ESlateVisibility.hpp"
#include "FLegendItemData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSeedInfo.hpp"
#include "FTimespan.hpp"
#include "FTransfigurationUnlockSource.hpp"
#include "UFunction.hpp"
#include "UHerbPlotManager.hpp"
#include "UHorizontalBox.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UUI_BP_FG_DetailsPanelBack_C.hpp"
#include "UUI_BP_Legend_Horizontal_Tooltip_C.hpp"
#include "UUI_BP_PottingDetails_C.hpp"
#include "UVerticalBox.hpp"
UUI_BP_PottingDetails_C* UUI_BP_PottingDetails_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Nurturing/Herbology/UI_BP_PottingDetails.UI_BP_PottingDetails_C");
    return (UUI_BP_PottingDetails_C*)res;
}
void UUI_BP_PottingDetails_C::ExecuteUbergraph_UI_BP_PottingDetails(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_PottingDetails.UI_BP_PottingDetails_C.ExecuteUbergraph_UI_BP_PottingDetails"));
    struct Params_ExecuteUbergraph_UI_BP_PottingDetails {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_UI_BP_PottingDetails params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
TArray<FString> UUI_BP_PottingDetails_C::GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1, ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue) {}
void UUI_BP_PottingDetails_C::Set_Up_Plotting_Legend(FName LockId, bool IsUnlocked, bool CanPlantInPlot, TArray<FLegendItemData> TempLegendDataArray, bool Temp_bool_Variable, FLegendItemData K2Node_MakeStruct_LegendItemData, TArray<FLegendItemData>& K2Node_MakeArray_Array, FTransfigurationUnlockSource CallFunc_GetUnlockSourceForLockID_static_ReturnValue) {}
void UUI_BP_PottingDetails_C::SetUpPlottingDetails(bool IsUnlocked, int32_t NewGrowthTime, FName PlantSize, FString CallFunc_Conv_NameToString_ReturnValue, UHerbPlotManager* CallFunc_BP_Get_ReturnValue, float CallFunc_GetGrowthTimeMultiplier_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32_t CallFunc_FTrunc_ReturnValue, FTimespan CallFunc_MakeTimespan_ReturnValue) {}
void UUI_BP_PottingDetails_C::InitPlottingData(FSeedInfo SeedInfo, bool CanPlantInPlot, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_PottingDetails.UI_BP_PottingDetails_C.InitPlottingData"));
    struct Params_InitPlottingData {
        FSeedInfo SeedInfo; // 0x0
        bool CanPlantInPlot; // 0x30
        char pad_31[0x7];
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x38
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x48
    }; // Size: 0x58
    Params_InitPlottingData params{};
    params.SeedInfo = (FSeedInfo)SeedInfo;
    params.CanPlantInPlot = (bool)CanPlantInPlot;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_PottingDetails_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_PottingDetails.UI_BP_PottingDetails_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
