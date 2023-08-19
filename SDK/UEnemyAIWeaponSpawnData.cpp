#include "UEnemyAIWeaponSpawnData.hpp"
#include "UEnemyAIWeaponSpawnDataBase.hpp"
UEnemyAIWeaponSpawnData* UEnemyAIWeaponSpawnData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnemyAIWeaponSpawnData");
    return (UEnemyAIWeaponSpawnData*)res;
}
