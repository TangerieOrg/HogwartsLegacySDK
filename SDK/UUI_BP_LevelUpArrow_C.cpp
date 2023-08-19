#include "UUI_BP_LevelUpArrow_C.hpp"
#include "UUserWidget.hpp"
UUI_BP_LevelUpArrow_C* UUI_BP_LevelUpArrow_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/XPMeter/UI_BP_LevelUpArrow.UI_BP_LevelUpArrow_C");
    return (UUI_BP_LevelUpArrow_C*)res;
}
