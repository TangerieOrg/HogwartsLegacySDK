#include "AActor.hpp"
#include "ALightGroupActorBase.hpp"
#include "FLightGroupSettings.hpp"
#include "UFunction.hpp"
ALightGroupActorBase* ALightGroupActorBase::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightGroups.LightGroupActorBase");
    return (ALightGroupActorBase*)res;
}
void ALightGroupActorBase::GetLightRegionGroup(FName& Region, FName& Group) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.LightGroupActorBase.GetLightRegionGroup"));
    struct Params_GetLightRegionGroup {
        FName Region; // 0x0
        FName Group; // 0x8
    }; // Size: 0x10
    Params_GetLightRegionGroup params{};
    params.Region = (FName)Region;
    params.Group = (FName)Group;
    ProcessEvent(func, &params);
    Region = params.Region;
    Group = params.Group;
}
void ALightGroupActorBase::GetLightGroupRegion(FName& Region) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.LightGroupActorBase.GetLightGroupRegion"));
    struct Params_GetLightGroupRegion {
        FName Region; // 0x0
    }; // Size: 0x8
    Params_GetLightGroupRegion params{};
    params.Region = (FName)Region;
    ProcessEvent(func, &params);
    Region = params.Region;
}
void ALightGroupActorBase::GetLightGroup(FName& Group) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.LightGroupActorBase.GetLightGroup"));
    struct Params_GetLightGroup {
        FName Group; // 0x0
    }; // Size: 0x8
    Params_GetLightGroup params{};
    params.Group = (FName)Group;
    ProcessEvent(func, &params);
    Group = params.Group;
}
void ALightGroupActorBase::GetLightGroupIndex(int32_t& GroupNumber) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.LightGroupActorBase.GetLightGroupIndex"));
    struct Params_GetLightGroupIndex {
        int32_t GroupNumber; // 0x0
    }; // Size: 0x4
    Params_GetLightGroupIndex params{};
    params.GroupNumber = (int32_t)GroupNumber;
    ProcessEvent(func, &params);
    GroupNumber = params.GroupNumber;
}
