#include "FLegendItemData.hpp"
#include "FSaveGameInfo.hpp"
#include "UFunction.hpp"
#include "UHorizontalBox.hpp"
#include "UImage.hpp"
#include "UOverlay.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UUI_BP_FrontEndDetails_C.hpp"
#include "UUI_BP_Legend_Horizontal_Tooltip_C.hpp"
#include "UVerticalBox.hpp"
void UUI_BP_FrontEndDetails_C::SetCharacterDetails(bool IsNewGame, FString CharacterName, FString Description, FSaveGameInfo LatestSave) {}
UUI_BP_FrontEndDetails_C* UUI_BP_FrontEndDetails_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/UI_BP_FrontEndDetails.UI_BP_FrontEndDetails_C");
    return (UUI_BP_FrontEndDetails_C*)res;
}
TArray<FString> UUI_BP_FrontEndDetails_C::GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1) {}
void UUI_BP_FrontEndDetails_C::SetButtonDetails(FString ButtonDescription) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEndDetails.UI_BP_FrontEndDetails_C.SetButtonDetails"));
    struct Params_SetButtonDetails {
        FString ButtonDescription; // 0x0
    }; // Size: 0x10
    Params_SetButtonDetails params{};
    params.ButtonDescription = (FString)ButtonDescription;
    ProcessEvent(func, &params);
}
void UUI_BP_FrontEndDetails_C::SetDetailsLegend(TArray<FLegendItemData>& LegendArray) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_FrontEndDetails.UI_BP_FrontEndDetails_C.SetDetailsLegend"));
    struct Params_SetDetailsLegend {
        TArray<FLegendItemData> LegendArray; // 0x0
    }; // Size: 0x10
    Params_SetDetailsLegend params{};
    params.LegendArray = (TArray<FLegendItemData>)LegendArray;
    ProcessEvent(func, &params);
    LegendArray = params.LegendArray;
}
