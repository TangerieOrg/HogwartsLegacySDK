#include "UHoudiniAssetParameter.hpp"
#include "UHoudiniAssetParameterToggle.hpp"
UHoudiniAssetParameterToggle* UHoudiniAssetParameterToggle::StaticClass() {
    static auto res = find_uobject("Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterToggle");
    return (UHoudiniAssetParameterToggle*)res;
}
