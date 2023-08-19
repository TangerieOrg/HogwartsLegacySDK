#include "UEnemy_BackOnNav_InstanceQBUpdateData.hpp"
#include "UEnemy_InstanceQBUpdateData.hpp"
UEnemy_BackOnNav_InstanceQBUpdateData* UEnemy_BackOnNav_InstanceQBUpdateData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_BackOnNav_InstanceQBUpdateData");
    return (UEnemy_BackOnNav_InstanceQBUpdateData*)res;
}
