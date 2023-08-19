#include "AAble_GameMode.hpp"
#include "AActor.hpp"
#include "APhoenixGameMode.hpp"
#include "APlayerStart.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UInstancedStaticMeshComponent.hpp"
#include "ULevelStreaming.hpp"
#include "UObject.hpp"
APhoenixGameMode* APhoenixGameMode::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhoenixGameMode");
    return (APhoenixGameMode*)res;
}
void APhoenixGameMode::YeeTest() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameMode.YeeTest"));
    struct Params_YeeTest {
    }; // Size: 0x0
    Params_YeeTest params{};
    ProcessEvent(func, &params);
}
void APhoenixGameMode::VCGetContents(FString ContainerID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameMode.VCGetContents"));
    struct Params_VCGetContents {
        FString ContainerID; // 0x0
    }; // Size: 0x10
    Params_VCGetContents params{};
    params.ContainerID = (FString)ContainerID;
    ProcessEvent(func, &params);
}
void APhoenixGameMode::Dbg_ShowHUD() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameMode.Dbg_ShowHUD"));
    struct Params_Dbg_ShowHUD {
    }; // Size: 0x0
    Params_Dbg_ShowHUD params{};
    ProcessEvent(func, &params);
}
void APhoenixGameMode::UnregisterInterestPointActor(FString ActorName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameMode.UnregisterInterestPointActor"));
    struct Params_UnregisterInterestPointActor {
        FString ActorName; // 0x0
    }; // Size: 0x10
    Params_UnregisterInterestPointActor params{};
    params.ActorName = (FString)ActorName;
    ProcessEvent(func, &params);
}
void APhoenixGameMode::SetProgrammaticPlayerStartInfo(FVector& InLocation, FRotator& InRotation, bool bForceUse) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameMode.SetProgrammaticPlayerStartInfo"));
    struct Params_SetProgrammaticPlayerStartInfo {
        FVector InLocation; // 0x0
        FRotator InRotation; // 0xc
        bool bForceUse; // 0x18
    }; // Size: 0x19
    Params_SetProgrammaticPlayerStartInfo params{};
    params.InLocation = (FVector)InLocation;
    params.InRotation = (FRotator)InRotation;
    params.bForceUse = (bool)bForceUse;
    ProcessEvent(func, &params);
    InLocation = params.InLocation;
    InRotation = params.InRotation;
}
void APhoenixGameMode::ClearForceUseProgrammaticPlayerStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameMode.ClearForceUseProgrammaticPlayerStart"));
    struct Params_ClearForceUseProgrammaticPlayerStart {
    }; // Size: 0x0
    Params_ClearForceUseProgrammaticPlayerStart params{};
    ProcessEvent(func, &params);
}
void APhoenixGameMode::SetLocale(FString LocaleString) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameMode.SetLocale"));
    struct Params_SetLocale {
        FString LocaleString; // 0x0
    }; // Size: 0x10
    Params_SetLocale params{};
    params.LocaleString = (FString)LocaleString;
    ProcessEvent(func, &params);
}
void APhoenixGameMode::RemoveInstancedStaticMeshCollision(UInstancedStaticMeshComponent* InstancedMeshComponent, int32_t InstanceIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameMode.RemoveInstancedStaticMeshCollision"));
    struct Params_RemoveInstancedStaticMeshCollision {
        UInstancedStaticMeshComponent* InstancedMeshComponent; // 0x0
        int32_t InstanceIndex; // 0x8
    }; // Size: 0xc
    Params_RemoveInstancedStaticMeshCollision params{};
    params.InstancedMeshComponent = (UInstancedStaticMeshComponent*)InstancedMeshComponent;
    params.InstanceIndex = (int32_t)InstanceIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void APhoenixGameMode::RegisterInterestPointActor(FString InActorName, float InSpawnX, float InSpawnY, float InSpawnZ, bool bSpawnNewActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameMode.RegisterInterestPointActor"));
    struct Params_RegisterInterestPointActor {
        FString InActorName; // 0x0
        float InSpawnX; // 0x10
        float InSpawnY; // 0x14
        float InSpawnZ; // 0x18
        bool bSpawnNewActor; // 0x1c
    }; // Size: 0x1d
    Params_RegisterInterestPointActor params{};
    params.InActorName = (FString)InActorName;
    params.InSpawnX = (float)InSpawnX;
    params.InSpawnY = (float)InSpawnY;
    params.InSpawnZ = (float)InSpawnZ;
    params.bSpawnNewActor = (bool)bSpawnNewActor;
    ProcessEvent(func, &params);
}
bool APhoenixGameMode::PlayerStartedAtProgrammaticLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameMode.PlayerStartedAtProgrammaticLocation"));
    struct Params_PlayerStartedAtProgrammaticLocation {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_PlayerStartedAtProgrammaticLocation params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void APhoenixGameMode::OpenLevelByReference(UObject* WorldContextObject) {}
void APhoenixGameMode::LootDrop(FString LootCategoryID, int32_t Level) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameMode.LootDrop"));
    struct Params_LootDrop {
        FString LootCategoryID; // 0x0
        int32_t Level; // 0x10
    }; // Size: 0x14
    Params_LootDrop params{};
    params.LootCategoryID = (FString)LootCategoryID;
    params.Level = (int32_t)Level;
    ProcessEvent(func, &params);
}
ULevelStreaming* APhoenixGameMode::GetStreamingLevelAva(UObject* WorldContextObject, FName PackageName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameMode.GetStreamingLevelAva"));
    struct Params_GetStreamingLevelAva {
        UObject* WorldContextObject; // 0x0
        FName PackageName; // 0x8
        ULevelStreaming* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetStreamingLevelAva params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PackageName = (FName)PackageName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (ULevelStreaming*)params.ReturnValue;
}
FString APhoenixGameMode::GetPlayerStartTag() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameMode.GetPlayerStartTag"));
    struct Params_GetPlayerStartTag {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetPlayerStartTag params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
APhoenixGameMode* APhoenixGameMode::GetPhoenixGameMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameMode.GetPhoenixGameMode"));
    struct Params_GetPhoenixGameMode {
        APhoenixGameMode* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPhoenixGameMode params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (APhoenixGameMode*)params.ReturnValue;
}
FString APhoenixGameMode::GetOptions() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameMode.GetOptions"));
    struct Params_GetOptions {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetOptions params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void APhoenixGameMode::GameStartMission() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameMode.GameStartMission"));
    struct Params_GameStartMission {
    }; // Size: 0x0
    Params_GameStartMission params{};
    ProcessEvent(func, &params);
}
void APhoenixGameMode::GameFinishMission() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameMode.GameFinishMission"));
    struct Params_GameFinishMission {
    }; // Size: 0x0
    Params_GameFinishMission params{};
    ProcessEvent(func, &params);
}
void APhoenixGameMode::GameDBImport(FString ImportFilename) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameMode.GameDBImport"));
    struct Params_GameDBImport {
        FString ImportFilename; // 0x0
    }; // Size: 0x10
    Params_GameDBImport params{};
    params.ImportFilename = (FString)ImportFilename;
    ProcessEvent(func, &params);
}
void APhoenixGameMode::GameDBExport(FString ExportFilename) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameMode.GameDBExport"));
    struct Params_GameDBExport {
        FString ExportFilename; // 0x0
    }; // Size: 0x10
    Params_GameDBExport params{};
    params.ExportFilename = (FString)ExportFilename;
    ProcessEvent(func, &params);
}
void APhoenixGameMode::GameAbortMission() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameMode.GameAbortMission"));
    struct Params_GameAbortMission {
    }; // Size: 0x0
    Params_GameAbortMission params{};
    ProcessEvent(func, &params);
}
void APhoenixGameMode::Dbg_HideHUD() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameMode.Dbg_HideHUD"));
    struct Params_Dbg_HideHUD {
    }; // Size: 0x0
    Params_Dbg_HideHUD params{};
    ProcessEvent(func, &params);
}
void APhoenixGameMode::AsyncLoadAssetList(UObject* WorldContextObject, TArray<void*>& AssetsToStream, int32_t& UniqueId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixGameMode.AsyncLoadAssetList"));
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
