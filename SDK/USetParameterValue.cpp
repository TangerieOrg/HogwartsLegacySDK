#include "UObject.hpp"
#include "USetParameterValue.hpp"
USetParameterValue* USetParameterValue::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SetParameterValue");
    return (USetParameterValue*)res;
}
