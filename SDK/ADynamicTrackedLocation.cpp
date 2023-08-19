#include "ADynamicTrackedLocation.hpp"
#include "ATargetPoint.hpp"
#include "FColor.hpp"
#include "FDbSingleColumnInfo.hpp"
ADynamicTrackedLocation* ADynamicTrackedLocation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DynamicTrackedLocation");
    return (ADynamicTrackedLocation*)res;
}
