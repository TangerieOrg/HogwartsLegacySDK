#include "UAblSetParameterValue.hpp"
#include "UAblSetScalarParameterValue.hpp"
UAblSetScalarParameterValue* UAblSetScalarParameterValue::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblSetScalarParameterValue");
    return (UAblSetScalarParameterValue*)res;
}
