#include "UEnemy_QBUpdateData.hpp"
#include "UEnemy_TombProtector_QBUpdateData.hpp"
#include "UEnemy_TombProtector_QBUpdateDataAsset.hpp"
UEnemy_TombProtector_QBUpdateData* UEnemy_TombProtector_QBUpdateData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_TombProtector_QBUpdateData");
    return (UEnemy_TombProtector_QBUpdateData*)res;
}
