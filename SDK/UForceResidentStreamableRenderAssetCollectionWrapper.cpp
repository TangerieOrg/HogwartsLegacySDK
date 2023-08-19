#include "UForceResidentStreamableRenderAssetCollectionWrapper.hpp"
#include "UObject.hpp"
UForceResidentStreamableRenderAssetCollectionWrapper* UForceResidentStreamableRenderAssetCollectionWrapper::StaticClass() {
    static auto res = find_uobject("Class /Script/LODStreamingManager.ForceResidentStreamableRenderAssetCollectionWrapper");
    return (UForceResidentStreamableRenderAssetCollectionWrapper*)res;
}
