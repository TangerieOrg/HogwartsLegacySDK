#include "UPanelSlot.hpp"
#include "UPanelWidget.hpp"
#include "UVisual.hpp"
#include "UWidget.hpp"
UPanelSlot* UPanelSlot::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.PanelSlot");
    return (UPanelSlot*)res;
}
