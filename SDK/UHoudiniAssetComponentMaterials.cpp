#include "UHoudiniAssetComponentMaterials.hpp"
#include "UObject.hpp"
UHoudiniAssetComponentMaterials* UHoudiniAssetComponentMaterials::StaticClass() {
    static auto res = find_uobject("Class /Script/HoudiniEngineRuntime.HoudiniAssetComponentMaterials");
    return (UHoudiniAssetComponentMaterials*)res;
}
