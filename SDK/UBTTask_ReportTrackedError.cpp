#include "EBTNodeResult\Type.hpp"
#include "EUtilityTrackedErrorType.hpp"
#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#include "UBTTask_ReportTrackedError.hpp"
UBTTask_ReportTrackedError* UBTTask_ReportTrackedError::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.BTTask_ReportTrackedError");
    return (UBTTask_ReportTrackedError*)res;
}
