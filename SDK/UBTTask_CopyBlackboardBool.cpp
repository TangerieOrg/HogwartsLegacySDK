#include "UBTTask_CopyBlackboardBool.hpp"
#include "UBTTask_CopyBlackboardValue.hpp"
UBTTask_CopyBlackboardBool* UBTTask_CopyBlackboardBool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_CopyBlackboardBool");
    return (UBTTask_CopyBlackboardBool*)res;
}
