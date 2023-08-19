#include "ABP_Breakable_Fragile_C.hpp"
#include "ABP_Cav_DestructibleJug_02_C.hpp"
#include "UOdcAuthoredObstacleSetupComponent.hpp"
ABP_Cav_DestructibleJug_02_C* ABP_Cav_DestructibleJug_02_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Cavern_Dungeon/Blueprints/Props/BP_Cav_DestructibleJug_02.BP_Cav_DestructibleJug_02_C");
    return (ABP_Cav_DestructibleJug_02_C*)res;
}
