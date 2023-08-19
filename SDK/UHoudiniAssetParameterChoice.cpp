#include "UHoudiniAssetParameter.hpp"
#include "UHoudiniAssetParameterChoice.hpp"
UHoudiniAssetParameterChoice* UHoudiniAssetParameterChoice::StaticClass() {
    static auto res = find_uobject("Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterChoice");
    return (UHoudiniAssetParameterChoice*)res;
}
