#include "UEnemy_InstanceQBUpdateData.hpp"
#include "UEnemy_Reposition_InstanceQBUpdateData.hpp"
UEnemy_Reposition_InstanceQBUpdateData* UEnemy_Reposition_InstanceQBUpdateData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_Reposition_InstanceQBUpdateData");
    return (UEnemy_Reposition_InstanceQBUpdateData*)res;
}
