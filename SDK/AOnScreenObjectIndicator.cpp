#include "AActor.hpp"
#include "AOnScreenObjectIndicator.hpp"
#include "UCanvasPanelSlot.hpp"
#include "UClass.hpp"
#include "UUserWidget.hpp"
#include "UWidgetComponent.hpp"
AOnScreenObjectIndicator* AOnScreenObjectIndicator::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.OnScreenObjectIndicator");
    return (AOnScreenObjectIndicator*)res;
}
