#include "FEnemyMoveTaskEntry.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblEnemyMoveTaskScratchPad.hpp"
UAblEnemyMoveTaskScratchPad* UAblEnemyMoveTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblEnemyMoveTaskScratchPad");
    return (UAblEnemyMoveTaskScratchPad*)res;
}
