#include "UExposureExpressionsExposureValueAddMulti.hpp"
#include "UExposureExpressionsExposureValueMulti.hpp"
UExposureExpressionsExposureValueAddMulti* UExposureExpressionsExposureValueAddMulti::StaticClass() {
    static auto res = find_uobject("Class /Script/ExposureExpressions.ExposureExpressionsExposureValueAddMulti");
    return (UExposureExpressionsExposureValueAddMulti*)res;
}
