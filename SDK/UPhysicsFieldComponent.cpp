#include "UPhysicsFieldComponent.hpp"
#include "USceneComponent.hpp"
UPhysicsFieldComponent* UPhysicsFieldComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PhysicsFieldComponent");
    return (UPhysicsFieldComponent*)res;
}
