#include "UTextBlock.hpp"
#include "UUserWidget.hpp"
#include "UWidget_DebugHUD_C.hpp"
UWidget_DebugHUD_C* UWidget_DebugHUD_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/Pawn/Shared/Ambulatory/Widget_DebugHUD.Widget_DebugHUD_C");
    return (UWidget_DebugHUD_C*)res;
}
