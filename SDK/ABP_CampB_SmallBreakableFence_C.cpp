#include "ABP_Breakable_Persistent_C.hpp"
#include "ABP_CampB_SmallBreakableFence_C.hpp"
#include "UOdcAuthoredObstacleSetupComponent.hpp"
ABP_CampB_SmallBreakableFence_C* ABP_CampB_SmallBreakableFence_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/BanditCamps/BP_CampB_SmallBreakableFence.BP_CampB_SmallBreakableFence_C");
    return (ABP_CampB_SmallBreakableFence_C*)res;
}
