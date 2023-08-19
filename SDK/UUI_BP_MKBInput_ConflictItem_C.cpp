#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UUI_BP_MKBInput_ConflictItem_C.hpp"
UUI_BP_MKBInput_ConflictItem_C* UUI_BP_MKBInput_ConflictItem_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/OptionsMenu/UI_BP_MKBInput_ConflictItem.UI_BP_MKBInput_ConflictItem_C");
    return (UUI_BP_MKBInput_ConflictItem_C*)res;
}
TArray<FString> UUI_BP_MKBInput_ConflictItem_C::GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue) {}
void UUI_BP_MKBInput_ConflictItem_C::ExecuteUbergraph_UI_BP_MKBInput_ConflictItem(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_MKBInput_ConflictItem.UI_BP_MKBInput_ConflictItem_C.ExecuteUbergraph_UI_BP_MKBInput_ConflictItem"));
    struct Params_ExecuteUbergraph_UI_BP_MKBInput_ConflictItem {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_UI_BP_MKBInput_ConflictItem params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
void UUI_BP_MKBInput_ConflictItem_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_MKBInput_ConflictItem.UI_BP_MKBInput_ConflictItem_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
