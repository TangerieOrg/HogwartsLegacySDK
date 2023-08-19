#include "FBoxSphereBounds.hpp"
#include "UMaterialInterface.hpp"
#include "UMeshComponent.hpp"
#include "UPointSetComponent.hpp"
UPointSetComponent* UPointSetComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/ModelingComponents.PointSetComponent");
    return (UPointSetComponent*)res;
}
