#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#include "UBTTask_Creature_PlaceGroupCoordinatedTagOnActor.hpp"
UBTTask_Creature_PlaceGroupCoordinatedTagOnActor* UBTTask_Creature_PlaceGroupCoordinatedTagOnActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_Creature_PlaceGroupCoordinatedTagOnActor");
    return (UBTTask_Creature_PlaceGroupCoordinatedTagOnActor*)res;
}
