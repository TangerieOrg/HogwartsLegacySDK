#include "UEnemy_Close_QBUpdateData.hpp"
#include "UEnemy_QBUpdateData.hpp"
UEnemy_Close_QBUpdateData* UEnemy_Close_QBUpdateData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_Close_QBUpdateData");
    return (UEnemy_Close_QBUpdateData*)res;
}
