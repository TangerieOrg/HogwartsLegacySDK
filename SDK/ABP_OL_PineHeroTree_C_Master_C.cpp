#include "AActor.hpp"
#include "ABP_OL_PineHeroTree_C_Master_C.hpp"
#include "USceneComponent.hpp"
#include "USeasonSelectorComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_OL_PineHeroTree_C_Master_C* ABP_OL_PineHeroTree_C_Master_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Overland_Common/Objects/Trees/Blueprints/BP_OL_PineHeroTree_C_Master.BP_OL_PineHeroTree_C_Master_C");
    return (ABP_OL_PineHeroTree_C_Master_C*)res;
}
