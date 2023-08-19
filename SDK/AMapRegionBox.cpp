#include "AActor.hpp"
#include "AMapRegionBox.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "UBoxComponent.hpp"
AMapRegionBox* AMapRegionBox::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MapRegionBox");
    return (AMapRegionBox*)res;
}
