#include "AActor.hpp"
#include "ALightGroupWindowMaterialsVolume.hpp"
#include "FLightGroupWindowMaterialsResources.hpp"
#include "UFunction.hpp"
#include "ULightGroupComponent.hpp"
ALightGroupWindowMaterialsVolume* ALightGroupWindowMaterialsVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightGroups.LightGroupWindowMaterialsVolume");
    return (ALightGroupWindowMaterialsVolume*)res;
}
void ALightGroupWindowMaterialsVolume::RefreshBuildResults() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.LightGroupWindowMaterialsVolume.RefreshBuildResults"));
    struct Params_RefreshBuildResults {
    }; // Size: 0x0
    Params_RefreshBuildResults params{};
    ProcessEvent(func, &params);
}
