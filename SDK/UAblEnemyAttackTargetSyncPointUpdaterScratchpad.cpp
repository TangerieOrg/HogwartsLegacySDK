#include "UAblAvaMotionWarpSyncPointUpdaterScratchpad.hpp"
#include "UAblEnemyAttackTargetSyncPointUpdaterScratchpad.hpp"
UAblEnemyAttackTargetSyncPointUpdaterScratchpad* UAblEnemyAttackTargetSyncPointUpdaterScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblEnemyAttackTargetSyncPointUpdaterScratchpad");
    return (UAblEnemyAttackTargetSyncPointUpdaterScratchpad*)res;
}
