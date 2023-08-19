#include "UBaseDynamicMeshComponent.hpp"
#include "UOctreeDynamicMeshComponent.hpp"
UOctreeDynamicMeshComponent* UOctreeDynamicMeshComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/ModelingComponents.OctreeDynamicMeshComponent");
    return (UOctreeDynamicMeshComponent*)res;
}
