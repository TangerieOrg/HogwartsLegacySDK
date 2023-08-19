#include "UBTCompositeNode.hpp"
#include "UBTNode.hpp"
#include "UBehaviorTree.hpp"
#include "UObject.hpp"
UBTNode* UBTNode::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BTNode");
    return (UBTNode*)res;
}
