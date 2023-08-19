#include "UExposureExpressionsExposureConstant.hpp"
#include "UExposureExpressionsExposureConstantTwo.hpp"
UExposureExpressionsExposureConstantTwo* UExposureExpressionsExposureConstantTwo::StaticClass() {
    static auto res = find_uobject("Class /Script/ExposureExpressions.ExposureExpressionsExposureConstantTwo");
    return (UExposureExpressionsExposureConstantTwo*)res;
}
