#include "FBlackboardKeySelector.hpp"
#include "UBTService.hpp"
#include "UBTService_BlackboardBase.hpp"
UBTService_BlackboardBase* UBTService_BlackboardBase::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BTService_BlackboardBase");
    return (UBTService_BlackboardBase*)res;
}
