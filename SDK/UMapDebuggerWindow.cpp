#include "AActor.hpp"
#include "UMapDebuggerWindow.hpp"
#include "UObject.hpp"
UMapDebuggerWindow* UMapDebuggerWindow::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MapDebuggerWindow");
    return (UMapDebuggerWindow*)res;
}
