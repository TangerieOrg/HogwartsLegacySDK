#include "UBaseDynamicMeshComponent.hpp"
#include "UMeshComponent.hpp"
UBaseDynamicMeshComponent* UBaseDynamicMeshComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/ModelingComponents.BaseDynamicMeshComponent");
    return (UBaseDynamicMeshComponent*)res;
}
