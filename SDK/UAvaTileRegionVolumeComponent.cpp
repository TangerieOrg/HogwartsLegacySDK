#include "UAvaStreamingVolumeComponentBase.hpp"
#include "UAvaTileRegionVolumeComponent.hpp"
#include "UFunction.hpp"
void UAvaTileRegionVolumeComponent::AddTiles() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaTileRegionVolumeComponent.AddTiles"));
    struct Params_AddTiles {
    }; // Size: 0x0
    Params_AddTiles params{};
    ProcessEvent(func, &params);
}
void UAvaTileRegionVolumeComponent::ForceLoad() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaTileRegionVolumeComponent.ForceLoad"));
    struct Params_ForceLoad {
    }; // Size: 0x0
    Params_ForceLoad params{};
    ProcessEvent(func, &params);
}
UAvaTileRegionVolumeComponent* UAvaTileRegionVolumeComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AvaTileRegionVolumeComponent");
    return (UAvaTileRegionVolumeComponent*)res;
}
void UAvaTileRegionVolumeComponent::ForceUnload() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaTileRegionVolumeComponent.ForceUnload"));
    struct Params_ForceUnload {
    }; // Size: 0x0
    Params_ForceUnload params{};
    ProcessEvent(func, &params);
}
void UAvaTileRegionVolumeComponent::RemoveTiles() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaTileRegionVolumeComponent.RemoveTiles"));
    struct Params_RemoveTiles {
    }; // Size: 0x0
    Params_RemoveTiles params{};
    ProcessEvent(func, &params);
}
