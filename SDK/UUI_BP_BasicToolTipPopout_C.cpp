#include "UFunction.hpp"
#include "UUI_BP_BasicToolTipPopout_C.hpp"
#include "UUI_BP_LegendBox_C.hpp"
#include "UUserWidget.hpp"
UUI_BP_BasicToolTipPopout_C* UUI_BP_BasicToolTipPopout_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Common/Popouts/UI_BP_BasicToolTipPopout.UI_BP_BasicToolTipPopout_C");
    return (UUI_BP_BasicToolTipPopout_C*)res;
}
void UUI_BP_BasicToolTipPopout_C::AddToolTipData(FString NewCallout, FString newText, TArray<FString>& K2Node_MakeArray_Array) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Popouts/UI_BP_BasicToolTipPopout.UI_BP_BasicToolTipPopout_C.AddToolTipData"));
    struct Params_AddToolTipData {
        FString NewCallout; // 0x0
        FString newText; // 0x10
        TArray<FString> K2Node_MakeArray_Array; // 0x20
    }; // Size: 0x30
    Params_AddToolTipData params{};
    params.NewCallout = (FString)NewCallout;
    params.newText = (FString)newText;
    params.K2Node_MakeArray_Array = (TArray<FString>)K2Node_MakeArray_Array;
    ProcessEvent(func, &params);
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
}
