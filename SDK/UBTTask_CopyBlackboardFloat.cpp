#include "UBTTask_CopyBlackboardFloat.hpp"
#include "UBTTask_CopyBlackboardValue.hpp"
UBTTask_CopyBlackboardFloat* UBTTask_CopyBlackboardFloat::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_CopyBlackboardFloat");
    return (UBTTask_CopyBlackboardFloat*)res;
}
