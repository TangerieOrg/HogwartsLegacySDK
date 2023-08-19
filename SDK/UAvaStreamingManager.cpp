#include "AActor.hpp"
#include "APostProcessVolumeWithBlendDomain.hpp"
#include "EStreamingBehaviorMode.hpp"
#include "EStreamingBehaviorTactic.hpp"
#include "FVector.hpp"
#include "UAvaStreamingManager.hpp"
#include "UFunction.hpp"
#include "ULevel.hpp"
#include "ULevelStreaming.hpp"
#include "ULevelStreamingLatencyProfiler.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMaterialInterface.hpp"
#include "UObject.hpp"
bool UAvaStreamingManager::UnregisterInterestPointActor(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingManager.UnregisterInterestPointActor"));
    struct Params_UnregisterInterestPointActor {
        AActor* InActor; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_UnregisterInterestPointActor params{};
    params.InActor = (AActor*)InActor;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UAvaStreamingManager::SetLowEndFog(APostProcessVolumeWithBlendDomain* LowEndFog, UMaterialInterface* LowEndFogMaterialBase) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingManager.SetLowEndFog"));
    struct Params_SetLowEndFog {
        APostProcessVolumeWithBlendDomain* LowEndFog; // 0x0
        UMaterialInterface* LowEndFogMaterialBase; // 0x8
    }; // Size: 0x10
    Params_SetLowEndFog params{};
    params.LowEndFog = (APostProcessVolumeWithBlendDomain*)LowEndFog;
    params.LowEndFogMaterialBase = (UMaterialInterface*)LowEndFogMaterialBase;
    ProcessEvent(func, &params);
}
UAvaStreamingManager* UAvaStreamingManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AvaStreamingManager");
    return (UAvaStreamingManager*)res;
}
void UAvaStreamingManager::SetStreamingBehaviorMode(EStreamingBehaviorMode BehaviorMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingManager.SetStreamingBehaviorMode"));
    struct Params_SetStreamingBehaviorMode {
        EStreamingBehaviorMode BehaviorMode; // 0x0
    }; // Size: 0x1
    Params_SetStreamingBehaviorMode params{};
    params.BehaviorMode = (EStreamingBehaviorMode)BehaviorMode;
    ProcessEvent(func, &params);
}
void UAvaStreamingManager::UpdateOverlaps() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingManager.UpdateOverlaps"));
    struct Params_UpdateOverlaps {
    }; // Size: 0x0
    Params_UpdateOverlaps params{};
    ProcessEvent(func, &params);
}
void UAvaStreamingManager::UnloadLevelInstance(ULevelStreaming* InLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingManager.UnloadLevelInstance"));
    struct Params_UnloadLevelInstance {
        ULevelStreaming* InLevel; // 0x0
    }; // Size: 0x8
    Params_UnloadLevelInstance params{};
    params.InLevel = (ULevelStreaming*)InLevel;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAvaStreamingManager::UnloadAllButCurrentLevel() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingManager.UnloadAllButCurrentLevel"));
    struct Params_UnloadAllButCurrentLevel {
    }; // Size: 0x0
    Params_UnloadAllButCurrentLevel params{};
    ProcessEvent(func, &params);
}
void UAvaStreamingManager::SuppressPauseStreamingAutoReset(bool bSuppress) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingManager.SuppressPauseStreamingAutoReset"));
    struct Params_SuppressPauseStreamingAutoReset {
        bool bSuppress; // 0x0
    }; // Size: 0x1
    Params_SuppressPauseStreamingAutoReset params{};
    params.bSuppress = (bool)bSuppress;
    ProcessEvent(func, &params);
}
void UAvaStreamingManager::ResumeStreaming(bool bForceImmediate, bool bResumeTileStreaming) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingManager.ResumeStreaming"));
    struct Params_ResumeStreaming {
        bool bForceImmediate; // 0x0
        bool bResumeTileStreaming; // 0x1
    }; // Size: 0x2
    Params_ResumeStreaming params{};
    params.bForceImmediate = (bool)bForceImmediate;
    params.bResumeTileStreaming = (bool)bResumeTileStreaming;
    ProcessEvent(func, &params);
}
bool UAvaStreamingManager::RegisterInterestPointActor(AActor* InActor, float InAdditionalRadius, bool InAffectsInteriors, bool InAffectsTileRegionVolumes) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingManager.RegisterInterestPointActor"));
    struct Params_RegisterInterestPointActor {
        AActor* InActor; // 0x0
        float InAdditionalRadius; // 0x8
        bool InAffectsInteriors; // 0xc
        bool InAffectsTileRegionVolumes; // 0xd
        bool ReturnValue; // 0xe
    }; // Size: 0xf
    Params_RegisterInterestPointActor params{};
    params.InActor = (AActor*)InActor;
    params.InAdditionalRadius = (float)InAdditionalRadius;
    params.InAffectsInteriors = (bool)InAffectsInteriors;
    params.InAffectsTileRegionVolumes = (bool)InAffectsTileRegionVolumes;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UAvaStreamingManager::PreventInteriorLoads(bool bPrevent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingManager.PreventInteriorLoads"));
    struct Params_PreventInteriorLoads {
        bool bPrevent; // 0x0
    }; // Size: 0x1
    Params_PreventInteriorLoads params{};
    params.bPrevent = (bool)bPrevent;
    ProcessEvent(func, &params);
}
void UAvaStreamingManager::PauseStreaming(bool bWorldTilesOnly) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingManager.PauseStreaming"));
    struct Params_PauseStreaming {
        bool bWorldTilesOnly; // 0x0
    }; // Size: 0x1
    Params_PauseStreaming params{};
    params.bWorldTilesOnly = (bool)bWorldTilesOnly;
    ProcessEvent(func, &params);
}
void UAvaStreamingManager::OnLoadScreenDismissed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingManager.OnLoadScreenDismissed"));
    struct Params_OnLoadScreenDismissed {
    }; // Size: 0x0
    Params_OnLoadScreenDismissed params{};
    ProcessEvent(func, &params);
}
void UAvaStreamingManager::LowerCurtainUntilStreamingComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingManager.LowerCurtainUntilStreamingComplete"));
    struct Params_LowerCurtainUntilStreamingComplete {
    }; // Size: 0x0
    Params_LowerCurtainUntilStreamingComplete params{};
    ProcessEvent(func, &params);
}
void UAvaStreamingManager::LoadGlobalLevels() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingManager.LoadGlobalLevels"));
    struct Params_LoadGlobalLevels {
    }; // Size: 0x0
    Params_LoadGlobalLevels params{};
    ProcessEvent(func, &params);
}
bool UAvaStreamingManager::IsTileRenderingEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingManager.IsTileRenderingEnabled"));
    struct Params_IsTileRenderingEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsTileRenderingEnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UAvaStreamingManager::IsStreamingPaused() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingManager.IsStreamingPaused"));
    struct Params_IsStreamingPaused {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsStreamingPaused params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UAvaStreamingManager::IsStreamingCompleteFullCycle(bool bCheckOnlyLOD0, bool bUseDelay) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingManager.IsStreamingCompleteFullCycle"));
    struct Params_IsStreamingCompleteFullCycle {
        bool bCheckOnlyLOD0; // 0x0
        bool bUseDelay; // 0x1
        bool ReturnValue; // 0x2
    }; // Size: 0x3
    Params_IsStreamingCompleteFullCycle params{};
    params.bCheckOnlyLOD0 = (bool)bCheckOnlyLOD0;
    params.bUseDelay = (bool)bUseDelay;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UAvaStreamingManager::IsStreamingCompleteAtLocationFullCycle(FVector& InQueryPoint, bool InQueryWorldTiles, bool InUseSlowAccurateCheck, bool InConsiderFutureRequestAtLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingManager.IsStreamingCompleteAtLocationFullCycle"));
    struct Params_IsStreamingCompleteAtLocationFullCycle {
        FVector InQueryPoint; // 0x0
        bool InQueryWorldTiles; // 0xc
        bool InUseSlowAccurateCheck; // 0xd
        bool InConsiderFutureRequestAtLocation; // 0xe
        bool ReturnValue; // 0xf
    }; // Size: 0x10
    Params_IsStreamingCompleteAtLocationFullCycle params{};
    params.InQueryPoint = (FVector)InQueryPoint;
    params.InQueryWorldTiles = (bool)InQueryWorldTiles;
    params.InUseSlowAccurateCheck = (bool)InUseSlowAccurateCheck;
    params.InConsiderFutureRequestAtLocation = (bool)InConsiderFutureRequestAtLocation;
    ProcessEvent(func, &params);
    InQueryPoint = params.InQueryPoint;
    return (bool)params.ReturnValue;
}
bool UAvaStreamingManager::IsStreamingCompleteAtLocation(FVector& InQueryPoint, bool InQueryWorldTiles, bool InUseSlowAccurateCheck, bool InConsiderFutureRequestAtLocation, int32_t MinPriorityToCheck, bool bCheckTextureAndMeshStreaming) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingManager.IsStreamingCompleteAtLocation"));
    struct Params_IsStreamingCompleteAtLocation {
        FVector InQueryPoint; // 0x0
        bool InQueryWorldTiles; // 0xc
        bool InUseSlowAccurateCheck; // 0xd
        bool InConsiderFutureRequestAtLocation; // 0xe
        char pad_f[0x1];
        int32_t MinPriorityToCheck; // 0x10
        bool bCheckTextureAndMeshStreaming; // 0x14
        bool ReturnValue; // 0x15
    }; // Size: 0x16
    Params_IsStreamingCompleteAtLocation params{};
    params.InQueryPoint = (FVector)InQueryPoint;
    params.InQueryWorldTiles = (bool)InQueryWorldTiles;
    params.InUseSlowAccurateCheck = (bool)InUseSlowAccurateCheck;
    params.InConsiderFutureRequestAtLocation = (bool)InConsiderFutureRequestAtLocation;
    params.MinPriorityToCheck = (int32_t)MinPriorityToCheck;
    params.bCheckTextureAndMeshStreaming = (bool)bCheckTextureAndMeshStreaming;
    ProcessEvent(func, &params);
    InQueryPoint = params.InQueryPoint;
    return (bool)params.ReturnValue;
}
void UAvaStreamingManager::AsyncLoadAssetList(UObject* WorldContextObject, TArray<void*>& AssetsToStream, int32_t& UniqueId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingManager.AsyncLoadAssetList"));
    struct Params_AsyncLoadAssetList {
        UObject* WorldContextObject; // 0x0
        TArray<void*> AssetsToStream; // 0x8
        int32_t UniqueId; // 0x18
    }; // Size: 0x1c
    Params_AsyncLoadAssetList params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.AssetsToStream = (TArray<void*>)AssetsToStream;
    params.UniqueId = (int32_t)UniqueId;
    ProcessEvent(func, &params);
    AssetsToStream = params.AssetsToStream;
    UniqueId = params.UniqueId;
}
bool UAvaStreamingManager::IsStreamingComplete(bool bCheckOnlyLOD0, bool bUseDelay, bool bConsiderUpdatePending, bool bConsiderUnloads) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingManager.IsStreamingComplete"));
    struct Params_IsStreamingComplete {
        bool bCheckOnlyLOD0; // 0x0
        bool bUseDelay; // 0x1
        bool bConsiderUpdatePending; // 0x2
        bool bConsiderUnloads; // 0x3
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_IsStreamingComplete params{};
    params.bCheckOnlyLOD0 = (bool)bCheckOnlyLOD0;
    params.bUseDelay = (bool)bUseDelay;
    params.bConsiderUpdatePending = (bool)bConsiderUpdatePending;
    params.bConsiderUnloads = (bool)bConsiderUnloads;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UAvaStreamingManager::InvalidateStreamingComplete(bool InRequireFullUpdates) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingManager.InvalidateStreamingComplete"));
    struct Params_InvalidateStreamingComplete {
        bool InRequireFullUpdates; // 0x0
    }; // Size: 0x1
    Params_InvalidateStreamingComplete params{};
    params.InRequireFullUpdates = (bool)InRequireFullUpdates;
    ProcessEvent(func, &params);
}
EStreamingBehaviorTactic UAvaStreamingManager::GetStreamingBehaviorTactic() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingManager.GetStreamingBehaviorTactic"));
    struct Params_GetStreamingBehaviorTactic {
        EStreamingBehaviorTactic ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetStreamingBehaviorTactic params{};
    ProcessEvent(func, &params);
    return (EStreamingBehaviorTactic)params.ReturnValue;
}
EStreamingBehaviorMode UAvaStreamingManager::GetStreamingBehaviorMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingManager.GetStreamingBehaviorMode"));
    struct Params_GetStreamingBehaviorMode {
        EStreamingBehaviorMode ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetStreamingBehaviorMode params{};
    ProcessEvent(func, &params);
    return (EStreamingBehaviorMode)params.ReturnValue;
}
UAvaStreamingManager* UAvaStreamingManager::GetPure() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingManager.GetPure"));
    struct Params_GetPure {
        UAvaStreamingManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPure params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UAvaStreamingManager*)params.ReturnValue;
}
UAvaStreamingManager* UAvaStreamingManager::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingManager.Get"));
    struct Params_Get {
        UAvaStreamingManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UAvaStreamingManager*)params.ReturnValue;
}
void UAvaStreamingManager::FlushStreaming() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingManager.FlushStreaming"));
    struct Params_FlushStreaming {
    }; // Size: 0x0
    Params_FlushStreaming params{};
    ProcessEvent(func, &params);
}
