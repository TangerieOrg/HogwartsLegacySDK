#include "EUtilityTrackedErrorType.hpp"
#include "FBlackboardKeySelector.hpp"
#include "UBTDecorator_IsTrackedErrorReported.hpp"
#include "UBTDecorator_IsTrackedErrorReported_Base.hpp"
UBTDecorator_IsTrackedErrorReported* UBTDecorator_IsTrackedErrorReported::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.BTDecorator_IsTrackedErrorReported");
    return (UBTDecorator_IsTrackedErrorReported*)res;
}
