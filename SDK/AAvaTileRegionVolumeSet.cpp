#include "AAvaStreamingVolumeSet.hpp"
#include "AAvaTileRegionVolumeSet.hpp"
#include "UFunction.hpp"
AAvaTileRegionVolumeSet* AAvaTileRegionVolumeSet::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AvaTileRegionVolumeSet");
    return (AAvaTileRegionVolumeSet*)res;
}
void AAvaTileRegionVolumeSet::ForceDeactivate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaTileRegionVolumeSet.ForceDeactivate"));
    struct Params_ForceDeactivate {
    }; // Size: 0x0
    Params_ForceDeactivate params{};
    ProcessEvent(func, &params);
}
void AAvaTileRegionVolumeSet::ForceActivate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaTileRegionVolumeSet.ForceActivate"));
    struct Params_ForceActivate {
    }; // Size: 0x0
    Params_ForceActivate params{};
    ProcessEvent(func, &params);
}
