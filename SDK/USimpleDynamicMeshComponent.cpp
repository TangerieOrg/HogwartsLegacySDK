#include "EDynamicMeshTangentCalcType.hpp"
#include "UBaseDynamicMeshComponent.hpp"
#include "USimpleDynamicMeshComponent.hpp"
USimpleDynamicMeshComponent* USimpleDynamicMeshComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/ModelingComponents.SimpleDynamicMeshComponent");
    return (USimpleDynamicMeshComponent*)res;
}
