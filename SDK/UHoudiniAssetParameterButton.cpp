#include "UHoudiniAssetParameter.hpp"
#include "UHoudiniAssetParameterButton.hpp"
UHoudiniAssetParameterButton* UHoudiniAssetParameterButton::StaticClass() {
    static auto res = find_uobject("Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterButton");
    return (UHoudiniAssetParameterButton*)res;
}
