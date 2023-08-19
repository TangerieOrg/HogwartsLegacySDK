#include "ABP_AOE_SpiderEgg_C.hpp"
#include "AMunitionType_AOE_MultiFX.hpp"
#include "USceneComponent.hpp"
ABP_AOE_SpiderEgg_C* ABP_AOE_SpiderEgg_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Munitions/BP_AOE_SpiderEgg.BP_AOE_SpiderEgg_C");
    return (ABP_AOE_SpiderEgg_C*)res;
}
