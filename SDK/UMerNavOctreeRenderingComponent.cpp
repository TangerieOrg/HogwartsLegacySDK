#include "UMerNavOctreeRenderingComponent.hpp"
#include "UMeshComponent.hpp"
UMerNavOctreeRenderingComponent* UMerNavOctreeRenderingComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Mercuna.MerNavOctreeRenderingComponent");
    return (UMerNavOctreeRenderingComponent*)res;
}
