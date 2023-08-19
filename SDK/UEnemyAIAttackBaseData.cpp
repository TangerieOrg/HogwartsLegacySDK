#include "FEnemyAIAttackDistData.hpp"
#include "FEnemyAIAttackDistTableDataContainer.hpp"
#include "UDataAsset.hpp"
#include "UEnemyAIAttackBaseData.hpp"
UEnemyAIAttackBaseData* UEnemyAIAttackBaseData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnemyAIAttackBaseData");
    return (UEnemyAIAttackBaseData*)res;
}
