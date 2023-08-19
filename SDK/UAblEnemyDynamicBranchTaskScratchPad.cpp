#include "EEnemy_Ability.hpp"
#include "UAblBranchTaskScratchPad.hpp"
#include "UAblEnemyDynamicBranchTaskScratchPad.hpp"
UAblEnemyDynamicBranchTaskScratchPad* UAblEnemyDynamicBranchTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblEnemyDynamicBranchTaskScratchPad");
    return (UAblEnemyDynamicBranchTaskScratchPad*)res;
}
