#include "UEnemy_QBUpdate.hpp"
#include "UEnemy_RecoverWeapon_QBUpdate.hpp"
UEnemy_RecoverWeapon_QBUpdate* UEnemy_RecoverWeapon_QBUpdate::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_RecoverWeapon_QBUpdate");
    return (UEnemy_RecoverWeapon_QBUpdate*)res;
}
