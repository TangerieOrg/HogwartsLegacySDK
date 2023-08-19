#include "UDebugStoryGraphWindow.hpp"
#include "UDebugWindow.hpp"
UDebugStoryGraphWindow* UDebugStoryGraphWindow::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.DebugStoryGraphWindow");
    return (UDebugStoryGraphWindow*)res;
}
