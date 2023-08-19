#include "UExposureExpressionsScalarValue.hpp"
#include "UExposureExpressionsScalarValueMapRangeClamped.hpp"
UExposureExpressionsScalarValueMapRangeClamped* UExposureExpressionsScalarValueMapRangeClamped::StaticClass() {
    static auto res = find_uobject("Class /Script/ExposureExpressions.ExposureExpressionsScalarValueMapRangeClamped");
    return (UExposureExpressionsScalarValueMapRangeClamped*)res;
}
