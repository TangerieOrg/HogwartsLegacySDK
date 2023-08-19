#include "ABP_Breakable_Persistent_C.hpp"
#include "ABP_Destructible_Stool_01_C.hpp"
ABP_Destructible_Stool_01_C* ABP_Destructible_Stool_01_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Cavern_Dungeon/Blueprints/Props/BP_Destructible_Stool_01.BP_Destructible_Stool_01_C");
    return (ABP_Destructible_Stool_01_C*)res;
}
