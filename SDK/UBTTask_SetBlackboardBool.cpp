#include "UBTTask_SetBlackboardBool.hpp"
#include "UBTTask_SetBlackboardValue.hpp"
UBTTask_SetBlackboardBool* UBTTask_SetBlackboardBool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_SetBlackboardBool");
    return (UBTTask_SetBlackboardBool*)res;
}
