#include "UDebugConversationWindow.hpp"
#include "UDebugWindow.hpp"
UDebugConversationWindow* UDebugConversationWindow::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DebugConversationWindow");
    return (UDebugConversationWindow*)res;
}
