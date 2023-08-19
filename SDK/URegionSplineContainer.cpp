#include "UObject.hpp"
#include "URegionSplineContainer.hpp"
URegionSplineContainer* URegionSplineContainer::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RegionSplineContainer");
    return (URegionSplineContainer*)res;
}
