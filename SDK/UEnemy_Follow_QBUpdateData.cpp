#include "AActor.hpp"
#include "UEnemy_Follow_QBUpdateData.hpp"
#include "UEnemy_QBUpdateData.hpp"
UEnemy_Follow_QBUpdateData* UEnemy_Follow_QBUpdateData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_Follow_QBUpdateData");
    return (UEnemy_Follow_QBUpdateData*)res;
}
