#include "UBTTaskNode.hpp"
#include "UBTTask_RunBehavior.hpp"
#include "UBehaviorTree.hpp"
UBTTask_RunBehavior* UBTTask_RunBehavior::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BTTask_RunBehavior");
    return (UBTTask_RunBehavior*)res;
}
