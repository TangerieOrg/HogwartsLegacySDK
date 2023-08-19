#include "UEnemy_Evade_InstanceQBUpdateData.hpp"
#include "UEnemy_InstanceQBUpdateData.hpp"
UEnemy_Evade_InstanceQBUpdateData* UEnemy_Evade_InstanceQBUpdateData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_Evade_InstanceQBUpdateData");
    return (UEnemy_Evade_InstanceQBUpdateData*)res;
}
