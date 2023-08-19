#include "ENPC_Spawn.hpp"
#include "UEnemy_AttackExtraData.hpp"
#include "USummonReinforcements_AttackExtraData.hpp"
USummonReinforcements_AttackExtraData* USummonReinforcements_AttackExtraData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SummonReinforcements_AttackExtraData");
    return (USummonReinforcements_AttackExtraData*)res;
}
