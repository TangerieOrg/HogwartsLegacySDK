#include "UExposureExpressionsScalarValue.hpp"
#include "UExposureExpressionsScalarValueIndoors.hpp"
UExposureExpressionsScalarValueIndoors* UExposureExpressionsScalarValueIndoors::StaticClass() {
    static auto res = find_uobject("Class /Script/ExposureExpressions.ExposureExpressionsScalarValueIndoors");
    return (UExposureExpressionsScalarValueIndoors*)res;
}
