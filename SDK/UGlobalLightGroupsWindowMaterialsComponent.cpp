#include "FLightGroupSettingsOptional.hpp"
#include "FLightGroupWindowMaterialsResources.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UGlobalLightGroupsWindowMaterialsComponent.hpp"
UGlobalLightGroupsWindowMaterialsComponent* UGlobalLightGroupsWindowMaterialsComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightGroups.GlobalLightGroupsWindowMaterialsComponent");
    return (UGlobalLightGroupsWindowMaterialsComponent*)res;
}
void UGlobalLightGroupsWindowMaterialsComponent::RefreshBuildResults() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsWindowMaterialsComponent.RefreshBuildResults"));
    struct Params_RefreshBuildResults {
    }; // Size: 0x0
    Params_RefreshBuildResults params{};
    ProcessEvent(func, &params);
}
