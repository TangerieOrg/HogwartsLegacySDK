#include "UExposureExpressionsScalarValueAbs.hpp"
#include "UExposureExpressionsScalarValueSingle.hpp"
UExposureExpressionsScalarValueAbs* UExposureExpressionsScalarValueAbs::StaticClass() {
    static auto res = find_uobject("Class /Script/ExposureExpressions.ExposureExpressionsScalarValueAbs");
    return (UExposureExpressionsScalarValueAbs*)res;
}
