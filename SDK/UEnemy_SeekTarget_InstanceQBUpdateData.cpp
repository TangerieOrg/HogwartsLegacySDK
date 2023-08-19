#include "UEnemy_InstanceQBUpdateData.hpp"
#include "UEnemy_SeekTarget_InstanceQBUpdateData.hpp"
UEnemy_SeekTarget_InstanceQBUpdateData* UEnemy_SeekTarget_InstanceQBUpdateData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_SeekTarget_InstanceQBUpdateData");
    return (UEnemy_SeekTarget_InstanceQBUpdateData*)res;
}
