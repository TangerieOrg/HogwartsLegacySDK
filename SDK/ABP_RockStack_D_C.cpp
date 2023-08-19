#include "ABP_Breakable_Fragile_C.hpp"
#include "ABP_RockStack_D_C.hpp"
ABP_RockStack_D_C* ABP_RockStack_D_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Overland_Common/Objects/Rocks/Blueprints/BP_RockStack_D.BP_RockStack_D_C");
    return (ABP_RockStack_D_C*)res;
}
