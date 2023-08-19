#include "UEnemy_InstanceQBUpdateData.hpp"
#include "UEnemy_RecoverWeapon_InstanceQBUpdateData.hpp"
UEnemy_RecoverWeapon_InstanceQBUpdateData* UEnemy_RecoverWeapon_InstanceQBUpdateData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_RecoverWeapon_InstanceQBUpdateData");
    return (UEnemy_RecoverWeapon_InstanceQBUpdateData*)res;
}
