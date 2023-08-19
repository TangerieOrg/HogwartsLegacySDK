#include "APhoenixMapRegion.hpp"
#include "UObject.hpp"
#include "URegionData.hpp"
URegionData* URegionData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RegionData");
    return (URegionData*)res;
}
