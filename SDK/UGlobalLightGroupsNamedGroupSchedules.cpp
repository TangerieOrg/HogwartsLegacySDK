#include "UGlobalLightGroupsNamedGroupSchedules.hpp"
#include "UGlobalLightGroupsNamedSchedules.hpp"
UGlobalLightGroupsNamedGroupSchedules* UGlobalLightGroupsNamedGroupSchedules::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightGroups.GlobalLightGroupsNamedGroupSchedules");
    return (UGlobalLightGroupsNamedGroupSchedules*)res;
}
