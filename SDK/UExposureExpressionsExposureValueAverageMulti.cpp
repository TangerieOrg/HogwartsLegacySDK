#include "UExposureExpressionsExposureValueAverageMulti.hpp"
#include "UExposureExpressionsExposureValueMulti.hpp"
UExposureExpressionsExposureValueAverageMulti* UExposureExpressionsExposureValueAverageMulti::StaticClass() {
    static auto res = find_uobject("Class /Script/ExposureExpressions.ExposureExpressionsExposureValueAverageMulti");
    return (UExposureExpressionsExposureValueAverageMulti*)res;
}
