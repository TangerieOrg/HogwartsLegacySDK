#include "UBTDecorator.hpp"
#include "UBTDecorator_IsTrackedErrorReported_Base.hpp"
UBTDecorator_IsTrackedErrorReported_Base* UBTDecorator_IsTrackedErrorReported_Base::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.BTDecorator_IsTrackedErrorReported_Base");
    return (UBTDecorator_IsTrackedErrorReported_Base*)res;
}
