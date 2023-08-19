#include "UExposureExpressionsAverageLuminanceExposureValue.hpp"
#include "UExposureExpressionsExposureValue.hpp"
UExposureExpressionsAverageLuminanceExposureValue* UExposureExpressionsAverageLuminanceExposureValue::StaticClass() {
    static auto res = find_uobject("Class /Script/ExposureExpressions.ExposureExpressionsAverageLuminanceExposureValue");
    return (UExposureExpressionsAverageLuminanceExposureValue*)res;
}
