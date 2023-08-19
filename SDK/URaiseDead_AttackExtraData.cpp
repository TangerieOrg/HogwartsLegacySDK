#include "ENPC_Spawn.hpp"
#include "UEnemy_AttackExtraData.hpp"
#include "UFunction.hpp"
#include "URaiseDead_AttackExtraData.hpp"
URaiseDead_AttackExtraData* URaiseDead_AttackExtraData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RaiseDead_AttackExtraData");
    return (URaiseDead_AttackExtraData*)res;
}
void URaiseDead_AttackExtraData::SetSpawnEligible(bool bspawnEligible) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RaiseDead_AttackExtraData.SetSpawnEligible"));
    struct Params_SetSpawnEligible {
        bool bspawnEligible; // 0x0
    }; // Size: 0x1
    Params_SetSpawnEligible params{};
    params.bspawnEligible = (bool)bspawnEligible;
    ProcessEvent(func, &params);
}
