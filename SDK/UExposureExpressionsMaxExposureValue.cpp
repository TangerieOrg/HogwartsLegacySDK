#include "UExposureExpressionsExposureValue.hpp"
#include "UExposureExpressionsMaxExposureValue.hpp"
UExposureExpressionsMaxExposureValue* UExposureExpressionsMaxExposureValue::StaticClass() {
    static auto res = find_uobject("Class /Script/ExposureExpressions.ExposureExpressionsMaxExposureValue");
    return (UExposureExpressionsMaxExposureValue*)res;
}
