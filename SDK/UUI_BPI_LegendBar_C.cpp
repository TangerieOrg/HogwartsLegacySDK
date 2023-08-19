#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UUI_BPI_LegendBar_C.hpp"
UUI_BPI_LegendBar_C* UUI_BPI_LegendBar_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/UI/UIInterfaces/UI_BPI_LegendBar.UI_BPI_LegendBar_C");
    return (UUI_BPI_LegendBar_C*)res;
}
void UUI_BPI_LegendBar_C::I_SetButtonLegend(TArray<FString>& NewParam) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UIInterfaces/UI_BPI_LegendBar.UI_BPI_LegendBar_C.I_SetButtonLegend"));
    struct Params_I_SetButtonLegend {
        TArray<FString> NewParam; // 0x0
    }; // Size: 0x10
    Params_I_SetButtonLegend params{};
    params.NewParam = (TArray<FString>)NewParam;
    ProcessEvent(func, &params);
    NewParam = params.NewParam;
}
