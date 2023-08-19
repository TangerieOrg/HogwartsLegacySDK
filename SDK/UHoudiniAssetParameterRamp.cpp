#include "UHoudiniAssetParameterMultiparm.hpp"
#include "UHoudiniAssetParameterRamp.hpp"
UHoudiniAssetParameterRamp* UHoudiniAssetParameterRamp::StaticClass() {
    static auto res = find_uobject("Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterRamp");
    return (UHoudiniAssetParameterRamp*)res;
}
