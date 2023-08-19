#include "FLightGroupSettings.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "ULightGroupComponent.hpp"
void ULightGroupComponent::GetLightGroupRegion(FName& Region) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.LightGroupComponent.GetLightGroupRegion"));
    struct Params_GetLightGroupRegion {
        FName Region; // 0x0
    }; // Size: 0x8
    Params_GetLightGroupRegion params{};
    params.Region = (FName)Region;
    ProcessEvent(func, &params);
    Region = params.Region;
}
ULightGroupComponent* ULightGroupComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightGroups.LightGroupComponent");
    return (ULightGroupComponent*)res;
}
void ULightGroupComponent::GetLightRegionGroup(FName& Region, FName& Group) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.LightGroupComponent.GetLightRegionGroup"));
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
void ULightGroupComponent::GetLightGroup(FName& Group) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.LightGroupComponent.GetLightGroup"));
    struct Params_GetLightGroup {
        FName Group; // 0x0
    }; // Size: 0x8
    Params_GetLightGroup params{};
    params.Group = (FName)Group;
    ProcessEvent(func, &params);
    Group = params.Group;
}
void ULightGroupComponent::GetLightGroupIndex(int32_t& GroupNumber) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.LightGroupComponent.GetLightGroupIndex"));
    struct Params_GetLightGroupIndex {
        int32_t GroupNumber; // 0x0
    }; // Size: 0x4
    Params_GetLightGroupIndex params{};
    params.GroupNumber = (int32_t)GroupNumber;
    ProcessEvent(func, &params);
    GroupNumber = params.GroupNumber;
}
