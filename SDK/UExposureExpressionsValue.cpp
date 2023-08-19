#include "UExposureExpressionsValue.hpp"
#include "UObject.hpp"
UExposureExpressionsValue* UExposureExpressionsValue::StaticClass() {
    static auto res = find_uobject("Class /Script/ExposureExpressions.ExposureExpressionsValue");
    return (UExposureExpressionsValue*)res;
}
