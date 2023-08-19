#include "ABP_Breakable_Fragile_C.hpp"
#include "ABP_RockStack_A_C.hpp"
#include "FHitResult.hpp"
ABP_RockStack_A_C* ABP_RockStack_A_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Overland_Common/Objects/Rocks/Blueprints/BP_RockStack_A.BP_RockStack_A_C");
    return (ABP_RockStack_A_C*)res;
}
