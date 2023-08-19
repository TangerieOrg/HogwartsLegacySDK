#include "UExposureExpressionsExposureValueMaxMulti.hpp"
#include "UExposureExpressionsExposureValueMulti.hpp"
UExposureExpressionsExposureValueMaxMulti* UExposureExpressionsExposureValueMaxMulti::StaticClass() {
    static auto res = find_uobject("Class /Script/ExposureExpressions.ExposureExpressionsExposureValueMaxMulti");
    return (UExposureExpressionsExposureValueMaxMulti*)res;
}
