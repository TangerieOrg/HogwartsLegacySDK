#include "UActorComponent.hpp"
#include "UFlockingActorComponent.hpp"
UFlockingActorComponent* UFlockingActorComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FlockingActorComponent");
    return (UFlockingActorComponent*)res;
}
