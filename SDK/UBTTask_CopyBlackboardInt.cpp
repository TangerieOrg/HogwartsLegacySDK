#include "UBTTask_CopyBlackboardInt.hpp"
#include "UBTTask_CopyBlackboardValue.hpp"
UBTTask_CopyBlackboardInt* UBTTask_CopyBlackboardInt::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_CopyBlackboardInt");
    return (UBTTask_CopyBlackboardInt*)res;
}
