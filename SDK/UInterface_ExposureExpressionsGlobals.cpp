#include "UInterface.hpp"
#include "UInterface_ExposureExpressionsGlobals.hpp"
UInterface_ExposureExpressionsGlobals* UInterface_ExposureExpressionsGlobals::StaticClass() {
    static auto res = find_uobject("Class /Script/ExposureExpressions.Interface_ExposureExpressionsGlobals");
    return (UInterface_ExposureExpressionsGlobals*)res;
}
