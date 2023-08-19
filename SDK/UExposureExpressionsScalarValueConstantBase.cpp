#include "UExposureExpressionsScalarValue.hpp"
#include "UExposureExpressionsScalarValueConstantBase.hpp"
UExposureExpressionsScalarValueConstantBase* UExposureExpressionsScalarValueConstantBase::StaticClass() {
    static auto res = find_uobject("Class /Script/ExposureExpressions.ExposureExpressionsScalarValueConstantBase");
    return (UExposureExpressionsScalarValueConstantBase*)res;
}
