#include "UInterface.hpp"
#include "UInterface_ExposureExpressionsGlobalsProvider.hpp"
UInterface_ExposureExpressionsGlobalsProvider* UInterface_ExposureExpressionsGlobalsProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/ExposureExpressions.Interface_ExposureExpressionsGlobalsProvider");
    return (UInterface_ExposureExpressionsGlobalsProvider*)res;
}
