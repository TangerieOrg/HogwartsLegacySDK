#include "UBTService.hpp"
#include "UBTService_Creature_ActiveCombatData.hpp"
#include "UCreatureCombatData.hpp"
UBTService_Creature_ActiveCombatData* UBTService_Creature_ActiveCombatData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTService_Creature_ActiveCombatData");
    return (UBTService_Creature_ActiveCombatData*)res;
}
