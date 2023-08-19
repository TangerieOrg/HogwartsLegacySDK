#include "UExposureExpressionsExposureValueMedianMulti.hpp"
#include "UExposureExpressionsExposureValueMulti.hpp"
UExposureExpressionsExposureValueMedianMulti* UExposureExpressionsExposureValueMedianMulti::StaticClass() {
    static auto res = find_uobject("Class /Script/ExposureExpressions.ExposureExpressionsExposureValueMedianMulti");
    return (UExposureExpressionsExposureValueMedianMulti*)res;
}
