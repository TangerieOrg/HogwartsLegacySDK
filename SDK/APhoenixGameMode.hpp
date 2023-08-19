#pragma once
#include <cstdint>
#include "AAble_GameMode.hpp"
class APlayerStart;
class AActor;
class ULevelStreaming;
struct FVector;
struct FRotator;
class UInstancedStaticMeshComponent;
class UObject;
#pragma pack(push, 1)
class APhoenixGameMode : public AAble_GameMode {
public:
    char pad_350[0x18];
    APlayerStart* ProgrammaticPlayerStart; // 0x368
    TArray<AActor*> InterestPointActors; // 0x370
    static APhoenixGameMode* StaticClass();
    void YeeTest();
    void VCGetContents(FString ContainerID);
    void UnregisterInterestPointActor(FString ActorName);
    void SetProgrammaticPlayerStartInfo(FVector& InLocation, FRotator& InRotation, bool bForceUse);
    void SetLocale(FString LocaleString);
    static void RemoveInstancedStaticMeshCollision(UInstancedStaticMeshComponent* InstancedMeshComponent, int32_t InstanceIndex);
    void RegisterInterestPointActor(FString InActorName, float InSpawnX, float InSpawnY, float InSpawnZ, bool bSpawnNewActor);
    bool PlayerStartedAtProgrammaticLocation();
    static void OpenLevelByReference(UObject* WorldContextObject);
    void LootDrop(FString LootCategoryID, int32_t Level);
    static ULevelStreaming* GetStreamingLevelAva(UObject* WorldContextObject, FName PackageName);
    FString GetPlayerStartTag();
    static APhoenixGameMode* GetPhoenixGameMode();
    FString GetOptions();
    void GameStartMission();
    void GameFinishMission();
    void GameDBImport(FString ImportFilename);
    void GameDBExport(FString ExportFilename);
    void GameAbortMission();
    void Dbg_ShowHUD();
    void Dbg_HideHUD();
    void ClearForceUseProgrammaticPlayerStart();
    void AsyncLoadAssetList(UObject* WorldContextObject, TArray<void*>& AssetsToStream, int32_t& UniqueId);
}; // Size: 0x380
#pragma pack(pop)
