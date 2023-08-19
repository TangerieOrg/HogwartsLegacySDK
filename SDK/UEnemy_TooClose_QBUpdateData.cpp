#include "UEnemy_QBUpdateData.hpp"
#include "UEnemy_TooClose_QBUpdateData.hpp"
UEnemy_TooClose_QBUpdateData* UEnemy_TooClose_QBUpdateData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_TooClose_QBUpdateData");
    return (UEnemy_TooClose_QBUpdateData*)res;
}
