#include "EEnemy_AttackThreatState.hpp"
#include "FBlackboardKeySelector.hpp"
#include "UBTService.hpp"
#include "UBTService_Creature_AttackThreat.hpp"
UBTService_Creature_AttackThreat* UBTService_Creature_AttackThreat::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTService_Creature_AttackThreat");
    return (UBTService_Creature_AttackThreat*)res;
}
