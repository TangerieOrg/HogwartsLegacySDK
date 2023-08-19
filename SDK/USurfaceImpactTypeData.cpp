#include "UDataAsset.hpp"
#include "USurfaceImpactTypeData.hpp"
#include "UWeatherRemapBase.hpp"
USurfaceImpactTypeData* USurfaceImpactTypeData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SurfaceImpactTypeData");
    return (USurfaceImpactTypeData*)res;
}
