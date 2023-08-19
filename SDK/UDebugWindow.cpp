#include "UDebugWindow.hpp"
#include "UObject.hpp"
UDebugWindow* UDebugWindow::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.DebugWindow");
    return (UDebugWindow*)res;
}
