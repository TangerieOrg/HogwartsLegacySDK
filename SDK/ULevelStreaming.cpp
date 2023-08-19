#include "ALevelScriptActor.hpp"
#include "ALevelStreamingVolume.hpp"
#include "FLinearColor.hpp"
#include "FTransform.hpp"
#include "UFunction.hpp"
#include "ULevel.hpp"
#include "ULevelStreaming.hpp"
#include "UObject.hpp"
void ULevelStreaming::SetShouldWarmUpStreamingAssets(bool bInShouldWarmUp, float Seconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LevelStreaming.SetShouldWarmUpStreamingAssets"));
    struct Params_SetShouldWarmUpStreamingAssets {
        bool bInShouldWarmUp; // 0x0
        char pad_1[0x3];
        float Seconds; // 0x4
    }; // Size: 0x8
    Params_SetShouldWarmUpStreamingAssets params{};
    params.bInShouldWarmUp = (bool)bInShouldWarmUp;
    params.Seconds = (float)Seconds;
    ProcessEvent(func, &params);
}
ULevelStreaming* ULevelStreaming::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.LevelStreaming");
    return (ULevelStreaming*)res;
}
void ULevelStreaming::SetPriority(int32_t NewPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LevelStreaming.SetPriority"));
    struct Params_SetPriority {
        int32_t NewPriority; // 0x0
    }; // Size: 0x4
    Params_SetPriority params{};
    params.NewPriority = (int32_t)NewPriority;
    ProcessEvent(func, &params);
}
bool ULevelStreaming::IsStreamingLevelDithering() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LevelStreaming.IsStreamingLevelDithering"));
    struct Params_IsStreamingLevelDithering {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsStreamingLevelDithering params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ULevelStreaming::SetShouldBeLoaded(bool bInShouldBeLoaded) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LevelStreaming.SetShouldBeLoaded"));
    struct Params_SetShouldBeLoaded {
        bool bInShouldBeLoaded; // 0x0
    }; // Size: 0x1
    Params_SetShouldBeLoaded params{};
    params.bInShouldBeLoaded = (bool)bInShouldBeLoaded;
    ProcessEvent(func, &params);
}
bool ULevelStreaming::ShouldBeLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LevelStreaming.ShouldBeLoaded"));
    struct Params_ShouldBeLoaded {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ShouldBeLoaded params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ULevelStreaming::SetIsRequestingUnloadAndRemoval(bool bInIsRequestingUnloadAndRemoval) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LevelStreaming.SetIsRequestingUnloadAndRemoval"));
    struct Params_SetIsRequestingUnloadAndRemoval {
        bool bInIsRequestingUnloadAndRemoval; // 0x0
    }; // Size: 0x1
    Params_SetIsRequestingUnloadAndRemoval params{};
    params.bInIsRequestingUnloadAndRemoval = (bool)bInIsRequestingUnloadAndRemoval;
    ProcessEvent(func, &params);
}
void ULevelStreaming::SetShouldBeVisible(bool bInShouldBeVisible) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LevelStreaming.SetShouldBeVisible"));
    struct Params_SetShouldBeVisible {
        bool bInShouldBeVisible; // 0x0
    }; // Size: 0x1
    Params_SetShouldBeVisible params{};
    params.bInShouldBeVisible = (bool)bInShouldBeVisible;
    ProcessEvent(func, &params);
}
void ULevelStreaming::SetLevelLODIndex(int32_t LODIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LevelStreaming.SetLevelLODIndex"));
    struct Params_SetLevelLODIndex {
        int32_t LODIndex; // 0x0
    }; // Size: 0x4
    Params_SetLevelLODIndex params{};
    params.LODIndex = (int32_t)LODIndex;
    ProcessEvent(func, &params);
}
bool ULevelStreaming::IsStreamingWarmedUp() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LevelStreaming.IsStreamingWarmedUp"));
    struct Params_IsStreamingWarmedUp {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsStreamingWarmedUp params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ULevelStreaming::IsStreamingStatePending() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LevelStreaming.IsStreamingStatePending"));
    struct Params_IsStreamingStatePending {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsStreamingStatePending params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ULevelStreaming::IsLevelVisible() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LevelStreaming.IsLevelVisible"));
    struct Params_IsLevelVisible {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsLevelVisible params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ULevelStreaming::IsLevelLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LevelStreaming.IsLevelLoaded"));
    struct Params_IsLevelLoaded {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsLevelLoaded params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FName ULevelStreaming::GetWorldAssetPackageFName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LevelStreaming.GetWorldAssetPackageFName"));
    struct Params_GetWorldAssetPackageFName {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetWorldAssetPackageFName params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
ULevel* ULevelStreaming::GetLoadedLevel() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LevelStreaming.GetLoadedLevel"));
    struct Params_GetLoadedLevel {
        ULevel* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetLoadedLevel params{};
    ProcessEvent(func, &params);
    return (ULevel*)params.ReturnValue;
}
ALevelScriptActor* ULevelStreaming::GetLevelScriptActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LevelStreaming.GetLevelScriptActor"));
    struct Params_GetLevelScriptActor {
        ALevelScriptActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetLevelScriptActor params{};
    ProcessEvent(func, &params);
    return (ALevelScriptActor*)params.ReturnValue;
}
bool ULevelStreaming::GetIsRequestingUnloadAndRemoval() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LevelStreaming.GetIsRequestingUnloadAndRemoval"));
    struct Params_GetIsRequestingUnloadAndRemoval {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIsRequestingUnloadAndRemoval params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
ULevelStreaming* ULevelStreaming::CreateInstance(FString UniqueInstanceName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LevelStreaming.CreateInstance"));
    struct Params_CreateInstance {
        FString UniqueInstanceName; // 0x0
        ULevelStreaming* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_CreateInstance params{};
    params.UniqueInstanceName = (FString)UniqueInstanceName;
    ProcessEvent(func, &params);
    return (ULevelStreaming*)params.ReturnValue;
}
