#include "FBox.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "ULandscapeManager.hpp"
#include "ULevel.hpp"
#include "ULevelStreaming.hpp"
#include "UObject.hpp"
#include "URegionData.hpp"
void ULandscapeManager::OnLoad() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LandscapeManager.OnLoad"));
    struct Params_OnLoad {
    }; // Size: 0x0
    Params_OnLoad params{};
    ProcessEvent(func, &params);
}
ULandscapeManager* ULandscapeManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LandscapeManager");
    return (ULandscapeManager*)res;
}
void ULandscapeManager::PrepareMapCapture() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LandscapeManager.PrepareMapCapture"));
    struct Params_PrepareMapCapture {
    }; // Size: 0x0
    Params_PrepareMapCapture params{};
    ProcessEvent(func, &params);
}
void ULandscapeManager::RemoveCriticalLevel(ULevelStreaming* InLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LandscapeManager.RemoveCriticalLevel"));
    struct Params_RemoveCriticalLevel {
        ULevelStreaming* InLevel; // 0x0
    }; // Size: 0x8
    Params_RemoveCriticalLevel params{};
    params.InLevel = (ULevelStreaming*)InLevel;
    ProcessEvent(func, &params);
}
void ULandscapeManager::AddCriticalLevel(ULevelStreaming* InLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LandscapeManager.AddCriticalLevel"));
    struct Params_AddCriticalLevel {
        ULevelStreaming* InLevel; // 0x0
    }; // Size: 0x8
    Params_AddCriticalLevel params{};
    params.InLevel = (ULevelStreaming*)InLevel;
    ProcessEvent(func, &params);
}
void ULandscapeManager::OnShow() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LandscapeManager.OnShow"));
    struct Params_OnShow {
    }; // Size: 0x0
    Params_OnShow params{};
    ProcessEvent(func, &params);
}
bool ULandscapeManager::IsReadyForMapCapture() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LandscapeManager.IsReadyForMapCapture"));
    struct Params_IsReadyForMapCapture {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsReadyForMapCapture params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ULandscapeManager::OnGameToSave() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LandscapeManager.OnGameToSave"));
    struct Params_OnGameToSave {
    }; // Size: 0x0
    Params_OnGameToSave params{};
    ProcessEvent(func, &params);
}
void ULandscapeManager::OnSaveGameLoad() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LandscapeManager.OnSaveGameLoad"));
    struct Params_OnSaveGameLoad {
    }; // Size: 0x0
    Params_OnSaveGameLoad params{};
    ProcessEvent(func, &params);
}
bool ULandscapeManager::IsLocationExploredRegion(FVector Location, float MapScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LandscapeManager.IsLocationExploredRegion"));
    struct Params_IsLocationExploredRegion {
        FVector Location; // 0x0
        float MapScale; // 0xc
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsLocationExploredRegion params{};
    params.Location = (FVector)Location;
    params.MapScale = (float)MapScale;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ULandscapeManager::IsLocationExploredFog(FVector Location, float MapScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LandscapeManager.IsLocationExploredFog"));
    struct Params_IsLocationExploredFog {
        FVector Location; // 0x0
        float MapScale; // 0xc
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsLocationExploredFog params{};
    params.Location = (FVector)Location;
    params.MapScale = (float)MapScale;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ULandscapeManager::IsLoadedLevelCritical(ULevel* InLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LandscapeManager.IsLoadedLevelCritical"));
    struct Params_IsLoadedLevelCritical {
        ULevel* InLevel; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsLoadedLevelCritical params{};
    params.InLevel = (ULevel*)InLevel;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ULandscapeManager::IsLevelCritical(ULevelStreaming* InLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LandscapeManager.IsLevelCritical"));
    struct Params_IsLevelCritical {
        ULevelStreaming* InLevel; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsLevelCritical params{};
    params.InLevel = (ULevelStreaming*)InLevel;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t ULandscapeManager::GetNumActiveLevelLoads(bool InCriticalOnly) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LandscapeManager.GetNumActiveLevelLoads"));
    struct Params_GetNumActiveLevelLoads {
        bool InCriticalOnly; // 0x0
        char pad_1[0x3];
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetNumActiveLevelLoads params{};
    params.InCriticalOnly = (bool)InCriticalOnly;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FBox ULandscapeManager::GetLandscapeWorldBounds() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LandscapeManager.GetLandscapeWorldBounds"));
    struct Params_GetLandscapeWorldBounds {
        FBox ReturnValue; // 0x0
    }; // Size: 0x1c
    Params_GetLandscapeWorldBounds params{};
    ProcessEvent(func, &params);
    return (FBox)params.ReturnValue;
}
ULandscapeManager* ULandscapeManager::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LandscapeManager.Get"));
    struct Params_Get {
        ULandscapeManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (ULandscapeManager*)params.ReturnValue;
}
void ULandscapeManager::ForceLandscapeLODs() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LandscapeManager.ForceLandscapeLODs"));
    struct Params_ForceLandscapeLODs {
    }; // Size: 0x0
    Params_ForceLandscapeLODs params{};
    ProcessEvent(func, &params);
}
void ULandscapeManager::DoMapCapture() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LandscapeManager.DoMapCapture"));
    struct Params_DoMapCapture {
    }; // Size: 0x0
    Params_DoMapCapture params{};
    ProcessEvent(func, &params);
}
void ULandscapeManager::ClearCriticalLevels() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LandscapeManager.ClearCriticalLevels"));
    struct Params_ClearCriticalLevels {
    }; // Size: 0x0
    Params_ClearCriticalLevels params{};
    ProcessEvent(func, &params);
}
void ULandscapeManager::CleanupMapCapture() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LandscapeManager.CleanupMapCapture"));
    struct Params_CleanupMapCapture {
    }; // Size: 0x0
    Params_CleanupMapCapture params{};
    ProcessEvent(func, &params);
}
