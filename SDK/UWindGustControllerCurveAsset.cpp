#include "EWindGustCurveRemap.hpp"
#include "EWindGustSpeedOp.hpp"
#include "FVector2D.hpp"
#include "UCurveFloat.hpp"
#include "UWindGustController.hpp"
#include "UWindGustControllerCurveAsset.hpp"
UWindGustControllerCurveAsset* UWindGustControllerCurveAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.WindGustControllerCurveAsset");
    return (UWindGustControllerCurveAsset*)res;
}
