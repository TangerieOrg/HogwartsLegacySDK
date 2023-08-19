#include "FVector2D.hpp"
#include "UAvaStreamingLevelVolumeComponentBase.hpp"
#include "UAvaStreamingVolumeComponent.hpp"
#include "UFunction.hpp"
#include "ULevelStreamingDynamic.hpp"
UAvaStreamingVolumeComponent* UAvaStreamingVolumeComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AvaStreamingVolumeComponent");
    return (UAvaStreamingVolumeComponent*)res;
}
void UAvaStreamingVolumeComponent::UpdateSeasonState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingVolumeComponent.UpdateSeasonState"));
    struct Params_UpdateSeasonState {
    }; // Size: 0x0
    Params_UpdateSeasonState params{};
    ProcessEvent(func, &params);
}
void UAvaStreamingVolumeComponent::SetShouldBeVisible(bool InShouldBeVisible) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingVolumeComponent.SetShouldBeVisible"));
    struct Params_SetShouldBeVisible {
        bool InShouldBeVisible; // 0x0
    }; // Size: 0x1
    Params_SetShouldBeVisible params{};
    params.InShouldBeVisible = (bool)InShouldBeVisible;
    ProcessEvent(func, &params);
}
void UAvaStreamingVolumeComponent::SetShouldBeLoaded(bool InShouldBeLoaded) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingVolumeComponent.SetShouldBeLoaded"));
    struct Params_SetShouldBeLoaded {
        bool InShouldBeLoaded; // 0x0
    }; // Size: 0x1
    Params_SetShouldBeLoaded params{};
    params.InShouldBeLoaded = (bool)InShouldBeLoaded;
    ProcessEvent(func, &params);
}
void UAvaStreamingVolumeComponent::ProposeLodLevel(int32_t InLodLevel, FVector2D InBorderDist) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingVolumeComponent.ProposeLodLevel"));
    struct Params_ProposeLodLevel {
        int32_t InLodLevel; // 0x0
        FVector2D InBorderDist; // 0x4
    }; // Size: 0xc
    Params_ProposeLodLevel params{};
    params.InLodLevel = (int32_t)InLodLevel;
    params.InBorderDist = (FVector2D)InBorderDist;
    ProcessEvent(func, &params);
}
void UAvaStreamingVolumeComponent::SetLodTime(double InLodTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingVolumeComponent.SetLodTime"));
    struct Params_SetLodTime {
        double InLodTime; // 0x0
    }; // Size: 0x8
    Params_SetLodTime params{};
    params.InLodTime = (double)InLodTime;
    ProcessEvent(func, &params);
}
void UAvaStreamingVolumeComponent::SetLodLevel(int32_t InLodLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingVolumeComponent.SetLodLevel"));
    struct Params_SetLodLevel {
        int32_t InLodLevel; // 0x0
    }; // Size: 0x4
    Params_SetLodLevel params{};
    params.InLodLevel = (int32_t)InLodLevel;
    ProcessEvent(func, &params);
}
void UAvaStreamingVolumeComponent::PropagateState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingVolumeComponent.PropagateState"));
    struct Params_PropagateState {
    }; // Size: 0x0
    Params_PropagateState params{};
    ProcessEvent(func, &params);
}
bool UAvaStreamingVolumeComponent::GetShouldBeVisible() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingVolumeComponent.GetShouldBeVisible"));
    struct Params_GetShouldBeVisible {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetShouldBeVisible params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UAvaStreamingVolumeComponent::GetShouldBeLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingVolumeComponent.GetShouldBeLoaded"));
    struct Params_GetShouldBeLoaded {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetShouldBeLoaded params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
ULevelStreamingDynamic* UAvaStreamingVolumeComponent::GetLoadedLevel() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingVolumeComponent.GetLoadedLevel"));
    struct Params_GetLoadedLevel {
        ULevelStreamingDynamic* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetLoadedLevel params{};
    ProcessEvent(func, &params);
    return (ULevelStreamingDynamic*)params.ReturnValue;
}
int32_t UAvaStreamingVolumeComponent::GetProposedLodLevel() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingVolumeComponent.GetProposedLodLevel"));
    struct Params_GetProposedLodLevel {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetProposedLodLevel params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
double UAvaStreamingVolumeComponent::GetLodTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingVolumeComponent.GetLodTime"));
    struct Params_GetLodTime {
        double ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetLodTime params{};
    ProcessEvent(func, &params);
    return (double)params.ReturnValue;
}
int32_t UAvaStreamingVolumeComponent::GetLodLevel() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingVolumeComponent.GetLodLevel"));
    struct Params_GetLodLevel {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetLodLevel params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
TArray<float> UAvaStreamingVolumeComponent::GetLODDistances() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingVolumeComponent.GetLODDistances"));
    struct Params_GetLODDistances {
        TArray<float> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetLODDistances params{};
    ProcessEvent(func, &params);
    return (TArray<float>)params.ReturnValue;
}
void UAvaStreamingVolumeComponent::ForceUnload() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingVolumeComponent.ForceUnload"));
    struct Params_ForceUnload {
    }; // Size: 0x0
    Params_ForceUnload params{};
    ProcessEvent(func, &params);
}
void UAvaStreamingVolumeComponent::ForceLoad() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingVolumeComponent.ForceLoad"));
    struct Params_ForceLoad {
    }; // Size: 0x0
    Params_ForceLoad params{};
    ProcessEvent(func, &params);
}
bool UAvaStreamingVolumeComponent::CommitLodLevel(double InLodTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingVolumeComponent.CommitLodLevel"));
    struct Params_CommitLodLevel {
        double InLodTime; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_CommitLodLevel params{};
    params.InLodTime = (double)InLodTime;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
