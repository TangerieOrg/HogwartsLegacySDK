#include "UHoudiniAssetParameter.hpp"
#include "UHoudiniAssetParameterLabel.hpp"
UHoudiniAssetParameterLabel* UHoudiniAssetParameterLabel::StaticClass() {
    static auto res = find_uobject("Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterLabel");
    return (UHoudiniAssetParameterLabel*)res;
}
