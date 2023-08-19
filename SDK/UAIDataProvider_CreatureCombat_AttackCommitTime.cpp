#include "UAIDataProvider_CreatureCombat_AttackCommitTime.hpp"
#include "UAIDataProvider_QueryParams.hpp"
#include "UCreatureCombatAttackData.hpp"
UAIDataProvider_CreatureCombat_AttackCommitTime* UAIDataProvider_CreatureCombat_AttackCommitTime::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AIDataProvider_CreatureCombat_AttackCommitTime");
    return (UAIDataProvider_CreatureCombat_AttackCommitTime*)res;
}
