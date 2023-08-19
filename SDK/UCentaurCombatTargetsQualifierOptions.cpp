#include "UCentaurCombatTargetsQualifierOptions.hpp"
#include "UQualifierOptions.hpp"
UCentaurCombatTargetsQualifierOptions* UCentaurCombatTargetsQualifierOptions::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.CentaurCombatTargetsQualifierOptions");
    return (UCentaurCombatTargetsQualifierOptions*)res;
}
