#include "ESimpleUpdatePumpComponentMode.hpp"
#include "UActorComponent.hpp"
#include "USimpleUpdatePumpComponent.hpp"
USimpleUpdatePumpComponent* USimpleUpdatePumpComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.SimpleUpdatePumpComponent");
    return (USimpleUpdatePumpComponent*)res;
}
