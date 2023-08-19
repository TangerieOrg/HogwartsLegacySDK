#include "UExposureExpressionsExposureValue.hpp"
#include "UExposureExpressionsScalarValue.hpp"
#include "UExposureExpressionsScalarValueMapRangeClampedExposure.hpp"
UExposureExpressionsScalarValueMapRangeClampedExposure* UExposureExpressionsScalarValueMapRangeClampedExposure::StaticClass() {
    static auto res = find_uobject("Class /Script/ExposureExpressions.ExposureExpressionsScalarValueMapRangeClampedExposure");
    return (UExposureExpressionsScalarValueMapRangeClampedExposure*)res;
}
