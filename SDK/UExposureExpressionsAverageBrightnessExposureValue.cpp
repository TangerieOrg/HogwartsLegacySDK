#include "UExposureExpressionsAverageBrightnessExposureValue.hpp"
#include "UExposureExpressionsExposureValue.hpp"
UExposureExpressionsAverageBrightnessExposureValue* UExposureExpressionsAverageBrightnessExposureValue::StaticClass() {
    static auto res = find_uobject("Class /Script/ExposureExpressions.ExposureExpressionsAverageBrightnessExposureValue");
    return (UExposureExpressionsAverageBrightnessExposureValue*)res;
}
