#include "UMaterialSwapMeshState.hpp"
#include "UMaterialSwapMeshStatesBaseComponent.hpp"
#include "UMaterialSwapMeshStatesComponent.hpp"
UMaterialSwapMeshStatesComponent* UMaterialSwapMeshStatesComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapMeshStatesComponent");
    return (UMaterialSwapMeshStatesComponent*)res;
}
