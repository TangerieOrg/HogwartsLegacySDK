#include "UHoudiniAssetParameter.hpp"
#include "UHoudiniAssetParameterFloat.hpp"
UHoudiniAssetParameterFloat* UHoudiniAssetParameterFloat::StaticClass() {
    static auto res = find_uobject("Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterFloat");
    return (UHoudiniAssetParameterFloat*)res;
}
