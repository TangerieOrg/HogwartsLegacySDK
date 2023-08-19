#include "UEnemy_Around_QBUpdateData.hpp"
#include "UEnemy_QBUpdateData.hpp"
UEnemy_Around_QBUpdateData* UEnemy_Around_QBUpdateData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_Around_QBUpdateData");
    return (UEnemy_Around_QBUpdateData*)res;
}
