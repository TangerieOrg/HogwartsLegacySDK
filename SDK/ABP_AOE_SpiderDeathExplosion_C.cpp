#include "ABP_AOE_SpiderDeathExplosion_C.hpp"
#include "AMunitionType_AOE.hpp"
#include "USceneComponent.hpp"
ABP_AOE_SpiderDeathExplosion_C* ABP_AOE_SpiderDeathExplosion_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/Spider/Data/BP_AOE_SpiderDeathExplosion.BP_AOE_SpiderDeathExplosion_C");
    return (ABP_AOE_SpiderDeathExplosion_C*)res;
}
