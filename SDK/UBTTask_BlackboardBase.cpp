#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#include "UBTTask_BlackboardBase.hpp"
UBTTask_BlackboardBase* UBTTask_BlackboardBase::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BTTask_BlackboardBase");
    return (UBTTask_BlackboardBase*)res;
}
