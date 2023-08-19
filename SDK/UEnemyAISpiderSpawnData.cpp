#include "EEnemySpiderAISpawnType.hpp"
#include "UEnemyAISpawnData.hpp"
#include "UEnemyAISpiderSpawnData.hpp"
UEnemyAISpiderSpawnData* UEnemyAISpiderSpawnData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnemyAISpiderSpawnData");
    return (UEnemyAISpiderSpawnData*)res;
}
