#include "UExposureExpressionsExposureConstant.hpp"
#include "UExposureExpressionsExposureConstantNegativeOne.hpp"
UExposureExpressionsExposureConstantNegativeOne* UExposureExpressionsExposureConstantNegativeOne::StaticClass() {
    static auto res = find_uobject("Class /Script/ExposureExpressions.ExposureExpressionsExposureConstantNegativeOne");
    return (UExposureExpressionsExposureConstantNegativeOne*)res;
}
