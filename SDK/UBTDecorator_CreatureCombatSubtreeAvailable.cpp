#include "UBTDecorator.hpp"
#include "UBTDecorator_CreatureCombatSubtreeAvailable.hpp"
#include "UCreatureCombatData.hpp"
UBTDecorator_CreatureCombatSubtreeAvailable* UBTDecorator_CreatureCombatSubtreeAvailable::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTDecorator_CreatureCombatSubtreeAvailable");
    return (UBTDecorator_CreatureCombatSubtreeAvailable*)res;
}
