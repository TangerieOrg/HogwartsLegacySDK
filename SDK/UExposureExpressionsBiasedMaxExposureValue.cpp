#include "UExposureExpressionsBiasedMaxExposureValue.hpp"
#include "UExposureExpressionsExposureValue.hpp"
UExposureExpressionsBiasedMaxExposureValue* UExposureExpressionsBiasedMaxExposureValue::StaticClass() {
    static auto res = find_uobject("Class /Script/ExposureExpressions.ExposureExpressionsBiasedMaxExposureValue");
    return (UExposureExpressionsBiasedMaxExposureValue*)res;
}
