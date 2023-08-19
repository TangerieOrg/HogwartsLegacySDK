#include "UExposureExpressionsScalarValueConstantBase.hpp"
#include "UExposureExpressionsScalarValueConstantZero.hpp"
UExposureExpressionsScalarValueConstantZero* UExposureExpressionsScalarValueConstantZero::StaticClass() {
    static auto res = find_uobject("Class /Script/ExposureExpressions.ExposureExpressionsScalarValueConstantZero");
    return (UExposureExpressionsScalarValueConstantZero*)res;
}
