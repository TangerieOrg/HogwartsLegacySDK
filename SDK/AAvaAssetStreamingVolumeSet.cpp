#include "AActor.hpp"
#include "AAvaAssetStreamingVolumeSet.hpp"
#include "AAvaStreamingVolumeSet.hpp"
#include "FTransform.hpp"
#include "UFunction.hpp"
TArray<void*> AAvaAssetStreamingVolumeSet::GetAssetsToStream() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAssetStreamingVolumeSet.GetAssetsToStream"));
    struct Params_GetAssetsToStream {
        TArray<void*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAssetsToStream params{};
    ProcessEvent(func, &params);
    return (TArray<void*>)params.ReturnValue;
}
AAvaAssetStreamingVolumeSet* AAvaAssetStreamingVolumeSet::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AvaAssetStreamingVolumeSet");
    return (AAvaAssetStreamingVolumeSet*)res;
}
AActor* AAvaAssetStreamingVolumeSet::GetAssetOwner() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAssetStreamingVolumeSet.GetAssetOwner"));
    struct Params_GetAssetOwner {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAssetOwner params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
void AAvaAssetStreamingVolumeSet::SetAssetOwner(AActor* NewOwner) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAssetStreamingVolumeSet.SetAssetOwner"));
    struct Params_SetAssetOwner {
        AActor* NewOwner; // 0x0
    }; // Size: 0x8
    Params_SetAssetOwner params{};
    params.NewOwner = (AActor*)NewOwner;
    ProcessEvent(func, &params);
}
TArray<FTransform> AAvaAssetStreamingVolumeSet::GetAssetTransforms() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAssetStreamingVolumeSet.GetAssetTransforms"));
    struct Params_GetAssetTransforms {
        TArray<FTransform> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAssetTransforms params{};
    ProcessEvent(func, &params);
    return (TArray<FTransform>)params.ReturnValue;
}
