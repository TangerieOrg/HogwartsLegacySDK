#include "UHoudiniAssetInput.hpp"
#include "UHoudiniAssetParameter.hpp"
UHoudiniAssetInput* UHoudiniAssetInput::StaticClass() {
    static auto res = find_uobject("Class /Script/HoudiniEngineRuntime.HoudiniAssetInput");
    return (UHoudiniAssetInput*)res;
}
