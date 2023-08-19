#include "UHoudiniAsset.hpp"
#include "UObject.hpp"
#include "UThumbnailInfo.hpp"
UHoudiniAsset* UHoudiniAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/HoudiniEngineRuntime.HoudiniAsset");
    return (UHoudiniAsset*)res;
}
