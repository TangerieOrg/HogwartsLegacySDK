#include "UBTTask_CopyBlackboardValue.hpp"
#include "UBTTask_CopyBlackboardVector.hpp"
UBTTask_CopyBlackboardVector* UBTTask_CopyBlackboardVector::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_CopyBlackboardVector");
    return (UBTTask_CopyBlackboardVector*)res;
}
