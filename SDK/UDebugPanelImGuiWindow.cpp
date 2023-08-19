#include "UDebugPanelImGuiWindow.hpp"
#include "UObject.hpp"
UDebugPanelImGuiWindow* UDebugPanelImGuiWindow::StaticClass() {
    static auto res = find_uobject("Class /Script/DebugPanel.DebugPanelImGuiWindow");
    return (UDebugPanelImGuiWindow*)res;
}
