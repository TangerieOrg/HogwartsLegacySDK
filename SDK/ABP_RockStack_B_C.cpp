#include "ABP_Breakable_Fragile_C.hpp"
#include "ABP_RockStack_B_C.hpp"
ABP_RockStack_B_C* ABP_RockStack_B_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Overland_Common/Objects/Rocks/Blueprints/BP_RockStack_B.BP_RockStack_B_C");
    return (ABP_RockStack_B_C*)res;
}
