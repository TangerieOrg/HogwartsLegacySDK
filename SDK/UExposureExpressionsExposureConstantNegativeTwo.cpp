#include "UExposureExpressionsExposureConstant.hpp"
#include "UExposureExpressionsExposureConstantNegativeTwo.hpp"
UExposureExpressionsExposureConstantNegativeTwo* UExposureExpressionsExposureConstantNegativeTwo::StaticClass() {
    static auto res = find_uobject("Class /Script/ExposureExpressions.ExposureExpressionsExposureConstantNegativeTwo");
    return (UExposureExpressionsExposureConstantNegativeTwo*)res;
}
