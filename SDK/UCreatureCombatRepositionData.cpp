#include "FVector2D.hpp"
#include "UCreatureCombatData.hpp"
#include "UCreatureCombatRepositionData.hpp"
UCreatureCombatRepositionData* UCreatureCombatRepositionData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureCombatRepositionData");
    return (UCreatureCombatRepositionData*)res;
}
