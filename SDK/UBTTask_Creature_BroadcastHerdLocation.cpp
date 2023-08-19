#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#include "UBTTask_Creature_BroadcastHerdLocation.hpp"
UBTTask_Creature_BroadcastHerdLocation* UBTTask_Creature_BroadcastHerdLocation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_Creature_BroadcastHerdLocation");
    return (UBTTask_Creature_BroadcastHerdLocation*)res;
}
