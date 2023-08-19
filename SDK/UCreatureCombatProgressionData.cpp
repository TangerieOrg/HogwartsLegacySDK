#include "FCreatureCombatStageSpecifier.hpp"
#include "UCreatureCombatProgressionData.hpp"
#include "UDataAsset.hpp"
UCreatureCombatProgressionData* UCreatureCombatProgressionData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureCombatProgressionData");
    return (UCreatureCombatProgressionData*)res;
}
