#include "UEnemy_QBUpdateData.hpp"
#include "UObject.hpp"
UEnemy_QBUpdateData* UEnemy_QBUpdateData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_QBUpdateData");
    return (UEnemy_QBUpdateData*)res;
}
