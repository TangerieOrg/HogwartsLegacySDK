#include "ABP_Breakable_Persistent_C.hpp"
#include "ABP_Prop_Barrel_Breakable_A_C.hpp"
#include "UOdcAuthoredObstacleSetupComponent.hpp"
ABP_Prop_Barrel_Breakable_A_C* ABP_Prop_Barrel_Breakable_A_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Objects/Blueprints/BP_Prop_Barrel_Breakable_A.BP_Prop_Barrel_Breakable_A_C");
    return (ABP_Prop_Barrel_Breakable_A_C*)res;
}
