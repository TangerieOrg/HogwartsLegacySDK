#include "ULocalizationDebuggerWindow.hpp"
#include "UObject.hpp"
#include "UUserWidget.hpp"
ULocalizationDebuggerWindow* ULocalizationDebuggerWindow::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LocalizationDebuggerWindow");
    return (ULocalizationDebuggerWindow*)res;
}
