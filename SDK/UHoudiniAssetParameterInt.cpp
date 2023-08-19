#include "UHoudiniAssetParameter.hpp"
#include "UHoudiniAssetParameterInt.hpp"
UHoudiniAssetParameterInt* UHoudiniAssetParameterInt::StaticClass() {
    static auto res = find_uobject("Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterInt");
    return (UHoudiniAssetParameterInt*)res;
}
