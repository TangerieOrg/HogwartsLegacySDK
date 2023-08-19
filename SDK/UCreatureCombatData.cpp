#include "ECreatureCombatDebugBehaviorType.hpp"
#include "ECreatureCombatDebugDisplayType.hpp"
#include "UCreatureCombatData.hpp"
#include "UDataAsset.hpp"
UCreatureCombatData* UCreatureCombatData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureCombatData");
    return (UCreatureCombatData*)res;
}
