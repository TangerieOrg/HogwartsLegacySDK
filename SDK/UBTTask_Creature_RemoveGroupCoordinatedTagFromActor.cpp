#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#include "UBTTask_Creature_RemoveGroupCoordinatedTagFromActor.hpp"
UBTTask_Creature_RemoveGroupCoordinatedTagFromActor* UBTTask_Creature_RemoveGroupCoordinatedTagFromActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_Creature_RemoveGroupCoordinatedTagFromActor");
    return (UBTTask_Creature_RemoveGroupCoordinatedTagFromActor*)res;
}
