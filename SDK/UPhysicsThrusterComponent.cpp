#include "UPhysicsThrusterComponent.hpp"
#include "USceneComponent.hpp"
UPhysicsThrusterComponent* UPhysicsThrusterComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PhysicsThrusterComponent");
    return (UPhysicsThrusterComponent*)res;
}
