#include "UCurveLinearColor.hpp"
#include "UHoudiniAssetParameterRampCurveColor.hpp"
UHoudiniAssetParameterRampCurveColor* UHoudiniAssetParameterRampCurveColor::StaticClass() {
    static auto res = find_uobject("Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterRampCurveColor");
    return (UHoudiniAssetParameterRampCurveColor*)res;
}
