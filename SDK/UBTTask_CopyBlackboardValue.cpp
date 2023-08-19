#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#include "UBTTask_CopyBlackboardValue.hpp"
UBTTask_CopyBlackboardValue* UBTTask_CopyBlackboardValue::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_CopyBlackboardValue");
    return (UBTTask_CopyBlackboardValue*)res;
}
