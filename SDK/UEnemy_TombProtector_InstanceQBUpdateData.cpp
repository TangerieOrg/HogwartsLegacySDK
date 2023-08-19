#include "UEnemy_InstanceQBUpdateData.hpp"
#include "UEnemy_TombProtector_InstanceQBUpdateData.hpp"
UEnemy_TombProtector_InstanceQBUpdateData* UEnemy_TombProtector_InstanceQBUpdateData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_TombProtector_InstanceQBUpdateData");
    return (UEnemy_TombProtector_InstanceQBUpdateData*)res;
}
