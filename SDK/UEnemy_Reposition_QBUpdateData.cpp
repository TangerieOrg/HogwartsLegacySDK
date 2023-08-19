#include "UEnemy_QBUpdateData.hpp"
#include "UEnemy_Reposition_QBUpdateData.hpp"
UEnemy_Reposition_QBUpdateData* UEnemy_Reposition_QBUpdateData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_Reposition_QBUpdateData");
    return (UEnemy_Reposition_QBUpdateData*)res;
}
