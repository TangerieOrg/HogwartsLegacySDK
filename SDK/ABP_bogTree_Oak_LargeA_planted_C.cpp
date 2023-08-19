#include "AActor.hpp"
#include "ABP_bogTree_Oak_LargeA_planted_C.hpp"
#include "USceneComponent.hpp"
#include "USeasonSelectorComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_bogTree_Oak_LargeA_planted_C* ABP_bogTree_Oak_LargeA_planted_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Overland_Common/Objects/Trees/Blueprints/BP_bogTree_Oak_LargeA_planted.BP_bogTree_Oak_LargeA_planted_C");
    return (ABP_bogTree_Oak_LargeA_planted_C*)res;
}
