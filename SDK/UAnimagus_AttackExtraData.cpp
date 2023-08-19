#include "ENPC_Spawn.hpp"
#include "UAnimagus_AttackExtraData.hpp"
#include "UEnemy_AttackExtraData.hpp"
UAnimagus_AttackExtraData* UAnimagus_AttackExtraData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Animagus_AttackExtraData");
    return (UAnimagus_AttackExtraData*)res;
}
