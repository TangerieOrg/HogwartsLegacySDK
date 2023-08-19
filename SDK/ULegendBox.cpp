#include "UFunction.hpp"
#include "ULegendBox.hpp"
#include "UUserWidget.hpp"
ULegendBox* ULegendBox::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LegendBox");
    return (ULegendBox*)res;
}
void ULegendBox::MoveCursorToButton() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LegendBox.MoveCursorToButton"));
    struct Params_MoveCursorToButton {
    }; // Size: 0x0
    Params_MoveCursorToButton params{};
    ProcessEvent(func, &params);
}
