#include "FCreatureCombatAttackParryData.hpp"
#include "FVector2D.hpp"
#include "UCreatureCombatAttackData.hpp"
#include "UCreatureCombatData.hpp"
UCreatureCombatAttackData* UCreatureCombatAttackData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureCombatAttackData");
    return (UCreatureCombatAttackData*)res;
}
