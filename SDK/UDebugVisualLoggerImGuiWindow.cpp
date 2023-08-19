#include "UDebugVisualLoggerImGuiWindow.hpp"
#include "UObject.hpp"
UDebugVisualLoggerImGuiWindow* UDebugVisualLoggerImGuiWindow::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DebugVisualLoggerImGuiWindow");
    return (UDebugVisualLoggerImGuiWindow*)res;
}
