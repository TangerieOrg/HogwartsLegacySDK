#include "UDrawSphereComponent.hpp"
#include "USphereComponent.hpp"
UDrawSphereComponent* UDrawSphereComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.DrawSphereComponent");
    return (UDrawSphereComponent*)res;
}
