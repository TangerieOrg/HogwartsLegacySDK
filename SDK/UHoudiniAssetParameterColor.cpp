#include "UHoudiniAssetParameter.hpp"
#include "UHoudiniAssetParameterColor.hpp"
UHoudiniAssetParameterColor* UHoudiniAssetParameterColor::StaticClass() {
    static auto res = find_uobject("Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterColor");
    return (UHoudiniAssetParameterColor*)res;
}
