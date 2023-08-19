#include "UEnemy_Alert_InstanceQBUpdateData.hpp"
#include "UEnemy_InstanceQBUpdateData.hpp"
UEnemy_Alert_InstanceQBUpdateData* UEnemy_Alert_InstanceQBUpdateData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_Alert_InstanceQBUpdateData");
    return (UEnemy_Alert_InstanceQBUpdateData*)res;
}
