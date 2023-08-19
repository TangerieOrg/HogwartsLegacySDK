#include "UBTTaskNode.hpp"
#include "UBTTask_PawnActionBase.hpp"
UBTTask_PawnActionBase* UBTTask_PawnActionBase::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BTTask_PawnActionBase");
    return (UBTTask_PawnActionBase*)res;
}
