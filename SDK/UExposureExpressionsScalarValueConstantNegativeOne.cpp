#include "UExposureExpressionsScalarValueConstantBase.hpp"
#include "UExposureExpressionsScalarValueConstantNegativeOne.hpp"
UExposureExpressionsScalarValueConstantNegativeOne* UExposureExpressionsScalarValueConstantNegativeOne::StaticClass() {
    static auto res = find_uobject("Class /Script/ExposureExpressions.ExposureExpressionsScalarValueConstantNegativeOne");
    return (UExposureExpressionsScalarValueConstantNegativeOne*)res;
}
