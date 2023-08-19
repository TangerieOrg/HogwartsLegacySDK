#include "UHoudiniAssetParameter.hpp"
#include "UHoudiniAssetParameterMultiparm.hpp"
UHoudiniAssetParameterMultiparm* UHoudiniAssetParameterMultiparm::StaticClass() {
    static auto res = find_uobject("Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterMultiparm");
    return (UHoudiniAssetParameterMultiparm*)res;
}
