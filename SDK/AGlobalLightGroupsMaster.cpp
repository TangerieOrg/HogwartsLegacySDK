#include "AActor.hpp"
#include "AGlobalLightGroupsMaster.hpp"
#include "FLightComponentSchedules.hpp"
#include "UGlobalLightGroupsRegionGroupMap.hpp"
AGlobalLightGroupsMaster* AGlobalLightGroupsMaster::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightGroups.GlobalLightGroupsMaster");
    return (AGlobalLightGroupsMaster*)res;
}
