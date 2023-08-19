#include "UExposureExpressionsExposureValue.hpp"
#include "UExposureExpressionsGlobalExposureValueBase.hpp"
UExposureExpressionsGlobalExposureValueBase* UExposureExpressionsGlobalExposureValueBase::StaticClass() {
    static auto res = find_uobject("Class /Script/ExposureExpressions.ExposureExpressionsGlobalExposureValueBase");
    return (UExposureExpressionsGlobalExposureValueBase*)res;
}
