#include "UEnemy_AttackExtraData.hpp"
#include "UTauntDragon_AttackExtraData.hpp"
UTauntDragon_AttackExtraData* UTauntDragon_AttackExtraData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TauntDragon_AttackExtraData");
    return (UTauntDragon_AttackExtraData*)res;
}
