#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#include "UBTTask_Creature_RemoveGroupCoordinatedTagsFromActor.hpp"
UBTTask_Creature_RemoveGroupCoordinatedTagsFromActor* UBTTask_Creature_RemoveGroupCoordinatedTagsFromActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_Creature_RemoveGroupCoordinatedTagsFromActor");
    return (UBTTask_Creature_RemoveGroupCoordinatedTagsFromActor*)res;
}
