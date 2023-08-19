#include "AMunitionType_Hitbox.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
#include "UablAttackHitboxTaskScratchPad.hpp"
UablAttackHitboxTaskScratchPad* UablAttackHitboxTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablAttackHitboxTaskScratchPad");
    return (UablAttackHitboxTaskScratchPad*)res;
}
