#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblEnemyHiddenTeleportAttackScratchpad.hpp"
#include "UEnemyHiddenTeleportAttackComponent.hpp"
UAblEnemyHiddenTeleportAttackScratchpad* UAblEnemyHiddenTeleportAttackScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblEnemyHiddenTeleportAttackScratchpad");
    return (UAblEnemyHiddenTeleportAttackScratchpad*)res;
}
