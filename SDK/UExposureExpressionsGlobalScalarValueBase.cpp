#include "UExposureExpressionsGlobalScalarValueBase.hpp"
#include "UExposureExpressionsScalarValue.hpp"
UExposureExpressionsGlobalScalarValueBase* UExposureExpressionsGlobalScalarValueBase::StaticClass() {
    static auto res = find_uobject("Class /Script/ExposureExpressions.ExposureExpressionsGlobalScalarValueBase");
    return (UExposureExpressionsGlobalScalarValueBase*)res;
}
