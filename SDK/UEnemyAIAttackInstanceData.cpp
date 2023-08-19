#include "UEnemyAIAttackInstanceData.hpp"
#include "UEnemy_AttackExtraData.hpp"
#include "UObject.hpp"
UEnemyAIAttackInstanceData* UEnemyAIAttackInstanceData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnemyAIAttackInstanceData");
    return (UEnemyAIAttackInstanceData*)res;
}
