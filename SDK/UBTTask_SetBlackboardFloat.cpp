#include "UBTTask_SetBlackboardFloat.hpp"
#include "UBTTask_SetBlackboardValue.hpp"
UBTTask_SetBlackboardFloat* UBTTask_SetBlackboardFloat::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_SetBlackboardFloat");
    return (UBTTask_SetBlackboardFloat*)res;
}
