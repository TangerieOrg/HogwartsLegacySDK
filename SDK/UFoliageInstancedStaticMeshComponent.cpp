#include "FGuid.hpp"
#include "UFoliageInstancedStaticMeshComponent.hpp"
#include "UHierarchicalInstancedStaticMeshComponent.hpp"
UFoliageInstancedStaticMeshComponent* UFoliageInstancedStaticMeshComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Foliage.FoliageInstancedStaticMeshComponent");
    return (UFoliageInstancedStaticMeshComponent*)res;
}
