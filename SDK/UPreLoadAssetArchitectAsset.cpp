#include "FPreLoadAssetArchitectAsset_Connection.hpp"
#include "UBaseArchitectAsset.hpp"
#include "UPreLoadAssetArchitectAsset.hpp"
UPreLoadAssetArchitectAsset* UPreLoadAssetArchitectAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimationArchitectRuntime.PreLoadAssetArchitectAsset");
    return (UPreLoadAssetArchitectAsset*)res;
}
