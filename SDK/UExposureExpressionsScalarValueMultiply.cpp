#include "UExposureExpressionsScalarValueMultiply.hpp"
#include "UExposureExpressionsScalarValueOp.hpp"
UExposureExpressionsScalarValueMultiply* UExposureExpressionsScalarValueMultiply::StaticClass() {
    static auto res = find_uobject("Class /Script/ExposureExpressions.ExposureExpressionsScalarValueMultiply");
    return (UExposureExpressionsScalarValueMultiply*)res;
}
