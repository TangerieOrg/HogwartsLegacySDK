#include "USetParameterValue.hpp"
#include "USetScalarParameterValue.hpp"
USetScalarParameterValue* USetScalarParameterValue::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SetScalarParameterValue");
    return (USetScalarParameterValue*)res;
}
