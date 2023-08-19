#include "UBTDCustomLoopCount.hpp"
#include "UBTDCustomLoopCount_CreatureCombat_MaxNumChainedAttacks.hpp"
UBTDCustomLoopCount_CreatureCombat_MaxNumChainedAttacks* UBTDCustomLoopCount_CreatureCombat_MaxNumChainedAttacks::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTDCustomLoopCount_CreatureCombat_MaxNumChainedAttacks");
    return (UBTDCustomLoopCount_CreatureCombat_MaxNumChainedAttacks*)res;
}
