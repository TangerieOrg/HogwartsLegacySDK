#include "UEnemy_Direct_InstanceQBUpdateData.hpp"
#include "UEnemy_InstanceQBUpdateData.hpp"
UEnemy_Direct_InstanceQBUpdateData* UEnemy_Direct_InstanceQBUpdateData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_Direct_InstanceQBUpdateData");
    return (UEnemy_Direct_InstanceQBUpdateData*)res;
}
