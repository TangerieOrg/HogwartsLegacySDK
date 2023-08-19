#include "UFunction.hpp"
#include "UMenuTextButton.hpp"
#include "UUserWidget.hpp"
UMenuTextButton* UMenuTextButton::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MenuTextButton");
    return (UMenuTextButton*)res;
}
void UMenuTextButton::MoveCursorToButton() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MenuTextButton.MoveCursorToButton"));
    struct Params_MoveCursorToButton {
    }; // Size: 0x0
    Params_MoveCursorToButton params{};
    ProcessEvent(func, &params);
}
