#include "UAblAbilityTaskScratchPad.hpp"
#include "UablEnemy_AUSDecisionTaskScratchPad.hpp"
UablEnemy_AUSDecisionTaskScratchPad* UablEnemy_AUSDecisionTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablEnemy_AUSDecisionTaskScratchPad");
    return (UablEnemy_AUSDecisionTaskScratchPad*)res;
}
