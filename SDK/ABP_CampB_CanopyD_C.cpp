#include "AActor.hpp"
#include "ABP_CampB_CanopyD_C.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_CampB_CanopyD_C* ABP_CampB_CanopyD_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/BanditCamps/CampB/meshes/Tents/Blueprints/BP_CampB_CanopyD.BP_CampB_CanopyD_C");
    return (ABP_CampB_CanopyD_C*)res;
}
