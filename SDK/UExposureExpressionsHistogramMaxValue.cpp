#include "UExposureExpressionsExposureValue.hpp"
#include "UExposureExpressionsHistogramMaxValue.hpp"
UExposureExpressionsHistogramMaxValue* UExposureExpressionsHistogramMaxValue::StaticClass() {
    static auto res = find_uobject("Class /Script/ExposureExpressions.ExposureExpressionsHistogramMaxValue");
    return (UExposureExpressionsHistogramMaxValue*)res;
}
