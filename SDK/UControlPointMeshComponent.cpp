#include "UControlPointMeshComponent.hpp"
#include "UStaticMeshComponent.hpp"
UControlPointMeshComponent* UControlPointMeshComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Landscape.ControlPointMeshComponent");
    return (UControlPointMeshComponent*)res;
}
