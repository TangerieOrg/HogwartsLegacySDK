#include "UEnemy_Companion_InstanceQBUpdateData.hpp"
#include "UEnemy_InstanceQBUpdateData.hpp"
UEnemy_Companion_InstanceQBUpdateData* UEnemy_Companion_InstanceQBUpdateData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_Companion_InstanceQBUpdateData");
    return (UEnemy_Companion_InstanceQBUpdateData*)res;
}
