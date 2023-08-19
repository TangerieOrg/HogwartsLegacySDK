#include "UExposureExpressionsScalarValue.hpp"
#include "UExposureExpressionsScalarValueDay.hpp"
UExposureExpressionsScalarValueDay* UExposureExpressionsScalarValueDay::StaticClass() {
    static auto res = find_uobject("Class /Script/ExposureExpressions.ExposureExpressionsScalarValueDay");
    return (UExposureExpressionsScalarValueDay*)res;
}
