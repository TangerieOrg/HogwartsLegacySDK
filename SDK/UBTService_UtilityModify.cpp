#include "UBTService.hpp"
#include "UBTService_UtilityModify.hpp"
UBTService_UtilityModify* UBTService_UtilityModify::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.BTService_UtilityModify");
    return (UBTService_UtilityModify*)res;
}
