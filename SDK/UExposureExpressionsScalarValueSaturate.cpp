#include "UExposureExpressionsScalarValueSaturate.hpp"
#include "UExposureExpressionsScalarValueSingle.hpp"
UExposureExpressionsScalarValueSaturate* UExposureExpressionsScalarValueSaturate::StaticClass() {
    static auto res = find_uobject("Class /Script/ExposureExpressions.ExposureExpressionsScalarValueSaturate");
    return (UExposureExpressionsScalarValueSaturate*)res;
}
