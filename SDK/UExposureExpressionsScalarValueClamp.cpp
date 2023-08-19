#include "UExposureExpressionsScalarValue.hpp"
#include "UExposureExpressionsScalarValueClamp.hpp"
UExposureExpressionsScalarValueClamp* UExposureExpressionsScalarValueClamp::StaticClass() {
    static auto res = find_uobject("Class /Script/ExposureExpressions.ExposureExpressionsScalarValueClamp");
    return (UExposureExpressionsScalarValueClamp*)res;
}
