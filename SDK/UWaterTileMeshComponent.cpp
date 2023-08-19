#include "FVector4.hpp"
#include "FWaterMeshAccelerationStructure.hpp"
#include "UFunction.hpp"
#include "UInstancedStaticMeshComponent.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "URuntimeHierarchicalInstancedStaticMeshComponent.hpp"
#include "USceneComponent.hpp"
#include "UStaticMesh.hpp"
#include "UTexture.hpp"
#include "UWaterTileMeshComponent.hpp"
UWaterTileMeshComponent* UWaterTileMeshComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Flow.WaterTileMeshComponent");
    return (UWaterTileMeshComponent*)res;
}
void UWaterTileMeshComponent::RebuildAccelerationStructure() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Flow.WaterTileMeshComponent.RebuildAccelerationStructure"));
    struct Params_RebuildAccelerationStructure {
    }; // Size: 0x0
    Params_RebuildAccelerationStructure params{};
    ProcessEvent(func, &params);
}
