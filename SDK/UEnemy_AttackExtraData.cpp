#include "UEnemy_AttackExtraData.hpp"
#include "UObject.hpp"
UEnemy_AttackExtraData* UEnemy_AttackExtraData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_AttackExtraData");
    return (UEnemy_AttackExtraData*)res;
}
