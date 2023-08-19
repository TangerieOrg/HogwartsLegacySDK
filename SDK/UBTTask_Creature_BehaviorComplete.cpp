#include "UBTTaskNode.hpp"
#include "UBTTask_Creature_BehaviorComplete.hpp"
UBTTask_Creature_BehaviorComplete* UBTTask_Creature_BehaviorComplete::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_Creature_BehaviorComplete");
    return (UBTTask_Creature_BehaviorComplete*)res;
}
