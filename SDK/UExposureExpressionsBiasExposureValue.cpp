#include "UExposureExpressionsBiasExposureValue.hpp"
#include "UExposureExpressionsExposureValue.hpp"
UExposureExpressionsBiasExposureValue* UExposureExpressionsBiasExposureValue::StaticClass() {
    static auto res = find_uobject("Class /Script/ExposureExpressions.ExposureExpressionsBiasExposureValue");
    return (UExposureExpressionsBiasExposureValue*)res;
}
