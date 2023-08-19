#include "UActorComponent.hpp"
#include "UInstancedTrailActorComponent.hpp"
UInstancedTrailActorComponent* UInstancedTrailActorComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.InstancedTrailActorComponent");
    return (UInstancedTrailActorComponent*)res;
}
