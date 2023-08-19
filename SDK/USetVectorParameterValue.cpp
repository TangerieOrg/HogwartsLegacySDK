#include "FLinearColor.hpp"
#include "USetParameterValue.hpp"
#include "USetVectorParameterValue.hpp"
USetVectorParameterValue* USetVectorParameterValue::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SetVectorParameterValue");
    return (USetVectorParameterValue*)res;
}
