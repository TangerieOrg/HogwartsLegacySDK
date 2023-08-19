#include "UHoudiniAssetParameter.hpp"
#include "UHoudiniAssetParameterFolder.hpp"
UHoudiniAssetParameterFolder* UHoudiniAssetParameterFolder::StaticClass() {
    static auto res = find_uobject("Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterFolder");
    return (UHoudiniAssetParameterFolder*)res;
}
