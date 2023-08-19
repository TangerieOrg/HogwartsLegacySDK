#include "ABP_Hitbox_Graphorn_Gallop_C.hpp"
#include "AMunitionType_AttackHitbox.hpp"
#include "USceneComponent.hpp"
ABP_Hitbox_Graphorn_Gallop_C* ABP_Hitbox_Graphorn_Gallop_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Munitions/BP_Hitbox_Graphorn_Gallop.BP_Hitbox_Graphorn_Gallop_C");
    return (ABP_Hitbox_Graphorn_Gallop_C*)res;
}
