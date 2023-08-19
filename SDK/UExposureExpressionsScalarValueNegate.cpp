#include "UExposureExpressionsScalarValueNegate.hpp"
#include "UExposureExpressionsScalarValueSingle.hpp"
UExposureExpressionsScalarValueNegate* UExposureExpressionsScalarValueNegate::StaticClass() {
    static auto res = find_uobject("Class /Script/ExposureExpressions.ExposureExpressionsScalarValueNegate");
    return (UExposureExpressionsScalarValueNegate*)res;
}
