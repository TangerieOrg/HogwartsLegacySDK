#include "UHUDElementGroup.hpp"
#include "UImage.hpp"
#include "UUI_BP_UnreadMailIcon_C.hpp"
UUI_BP_UnreadMailIcon_C* UUI_BP_UnreadMailIcon_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/UI_BP_UnreadMailIcon.UI_BP_UnreadMailIcon_C");
    return (UUI_BP_UnreadMailIcon_C*)res;
}
