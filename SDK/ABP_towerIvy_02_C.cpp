#include "AActor.hpp"
#include "ABP_towerIvy_02_C.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_towerIvy_02_C* ABP_towerIvy_02_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Overland_Common/Objects/Ivy/BluePrints/BP_towerIvy_02.BP_towerIvy_02_C");
    return (ABP_towerIvy_02_C*)res;
}
