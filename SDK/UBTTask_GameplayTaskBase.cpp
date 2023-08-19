#include "UBTTaskNode.hpp"
#include "UBTTask_GameplayTaskBase.hpp"
UBTTask_GameplayTaskBase* UBTTask_GameplayTaskBase::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BTTask_GameplayTaskBase");
    return (UBTTask_GameplayTaskBase*)res;
}
