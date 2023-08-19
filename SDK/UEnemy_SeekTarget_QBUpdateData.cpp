#include "UEnemy_QBUpdateData.hpp"
#include "UEnemy_SeekTarget_QBUpdateData.hpp"
UEnemy_SeekTarget_QBUpdateData* UEnemy_SeekTarget_QBUpdateData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_SeekTarget_QBUpdateData");
    return (UEnemy_SeekTarget_QBUpdateData*)res;
}
