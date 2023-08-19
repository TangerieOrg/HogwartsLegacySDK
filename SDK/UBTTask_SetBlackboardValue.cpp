#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#include "UBTTask_SetBlackboardValue.hpp"
UBTTask_SetBlackboardValue* UBTTask_SetBlackboardValue::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_SetBlackboardValue");
    return (UBTTask_SetBlackboardValue*)res;
}
