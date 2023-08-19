#include "UStaticMeshComponent.hpp"
#include "UWaterCollisionComponent.hpp"
UWaterCollisionComponent* UWaterCollisionComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Flow.WaterCollisionComponent");
    return (UWaterCollisionComponent*)res;
}
