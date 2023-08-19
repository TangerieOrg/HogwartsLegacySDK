#include "UBTDCustomLoopCount.hpp"
#include "UBTDCustomLoopCount_CreatureCombat_NumBehaviorCyclesBeforeReposition.hpp"
UBTDCustomLoopCount_CreatureCombat_NumBehaviorCyclesBeforeReposition* UBTDCustomLoopCount_CreatureCombat_NumBehaviorCyclesBeforeReposition::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTDCustomLoopCount_CreatureCombat_NumBehaviorCyclesBeforeReposition");
    return (UBTDCustomLoopCount_CreatureCombat_NumBehaviorCyclesBeforeReposition*)res;
}
