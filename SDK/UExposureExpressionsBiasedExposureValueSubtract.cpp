#include "UExposureExpressionsBiasedExposureValue.hpp"
#include "UExposureExpressionsBiasedExposureValueSubtract.hpp"
UExposureExpressionsBiasedExposureValueSubtract* UExposureExpressionsBiasedExposureValueSubtract::StaticClass() {
    static auto res = find_uobject("Class /Script/ExposureExpressions.ExposureExpressionsBiasedExposureValueSubtract");
    return (UExposureExpressionsBiasedExposureValueSubtract*)res;
}
