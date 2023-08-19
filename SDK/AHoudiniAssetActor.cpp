#include "AActor.hpp"
#include "AHoudiniAssetActor.hpp"
#include "UHoudiniAssetComponent.hpp"
AHoudiniAssetActor* AHoudiniAssetActor::StaticClass() {
    static auto res = find_uobject("Class /Script/HoudiniEngineRuntime.HoudiniAssetActor");
    return (AHoudiniAssetActor*)res;
}
