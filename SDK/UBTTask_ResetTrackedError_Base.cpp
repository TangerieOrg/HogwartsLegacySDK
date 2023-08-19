#include "UBTTaskNode.hpp"
#include "UBTTask_ResetTrackedError_Base.hpp"
UBTTask_ResetTrackedError_Base* UBTTask_ResetTrackedError_Base::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.BTTask_ResetTrackedError_Base");
    return (UBTTask_ResetTrackedError_Base*)res;
}
