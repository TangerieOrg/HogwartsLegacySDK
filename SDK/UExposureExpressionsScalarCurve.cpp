#include "UCurveFloat.hpp"
#include "UExposureExpressionsScalarCurve.hpp"
#include "UExposureExpressionsScalarValue.hpp"
UExposureExpressionsScalarCurve* UExposureExpressionsScalarCurve::StaticClass() {
    static auto res = find_uobject("Class /Script/ExposureExpressions.ExposureExpressionsScalarCurve");
    return (UExposureExpressionsScalarCurve*)res;
}
