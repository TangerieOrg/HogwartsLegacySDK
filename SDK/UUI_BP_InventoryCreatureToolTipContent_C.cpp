#include "UUI_BP_InventoryCreatureToolTipContent_C.hpp"
#include "UUserWidget.hpp"
UUI_BP_InventoryCreatureToolTipContent_C* UUI_BP_InventoryCreatureToolTipContent_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Common/ToolTipContent/UI_BP_InventoryCreatureToolTipContent.UI_BP_InventoryCreatureToolTipContent_C");
    return (UUI_BP_InventoryCreatureToolTipContent_C*)res;
}
