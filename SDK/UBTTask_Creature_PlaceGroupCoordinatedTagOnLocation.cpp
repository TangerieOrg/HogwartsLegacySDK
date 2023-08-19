#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#include "UBTTask_Creature_PlaceGroupCoordinatedTagOnLocation.hpp"
UBTTask_Creature_PlaceGroupCoordinatedTagOnLocation* UBTTask_Creature_PlaceGroupCoordinatedTagOnLocation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_Creature_PlaceGroupCoordinatedTagOnLocation");
    return (UBTTask_Creature_PlaceGroupCoordinatedTagOnLocation*)res;
}
