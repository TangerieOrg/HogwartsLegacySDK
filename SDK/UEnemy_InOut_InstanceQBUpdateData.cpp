#include "UEnemy_InOut_InstanceQBUpdateData.hpp"
#include "UEnemy_InstanceQBUpdateData.hpp"
UEnemy_InOut_InstanceQBUpdateData* UEnemy_InOut_InstanceQBUpdateData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_InOut_InstanceQBUpdateData");
    return (UEnemy_InOut_InstanceQBUpdateData*)res;
}
