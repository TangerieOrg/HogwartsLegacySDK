#include "UEnemyWeapon_Manager.hpp"
#include "UObject.hpp"
UEnemyWeapon_Manager* UEnemyWeapon_Manager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnemyWeapon_Manager");
    return (UEnemyWeapon_Manager*)res;
}
