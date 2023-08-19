#include "UBoxComponent.hpp"
#include "UDoorBoxComponent.hpp"
UDoorBoxComponent* UDoorBoxComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DoorBoxComponent");
    return (UDoorBoxComponent*)res;
}
