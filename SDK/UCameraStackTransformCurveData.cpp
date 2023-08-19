#include "UCameraStackTransformCurveData.hpp"
#include "UCurveFloat.hpp"
#include "UCurveVector.hpp"
#include "UDataAsset.hpp"
UCameraStackTransformCurveData* UCameraStackTransformCurveData::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackTransformCurveData");
    return (UCameraStackTransformCurveData*)res;
}
