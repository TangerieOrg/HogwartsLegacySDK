#include "UClass.hpp"
#include "UEnemyAIWeaponSpawnDataBase.hpp"
#include "UObject.hpp"
UEnemyAIWeaponSpawnDataBase* UEnemyAIWeaponSpawnDataBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnemyAIWeaponSpawnDataBase");
    return (UEnemyAIWeaponSpawnDataBase*)res;
}
