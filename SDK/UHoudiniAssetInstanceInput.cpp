#include "UHoudiniAssetInstanceInput.hpp"
#include "UHoudiniAssetParameter.hpp"
UHoudiniAssetInstanceInput* UHoudiniAssetInstanceInput::StaticClass() {
    static auto res = find_uobject("Class /Script/HoudiniEngineRuntime.HoudiniAssetInstanceInput");
    return (UHoudiniAssetInstanceInput*)res;
}
