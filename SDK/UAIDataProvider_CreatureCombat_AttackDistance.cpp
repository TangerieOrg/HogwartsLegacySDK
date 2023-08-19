#include "ECreatureDataProviderValueRangeType.hpp"
#include "UAIDataProvider_CreatureCombat_AttackDistance.hpp"
#include "UAIDataProvider_QueryParams.hpp"
#include "UCreatureCombatAttackData.hpp"
UAIDataProvider_CreatureCombat_AttackDistance* UAIDataProvider_CreatureCombat_AttackDistance::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AIDataProvider_CreatureCombat_AttackDistance");
    return (UAIDataProvider_CreatureCombat_AttackDistance*)res;
}
