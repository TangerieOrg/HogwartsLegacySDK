#include "EUpdatePumpComponentMode.hpp"
#include "UActorComponent.hpp"
#include "UUpdatePumpComponent.hpp"
UUpdatePumpComponent* UUpdatePumpComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.UpdatePumpComponent");
    return (UUpdatePumpComponent*)res;
}
