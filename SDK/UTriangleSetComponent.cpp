#include "FBoxSphereBounds.hpp"
#include "UMeshComponent.hpp"
#include "UTriangleSetComponent.hpp"
UTriangleSetComponent* UTriangleSetComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/ModelingComponents.TriangleSetComponent");
    return (UTriangleSetComponent*)res;
}
