#include "UHoudiniAssetParameter.hpp"
#include "UHoudiniAssetParameterSeparator.hpp"
UHoudiniAssetParameterSeparator* UHoudiniAssetParameterSeparator::StaticClass() {
    static auto res = find_uobject("Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterSeparator");
    return (UHoudiniAssetParameterSeparator*)res;
}
