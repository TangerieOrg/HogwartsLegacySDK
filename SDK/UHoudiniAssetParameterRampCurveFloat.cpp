#include "UCurveFloat.hpp"
#include "UHoudiniAssetParameterRampCurveFloat.hpp"
UHoudiniAssetParameterRampCurveFloat* UHoudiniAssetParameterRampCurveFloat::StaticClass() {
    static auto res = find_uobject("Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterRampCurveFloat");
    return (UHoudiniAssetParameterRampCurveFloat*)res;
}
