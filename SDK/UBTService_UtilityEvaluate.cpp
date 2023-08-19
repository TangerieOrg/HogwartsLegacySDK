#include "UBTService.hpp"
#include "UBTService_UtilityEvaluate.hpp"
UBTService_UtilityEvaluate* UBTService_UtilityEvaluate::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.BTService_UtilityEvaluate");
    return (UBTService_UtilityEvaluate*)res;
}
