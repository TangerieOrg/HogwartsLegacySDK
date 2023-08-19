#include "FBlackboardKeySelector.hpp"
#include "UBTDecorator.hpp"
#include "UBTDecorator_CreatureAttackAvailable.hpp"
#include "UCreatureCombatAttackData.hpp"
UBTDecorator_CreatureAttackAvailable* UBTDecorator_CreatureAttackAvailable::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTDecorator_CreatureAttackAvailable");
    return (UBTDecorator_CreatureAttackAvailable*)res;
}
