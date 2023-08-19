#include "UExposureExpressionsScalarValue.hpp"
#include "UExposureExpressionsScalarValueOvercast.hpp"
UExposureExpressionsScalarValueOvercast* UExposureExpressionsScalarValueOvercast::StaticClass() {
    static auto res = find_uobject("Class /Script/ExposureExpressions.ExposureExpressionsScalarValueOvercast");
    return (UExposureExpressionsScalarValueOvercast*)res;
}
