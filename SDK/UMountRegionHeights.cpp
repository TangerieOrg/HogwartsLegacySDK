#include "UDataAsset.hpp"
#include "UMountRegionHeights.hpp"
UMountRegionHeights* UMountRegionHeights::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MountRegionHeights");
    return (UMountRegionHeights*)res;
}
