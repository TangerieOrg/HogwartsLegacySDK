#include "ABP_SuperSonic_StealthTakedown_C.hpp"
#include "AMunitionType_SuperSonicSpell.hpp"
#include "USceneComponent.hpp"
ABP_SuperSonic_StealthTakedown_C* ABP_SuperSonic_StealthTakedown_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Munitions/BP_SuperSonic_StealthTakedown.BP_SuperSonic_StealthTakedown_C");
    return (ABP_SuperSonic_StealthTakedown_C*)res;
}
