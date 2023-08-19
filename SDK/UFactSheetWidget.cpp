#include "UFactSheetWidget.hpp"
#include "UFunction.hpp"
#include "UTabPageWidget.hpp"
UFactSheetWidget* UFactSheetWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FactSheetWidget");
    return (UFactSheetWidget*)res;
}
bool UFactSheetWidget::SetFactSheetData(FString ItemName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FactSheetWidget.SetFactSheetData"));
    struct Params_SetFactSheetData {
        FString ItemName; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_SetFactSheetData params{};
    params.ItemName = (FString)ItemName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
