#include "UPhysicalResponseComponent.hpp"
#include "UPhysicalResponseConfig.hpp"
#include "USceneComponent.hpp"
UPhysicalResponseComponent* UPhysicalResponseComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhysicalResponseComponent");
    return (UPhysicalResponseComponent*)res;
}
