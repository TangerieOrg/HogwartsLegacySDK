#include "UEnemy_Companion_QBUpdateData.hpp"
#include "UEnemy_QBUpdateData.hpp"
UEnemy_Companion_QBUpdateData* UEnemy_Companion_QBUpdateData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_Companion_QBUpdateData");
    return (UEnemy_Companion_QBUpdateData*)res;
}
