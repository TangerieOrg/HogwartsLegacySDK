#include "ABP_Physics_GoblinWeapons_C.hpp"
#include "AMunitionType_Physics.hpp"
#include "USceneComponent.hpp"
ABP_Physics_GoblinWeapons_C* ABP_Physics_GoblinWeapons_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Munitions/BP_Physics_GoblinWeapons.BP_Physics_GoblinWeapons_C");
    return (ABP_Physics_GoblinWeapons_C*)res;
}
