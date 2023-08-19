#include "UExposureExpressionsScalarValue.hpp"
#include "UExposureExpressionsValue.hpp"
UExposureExpressionsScalarValue* UExposureExpressionsScalarValue::StaticClass() {
    static auto res = find_uobject("Class /Script/ExposureExpressions.ExposureExpressionsScalarValue");
    return (UExposureExpressionsScalarValue*)res;
}
