#include "UEnemy_InstanceQBUpdateData.hpp"
#include "UEnemy_TooClose_InstanceQBUpdateData.hpp"
UEnemy_TooClose_InstanceQBUpdateData* UEnemy_TooClose_InstanceQBUpdateData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_TooClose_InstanceQBUpdateData");
    return (UEnemy_TooClose_InstanceQBUpdateData*)res;
}
