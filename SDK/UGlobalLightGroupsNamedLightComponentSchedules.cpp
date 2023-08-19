#include "UGlobalLightGroupsNamedLightComponentSchedules.hpp"
#include "UGlobalLightGroupsNamedSchedules.hpp"
UGlobalLightGroupsNamedLightComponentSchedules* UGlobalLightGroupsNamedLightComponentSchedules::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightGroups.GlobalLightGroupsNamedLightComponentSchedules");
    return (UGlobalLightGroupsNamedLightComponentSchedules*)res;
}
