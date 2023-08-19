#include "FBlackboardKeySelector.hpp"
#include "UBTService.hpp"
#include "UBTService_CentaurCombatAdjustSpeed.hpp"
UBTService_CentaurCombatAdjustSpeed* UBTService_CentaurCombatAdjustSpeed::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.BTService_CentaurCombatAdjustSpeed");
    return (UBTService_CentaurCombatAdjustSpeed*)res;
}
