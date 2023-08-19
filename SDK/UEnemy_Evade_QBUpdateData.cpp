#include "UEnemy_Evade_QBUpdateData.hpp"
#include "UEnemy_QBUpdateData.hpp"
UEnemy_Evade_QBUpdateData* UEnemy_Evade_QBUpdateData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_Evade_QBUpdateData");
    return (UEnemy_Evade_QBUpdateData*)res;
}
