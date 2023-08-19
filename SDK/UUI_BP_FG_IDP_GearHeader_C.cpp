#include "FDataTableRowHandle.hpp"
#include "UBorder.hpp"
#include "UFunction.hpp"
#include "UPhoenixImage.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UUI_BP_FG_IDP_GearHeader_C.hpp"
UUI_BP_FG_IDP_GearHeader_C* UUI_BP_FG_IDP_GearHeader_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_IDP_GearHeader.UI_BP_FG_IDP_GearHeader_C");
    return (UUI_BP_FG_IDP_GearHeader_C*)res;
}
TArray<FString> UUI_BP_FG_IDP_GearHeader_C::GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue) {}
void UUI_BP_FG_IDP_GearHeader_C::SetHeaderData(FString headerTitle, FString headerQualtiy, FName Rarity, bool& ShowRarityGraphics, FString CallFunc_Conv_NameToString_ReturnValue, FDataTableRowHandle CallFunc_GetRarityColorTag_ColorTag, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue_2, FDataTableRowHandle CallFunc_GetRarityColorTag_ColorTag_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_IDP_GearHeader.UI_BP_FG_IDP_GearHeader_C.SetHeaderData"));
    struct Params_SetHeaderData {
        FString headerTitle; // 0x0
        FString headerQualtiy; // 0x10
        FName Rarity; // 0x20
        bool ShowRarityGraphics; // 0x28
        char pad_29[0x7];
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x30
        FDataTableRowHandle CallFunc_GetRarityColorTag_ColorTag; // 0x40
        bool CallFunc_NotEqual_NameName_ReturnValue; // 0x50
        bool CallFunc_NotEqual_NameName_ReturnValue_1; // 0x51
        bool CallFunc_NotEqual_NameName_ReturnValue_2; // 0x52
        char pad_53[0x5];
        FDataTableRowHandle CallFunc_GetRarityColorTag_ColorTag_1; // 0x58
        bool CallFunc_BooleanAND_ReturnValue; // 0x68
        bool CallFunc_BooleanAND_ReturnValue_1; // 0x69
    }; // Size: 0x6a
    Params_SetHeaderData params{};
    params.headerTitle = (FString)headerTitle;
    params.headerQualtiy = (FString)headerQualtiy;
    params.Rarity = (FName)Rarity;
    params.ShowRarityGraphics = (bool)ShowRarityGraphics;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_GetRarityColorTag_ColorTag = (FDataTableRowHandle)CallFunc_GetRarityColorTag_ColorTag;
    params.CallFunc_NotEqual_NameName_ReturnValue = (bool)CallFunc_NotEqual_NameName_ReturnValue;
    params.CallFunc_NotEqual_NameName_ReturnValue_1 = (bool)CallFunc_NotEqual_NameName_ReturnValue_1;
    params.CallFunc_NotEqual_NameName_ReturnValue_2 = (bool)CallFunc_NotEqual_NameName_ReturnValue_2;
    params.CallFunc_GetRarityColorTag_ColorTag_1 = (FDataTableRowHandle)CallFunc_GetRarityColorTag_ColorTag_1;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue_1 = (bool)CallFunc_BooleanAND_ReturnValue_1;
    ProcessEvent(func, &params);
    ShowRarityGraphics = params.ShowRarityGraphics;
}
