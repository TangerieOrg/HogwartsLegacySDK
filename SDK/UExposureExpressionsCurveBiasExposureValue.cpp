#include "UExposureExpressionsCurveBiasExposureValue.hpp"
#include "UExposureExpressionsExposureValue.hpp"
UExposureExpressionsCurveBiasExposureValue* UExposureExpressionsCurveBiasExposureValue::StaticClass() {
    static auto res = find_uobject("Class /Script/ExposureExpressions.ExposureExpressionsCurveBiasExposureValue");
    return (UExposureExpressionsCurveBiasExposureValue*)res;
}
