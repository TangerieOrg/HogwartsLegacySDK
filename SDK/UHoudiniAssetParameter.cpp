#include "UHoudiniAssetParameter.hpp"
#include "UObject.hpp"
UHoudiniAssetParameter* UHoudiniAssetParameter::StaticClass() {
    static auto res = find_uobject("Class /Script/HoudiniEngineRuntime.HoudiniAssetParameter");
    return (UHoudiniAssetParameter*)res;
}
