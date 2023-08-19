#include "UExposureExpressionsExposureValue.hpp"
#include "UExposureExpressionsExposureValueMulti.hpp"
UExposureExpressionsExposureValueMulti* UExposureExpressionsExposureValueMulti::StaticClass() {
    static auto res = find_uobject("Class /Script/ExposureExpressions.ExposureExpressionsExposureValueMulti");
    return (UExposureExpressionsExposureValueMulti*)res;
}
