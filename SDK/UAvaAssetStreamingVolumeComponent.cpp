#include "AActor.hpp"
#include "FTransform.hpp"
#include "UAvaAssetStreamingVolumeComponent.hpp"
#include "UAvaStreamingVolumeComponentBase.hpp"
#include "UFunction.hpp"
UAvaAssetStreamingVolumeComponent* UAvaAssetStreamingVolumeComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AvaAssetStreamingVolumeComponent");
    return (UAvaAssetStreamingVolumeComponent*)res;
}
void UAvaAssetStreamingVolumeComponent::SetAssetOwner(AActor* NewOwner) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAssetStreamingVolumeComponent.SetAssetOwner"));
    struct Params_SetAssetOwner {
        AActor* NewOwner; // 0x0
    }; // Size: 0x8
    Params_SetAssetOwner params{};
    params.NewOwner = (AActor*)NewOwner;
    ProcessEvent(func, &params);
}
TArray<FTransform> UAvaAssetStreamingVolumeComponent::GetAssetTransforms() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAssetStreamingVolumeComponent.GetAssetTransforms"));
    struct Params_GetAssetTransforms {
        TArray<FTransform> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAssetTransforms params{};
    ProcessEvent(func, &params);
    return (TArray<FTransform>)params.ReturnValue;
}
TArray<void*> UAvaAssetStreamingVolumeComponent::GetAssetsToStream() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAssetStreamingVolumeComponent.GetAssetsToStream"));
    struct Params_GetAssetsToStream {
        TArray<void*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAssetsToStream params{};
    ProcessEvent(func, &params);
    return (TArray<void*>)params.ReturnValue;
}
AActor* UAvaAssetStreamingVolumeComponent::GetAssetOwner() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAssetStreamingVolumeComponent.GetAssetOwner"));
    struct Params_GetAssetOwner {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAssetOwner params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
