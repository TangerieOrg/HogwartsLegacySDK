#include "FGuid.hpp"
#include "FIntPoint.hpp"
#include "ULandscapeMeshProxyComponent.hpp"
#include "UStaticMeshComponent.hpp"
ULandscapeMeshProxyComponent* ULandscapeMeshProxyComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Landscape.LandscapeMeshProxyComponent");
    return (ULandscapeMeshProxyComponent*)res;
}
