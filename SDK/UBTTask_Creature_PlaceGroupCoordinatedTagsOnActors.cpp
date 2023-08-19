#include "FTagPlacementOrder.hpp"
#include "UBTTaskNode.hpp"
#include "UBTTask_Creature_PlaceGroupCoordinatedTagsOnActors.hpp"
UBTTask_Creature_PlaceGroupCoordinatedTagsOnActors* UBTTask_Creature_PlaceGroupCoordinatedTagsOnActors::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_Creature_PlaceGroupCoordinatedTagsOnActors");
    return (UBTTask_Creature_PlaceGroupCoordinatedTagsOnActors*)res;
}
