#include "UAblAvaMotionWarpSyncPointUpdater.hpp"
#include "UAblEnemyAttackTargetSyncPointUpdater.hpp"
UAblEnemyAttackTargetSyncPointUpdater* UAblEnemyAttackTargetSyncPointUpdater::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblEnemyAttackTargetSyncPointUpdater");
    return (UAblEnemyAttackTargetSyncPointUpdater*)res;
}
