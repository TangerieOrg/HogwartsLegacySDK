#include "UExposureExpressionsScalarValue.hpp"
#include "UExposureExpressionsScalarValueSingle.hpp"
UExposureExpressionsScalarValueSingle* UExposureExpressionsScalarValueSingle::StaticClass() {
    static auto res = find_uobject("Class /Script/ExposureExpressions.ExposureExpressionsScalarValueSingle");
    return (UExposureExpressionsScalarValueSingle*)res;
}
