#include "EEnemyGoblinAISpawnType.hpp"
#include "UEnemyAIGoblinSpawnData.hpp"
#include "UEnemyAISpawnData.hpp"
UEnemyAIGoblinSpawnData* UEnemyAIGoblinSpawnData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnemyAIGoblinSpawnData");
    return (UEnemyAIGoblinSpawnData*)res;
}
