#include "UEnemy_InstanceQBUpdateData.hpp"
#include "UObject.hpp"
UEnemy_InstanceQBUpdateData* UEnemy_InstanceQBUpdateData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_InstanceQBUpdateData");
    return (UEnemy_InstanceQBUpdateData*)res;
}
