#include "UUI_BP_FG_PopupBorder_C.hpp"
#include "UUserWidget.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_FG_PopupBorder_C* UUI_BP_FG_PopupBorder_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/FieldGuide/UI_BP_FG_PopupBorder.UI_BP_FG_PopupBorder_C");
    return (UUI_BP_FG_PopupBorder_C*)res;
}
