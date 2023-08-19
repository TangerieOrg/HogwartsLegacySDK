#include "UBorder.hpp"
#include "UHorizontalBox.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UUI_BP_HealthIncrease_C.hpp"
#include "UUserWidget.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_HealthIncrease_C* UUI_BP_HealthIncrease_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/XPMeter/UI_BP_HealthIncrease.UI_BP_HealthIncrease_C");
    return (UUI_BP_HealthIncrease_C*)res;
}
void UUI_BP_HealthIncrease_C::HealthUp(int32_t Health) {}
void UUI_BP_HealthIncrease_C::HealthUpNoAnim(int32_t Health) {}
