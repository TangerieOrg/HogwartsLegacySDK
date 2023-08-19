#include "UEnemy_Around_InstanceQBUpdateData.hpp"
#include "UEnemy_InstanceQBUpdateData.hpp"
UEnemy_Around_InstanceQBUpdateData* UEnemy_Around_InstanceQBUpdateData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_Around_InstanceQBUpdateData");
    return (UEnemy_Around_InstanceQBUpdateData*)res;
}
