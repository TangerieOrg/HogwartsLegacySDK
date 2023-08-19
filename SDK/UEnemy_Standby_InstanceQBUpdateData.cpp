#include "UEnemy_InstanceQBUpdateData.hpp"
#include "UEnemy_Standby_InstanceQBUpdateData.hpp"
UEnemy_Standby_InstanceQBUpdateData* UEnemy_Standby_InstanceQBUpdateData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_Standby_InstanceQBUpdateData");
    return (UEnemy_Standby_InstanceQBUpdateData*)res;
}
