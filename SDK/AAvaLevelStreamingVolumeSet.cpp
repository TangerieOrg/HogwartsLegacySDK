#include "AActor.hpp"
#include "AAvaLevelStreamingVolumeSet.hpp"
#include "AAvaStreamingVolumeSet.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "ULevelStreamingDynamic.hpp"
void AAvaLevelStreamingVolumeSet::SetShouldBeVisible(bool InShouldBeVisible) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaLevelStreamingVolumeSet.SetShouldBeVisible"));
    struct Params_SetShouldBeVisible {
        bool InShouldBeVisible; // 0x0
    }; // Size: 0x1
    Params_SetShouldBeVisible params{};
    params.InShouldBeVisible = (bool)InShouldBeVisible;
    ProcessEvent(func, &params);
}
AAvaLevelStreamingVolumeSet* AAvaLevelStreamingVolumeSet::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AvaLevelStreamingVolumeSet");
    return (AAvaLevelStreamingVolumeSet*)res;
}
void AAvaLevelStreamingVolumeSet::SetShouldBeLoaded(bool InShouldBeLoaded) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaLevelStreamingVolumeSet.SetShouldBeLoaded"));
    struct Params_SetShouldBeLoaded {
        bool InShouldBeLoaded; // 0x0
    }; // Size: 0x1
    Params_SetShouldBeLoaded params{};
    params.InShouldBeLoaded = (bool)InShouldBeLoaded;
    ProcessEvent(func, &params);
}
TArray<float> AAvaLevelStreamingVolumeSet::GetLODDistances() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaLevelStreamingVolumeSet.GetLODDistances"));
    struct Params_GetLODDistances {
        TArray<float> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetLODDistances params{};
    ProcessEvent(func, &params);
    return (TArray<float>)params.ReturnValue;
}
ULevelStreamingDynamic* AAvaLevelStreamingVolumeSet::GetLoadedLevel() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaLevelStreamingVolumeSet.GetLoadedLevel"));
    struct Params_GetLoadedLevel {
        ULevelStreamingDynamic* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetLoadedLevel params{};
    ProcessEvent(func, &params);
    return (ULevelStreamingDynamic*)params.ReturnValue;
}
FRotator AAvaLevelStreamingVolumeSet::GetLevelRot() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaLevelStreamingVolumeSet.GetLevelRot"));
    struct Params_GetLevelRot {
        FRotator ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetLevelRot params{};
    ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
FVector AAvaLevelStreamingVolumeSet::GetLevelLoc() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaLevelStreamingVolumeSet.GetLevelLoc"));
    struct Params_GetLevelLoc {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetLevelLoc params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void AAvaLevelStreamingVolumeSet::ForceUnload() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaLevelStreamingVolumeSet.ForceUnload"));
    struct Params_ForceUnload {
    }; // Size: 0x0
    Params_ForceUnload params{};
    ProcessEvent(func, &params);
}
void AAvaLevelStreamingVolumeSet::ForceLoad() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaLevelStreamingVolumeSet.ForceLoad"));
    struct Params_ForceLoad {
    }; // Size: 0x0
    Params_ForceLoad params{};
    ProcessEvent(func, &params);
}
