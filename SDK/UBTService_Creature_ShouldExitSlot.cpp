#include "FBlackboardKeySelector.hpp"
#include "UBTService.hpp"
#include "UBTService_Creature_ShouldExitSlot.hpp"
UBTService_Creature_ShouldExitSlot* UBTService_Creature_ShouldExitSlot::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTService_Creature_ShouldExitSlot");
    return (UBTService_Creature_ShouldExitSlot*)res;
}
