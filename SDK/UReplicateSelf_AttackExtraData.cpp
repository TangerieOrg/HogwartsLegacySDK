#include "ENPC_Spawn.hpp"
#include "FGameplayTag.hpp"
#include "UEnemy_AttackExtraData.hpp"
#include "UReplicateSelf_AttackExtraData.hpp"
UReplicateSelf_AttackExtraData* UReplicateSelf_AttackExtraData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ReplicateSelf_AttackExtraData");
    return (UReplicateSelf_AttackExtraData*)res;
}
