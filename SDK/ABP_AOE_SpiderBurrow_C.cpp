#include "ABP_AOE_SpiderBurrow_C.hpp"
#include "AMunitionType_AOESpell.hpp"
#include "USceneComponent.hpp"
ABP_AOE_SpiderBurrow_C* ABP_AOE_SpiderBurrow_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Munitions/BP_AOE_SpiderBurrow.BP_AOE_SpiderBurrow_C");
    return (ABP_AOE_SpiderBurrow_C*)res;
}
