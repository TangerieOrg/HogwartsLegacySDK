#include "UEnemyAISpawnData.hpp"
#include "UObject.hpp"
UEnemyAISpawnData* UEnemyAISpawnData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnemyAISpawnData");
    return (UEnemyAISpawnData*)res;
}
