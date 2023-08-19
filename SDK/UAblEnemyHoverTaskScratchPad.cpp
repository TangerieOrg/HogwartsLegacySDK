#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblEnemyHoverTaskScratchPad.hpp"
UAblEnemyHoverTaskScratchPad* UAblEnemyHoverTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblEnemyHoverTaskScratchPad");
    return (UAblEnemyHoverTaskScratchPad*)res;
}
