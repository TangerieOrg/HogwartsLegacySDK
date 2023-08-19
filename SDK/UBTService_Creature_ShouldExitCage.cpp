#include "FBlackboardKeySelector.hpp"
#include "UBTService.hpp"
#include "UBTService_Creature_ShouldExitCage.hpp"
UBTService_Creature_ShouldExitCage* UBTService_Creature_ShouldExitCage::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTService_Creature_ShouldExitCage");
    return (UBTService_Creature_ShouldExitCage*)res;
}
