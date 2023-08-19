#include "UNavMeshRenderingComponent.hpp"
#include "UPrimitiveComponent.hpp"
UNavMeshRenderingComponent* UNavMeshRenderingComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/NavigationSystem.NavMeshRenderingComponent");
    return (UNavMeshRenderingComponent*)res;
}
