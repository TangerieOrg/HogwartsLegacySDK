#include "FMaterialSwapRules.hpp"
#include "UMaterialSwapMeshState.hpp"
#include "UMaterialSwapMeshStatesBaseComponent.hpp"
#include "UMaterialSwapMeshStatesRulesComponent.hpp"
UMaterialSwapMeshStatesRulesComponent* UMaterialSwapMeshStatesRulesComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapMeshStatesRulesComponent");
    return (UMaterialSwapMeshStatesRulesComponent*)res;
}
