#include "UEnemy_Close_InstanceQBUpdateData.hpp"
#include "UEnemy_InstanceQBUpdateData.hpp"
UEnemy_Close_InstanceQBUpdateData* UEnemy_Close_InstanceQBUpdateData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_Close_InstanceQBUpdateData");
    return (UEnemy_Close_InstanceQBUpdateData*)res;
}
