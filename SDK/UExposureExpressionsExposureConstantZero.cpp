#include "UExposureExpressionsExposureConstant.hpp"
#include "UExposureExpressionsExposureConstantZero.hpp"
UExposureExpressionsExposureConstantZero* UExposureExpressionsExposureConstantZero::StaticClass() {
    static auto res = find_uobject("Class /Script/ExposureExpressions.ExposureExpressionsExposureConstantZero");
    return (UExposureExpressionsExposureConstantZero*)res;
}
