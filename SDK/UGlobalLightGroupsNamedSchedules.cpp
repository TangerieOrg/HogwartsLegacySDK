#include "FGlobalLightGroupsScheduleMap.hpp"
#include "UDataAsset.hpp"
#include "UFunction.hpp"
#include "UGlobalLightGroupsNamedSchedules.hpp"
UGlobalLightGroupsNamedSchedules* UGlobalLightGroupsNamedSchedules::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightGroups.GlobalLightGroupsNamedSchedules");
    return (UGlobalLightGroupsNamedSchedules*)res;
}
void UGlobalLightGroupsNamedSchedules::RebuildSchedules() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsNamedSchedules.RebuildSchedules"));
    struct Params_RebuildSchedules {
    }; // Size: 0x0
    Params_RebuildSchedules params{};
    ProcessEvent(func, &params);
}
