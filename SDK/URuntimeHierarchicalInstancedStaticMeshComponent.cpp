#include "UHierarchicalInstancedStaticMeshComponent.hpp"
#include "URuntimeHierarchicalInstancedStaticMeshComponent.hpp"
URuntimeHierarchicalInstancedStaticMeshComponent* URuntimeHierarchicalInstancedStaticMeshComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Flow.RuntimeHierarchicalInstancedStaticMeshComponent");
    return (URuntimeHierarchicalInstancedStaticMeshComponent*)res;
}
