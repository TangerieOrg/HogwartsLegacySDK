#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#include "UBTTask_Creature_ArrivedAtPathNode.hpp"
UBTTask_Creature_ArrivedAtPathNode* UBTTask_Creature_ArrivedAtPathNode::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_Creature_ArrivedAtPathNode");
    return (UBTTask_Creature_ArrivedAtPathNode*)res;
}
