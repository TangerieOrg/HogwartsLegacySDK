#include "FVector.hpp"
#include "UEnemy_Duel_InstanceQBUpdateData.hpp"
#include "UEnemy_InstanceQBUpdateData.hpp"
UEnemy_Duel_InstanceQBUpdateData* UEnemy_Duel_InstanceQBUpdateData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_Duel_InstanceQBUpdateData");
    return (UEnemy_Duel_InstanceQBUpdateData*)res;
}
