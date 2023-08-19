#include "UEnemy_InstanceQBUpdateData.hpp"
#include "UEnemy_SwimToShore_InstanceQBUpdateData.hpp"
UEnemy_SwimToShore_InstanceQBUpdateData* UEnemy_SwimToShore_InstanceQBUpdateData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_SwimToShore_InstanceQBUpdateData");
    return (UEnemy_SwimToShore_InstanceQBUpdateData*)res;
}
