#include "UHoudiniAssetParameter.hpp"
#include "UHoudiniAssetParameterString.hpp"
UHoudiniAssetParameterString* UHoudiniAssetParameterString::StaticClass() {
    static auto res = find_uobject("Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterString");
    return (UHoudiniAssetParameterString*)res;
}
