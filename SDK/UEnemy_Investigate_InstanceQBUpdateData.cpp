#include "UEnemy_InstanceQBUpdateData.hpp"
#include "UEnemy_Investigate_InstanceQBUpdateData.hpp"
UEnemy_Investigate_InstanceQBUpdateData* UEnemy_Investigate_InstanceQBUpdateData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_Investigate_InstanceQBUpdateData");
    return (UEnemy_Investigate_InstanceQBUpdateData*)res;
}
