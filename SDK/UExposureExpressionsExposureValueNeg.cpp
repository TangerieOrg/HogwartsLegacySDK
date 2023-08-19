#include "UExposureExpressionsExposureValueNeg.hpp"
#include "UExposureExpressionsExposureValueSingle.hpp"
UExposureExpressionsExposureValueNeg* UExposureExpressionsExposureValueNeg::StaticClass() {
    static auto res = find_uobject("Class /Script/ExposureExpressions.ExposureExpressionsExposureValueNeg");
    return (UExposureExpressionsExposureValueNeg*)res;
}
