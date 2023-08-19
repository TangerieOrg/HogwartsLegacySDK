#include "UExposureExpressionsExposureConstantFactor.hpp"
#include "UExposureExpressionsExposureConstantTwoX.hpp"
UExposureExpressionsExposureConstantTwoX* UExposureExpressionsExposureConstantTwoX::StaticClass() {
    static auto res = find_uobject("Class /Script/ExposureExpressions.ExposureExpressionsExposureConstantTwoX");
    return (UExposureExpressionsExposureConstantTwoX*)res;
}
