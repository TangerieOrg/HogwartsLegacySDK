#include "FBlackboardKeySelector.hpp"
#include "UBTDecorator.hpp"
#include "UBTDecorator_BlackboardBase.hpp"
UBTDecorator_BlackboardBase* UBTDecorator_BlackboardBase::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BTDecorator_BlackboardBase");
    return (UBTDecorator_BlackboardBase*)res;
}
