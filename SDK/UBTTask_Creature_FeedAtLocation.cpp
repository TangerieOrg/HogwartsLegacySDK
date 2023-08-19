#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#include "UBTTask_Creature_FeedAtLocation.hpp"
UBTTask_Creature_FeedAtLocation* UBTTask_Creature_FeedAtLocation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_Creature_FeedAtLocation");
    return (UBTTask_Creature_FeedAtLocation*)res;
}
