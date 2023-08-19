#include "UExposureExpressionsScalarValueConstantBase.hpp"
#include "UExposureExpressionsScalarValueConstantOne.hpp"
UExposureExpressionsScalarValueConstantOne* UExposureExpressionsScalarValueConstantOne::StaticClass() {
    static auto res = find_uobject("Class /Script/ExposureExpressions.ExposureExpressionsScalarValueConstantOne");
    return (UExposureExpressionsScalarValueConstantOne*)res;
}
