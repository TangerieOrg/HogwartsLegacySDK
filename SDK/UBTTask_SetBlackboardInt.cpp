#include "UBTTask_SetBlackboardInt.hpp"
#include "UBTTask_SetBlackboardValue.hpp"
UBTTask_SetBlackboardInt* UBTTask_SetBlackboardInt::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_SetBlackboardInt");
    return (UBTTask_SetBlackboardInt*)res;
}
