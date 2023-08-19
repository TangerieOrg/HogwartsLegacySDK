#include "UFunction.hpp"
#include "UPhoenixUserWidget.hpp"
#include "USavedGameButton.hpp"
USavedGameButton* USavedGameButton::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SavedGameButton");
    return (USavedGameButton*)res;
}
void USavedGameButton::MoveCursorToButton() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SavedGameButton.MoveCursorToButton"));
    struct Params_MoveCursorToButton {
    }; // Size: 0x0
    Params_MoveCursorToButton params{};
    ProcessEvent(func, &params);
}
