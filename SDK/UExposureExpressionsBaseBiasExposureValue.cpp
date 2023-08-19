#include "UExposureExpressionsBaseBiasExposureValue.hpp"
#include "UExposureExpressionsExposureValue.hpp"
UExposureExpressionsBaseBiasExposureValue* UExposureExpressionsBaseBiasExposureValue::StaticClass() {
    static auto res = find_uobject("Class /Script/ExposureExpressions.ExposureExpressionsBaseBiasExposureValue");
    return (UExposureExpressionsBaseBiasExposureValue*)res;
}
