#include "UOdcCanvasTextComponent.hpp"
#include "UPrimitiveComponent.hpp"
UOdcCanvasTextComponent* UOdcCanvasTextComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/OdysseyRuntime.OdcCanvasTextComponent");
    return (UOdcCanvasTextComponent*)res;
}
