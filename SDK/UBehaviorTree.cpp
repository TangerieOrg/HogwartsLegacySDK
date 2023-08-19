#include "FBTDecoratorLogic.hpp"
#include "UBTCompositeNode.hpp"
#include "UBTDecorator.hpp"
#include "UBehaviorTree.hpp"
#include "UBlackboardData.hpp"
#include "UObject.hpp"
UBehaviorTree* UBehaviorTree::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BehaviorTree");
    return (UBehaviorTree*)res;
}
