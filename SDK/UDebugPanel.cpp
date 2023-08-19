#include "FDebugPanelControl.hpp"
#include "UDebugPanel.hpp"
#include "UObject.hpp"
UDebugPanel* UDebugPanel::StaticClass() {
    static auto res = find_uobject("Class /Script/DebugPanel.DebugPanel");
    return (UDebugPanel*)res;
}
