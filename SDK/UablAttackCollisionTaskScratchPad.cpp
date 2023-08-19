#include "UAblAbilityTaskScratchPad.hpp"
#include "UablAttackCollisionTaskScratchPad.hpp"
UablAttackCollisionTaskScratchPad* UablAttackCollisionTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablAttackCollisionTaskScratchPad");
    return (UablAttackCollisionTaskScratchPad*)res;
}
