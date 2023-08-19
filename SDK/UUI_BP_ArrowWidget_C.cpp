#include "UImage.hpp"
#include "UUI_BP_ArrowWidget_C.hpp"
#include "UUserWidget.hpp"
UUI_BP_ArrowWidget_C* UUI_BP_ArrowWidget_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/AudioVisualizer/UI_BP_ArrowWidget.UI_BP_ArrowWidget_C");
    return (UUI_BP_ArrowWidget_C*)res;
}
