#include "AActor.hpp"
#include "ABP_CampB_CanopyC_C.hpp"
#include "UBoxComponent.hpp"
#include "UCameraStackVolumeComponent.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_CampB_CanopyC_C* ABP_CampB_CanopyC_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/BanditCamps/CampB/meshes/Tents/Blueprints/BP_CampB_CanopyC.BP_CampB_CanopyC_C");
    return (ABP_CampB_CanopyC_C*)res;
}
