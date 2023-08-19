#include "UCurveFloat.hpp"
#include "UExposureExpressionsExposureValue.hpp"
#include "UExposureExpressionsExposureValueCurveRemap.hpp"
UExposureExpressionsExposureValueCurveRemap* UExposureExpressionsExposureValueCurveRemap::StaticClass() {
    static auto res = find_uobject("Class /Script/ExposureExpressions.ExposureExpressionsExposureValueCurveRemap");
    return (UExposureExpressionsExposureValueCurveRemap*)res;
}
