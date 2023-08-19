#pragma once
#include <cstdint>
#include "FLevelCollection.hpp"
#include "FStreamingLevelsToConsider.hpp"
#include "FWorldPSCPool.hpp"
#include "UObject.hpp"
class ULevel;
class UCanvas;
class UPhysicsFieldComponent;
class UPhysicsCollisionHandler;
class ULineBatchComponent;
class UNetDriver;
class UActorComponent;
class AGameNetworkManager;
class UAvoidanceManager;
class ULevelStreaming;
class UDemoNetDriver;
class AParticleEventManager;
class APhysicsVolume;
class UNavigationSystemBase;
class AGameModeBase;
class AGameStateBase;
class UMaterialParameterCollectionInstance;
class UAISystemBase;
class UGameInstance;
class UWorldComposition;
class AWorldSettings;
#pragma pack(push, 1)
class UWorld : public UObject {
public:
    char pad_28[0x8];
    ULevel* PersistentLevel; // 0x30
    UNetDriver* NetDriver; // 0x38
    ULineBatchComponent* LineBatcher; // 0x40
    ULineBatchComponent* PersistentLineBatcher; // 0x48
    ULineBatchComponent* ForegroundLineBatcher; // 0x50
    AGameNetworkManager* NetworkManager; // 0x58
    UPhysicsCollisionHandler* PhysicsCollisionHandler; // 0x60
    TArray<UObject*> ExtraReferencedObjects; // 0x68
    TArray<UObject*> PerModuleDataObjects; // 0x78
    TArray<ULevelStreaming*> StreamingLevels; // 0x88
    FStreamingLevelsToConsider StreamingLevelsToConsider; // 0x98
    char pad_c0[0xa8];
    FString StreamingLevelsPrefix; // 0x168
    char pad_178[0x8];
    TArray<void*> CurrentLevelPendingVisibility; // 0x180
    TArray<ULevelStreaming*> CurrentLevelsDithering; // 0x190
    ULevel* CurrentLevelPendingInvisibility; // 0x1a0
    char pad_1a8[0x8];
    UDemoNetDriver* DemoNetDriver; // 0x1b0
    AParticleEventManager* MyParticleEventManager; // 0x1b8
    APhysicsVolume* DefaultPhysicsVolume; // 0x1c0
    char pad_1c8[0xe6];
    uint8_t pad_bitfield_2ae_0 : 2;
    uint8_t bAreConstraintsDirty : 1; // 0x2ae
    uint8_t pad_bitfield_2ae_3 : 5;
    char pad_2af[0x1];
    UNavigationSystemBase* NavigationSystem; // 0x2b0
    AGameModeBase* AuthorityGameMode; // 0x2b8
    AGameStateBase* GameState; // 0x2c0
    UAISystemBase* AISystem; // 0x2c8
    UAvoidanceManager* AvoidanceManager; // 0x2d0
    TArray<ULevel*> Levels; // 0x2d8
    TArray<FLevelCollection> LevelCollections; // 0x2e8
    char pad_2f8[0x28];
    UGameInstance* OwningGameInstance; // 0x320
    TArray<UMaterialParameterCollectionInstance*> ParameterCollectionInstances; // 0x328
    UCanvas* CanvasForRenderingToTarget; // 0x338
    UCanvas* CanvasForDrawMaterialToRenderTarget; // 0x340
    char pad_348[0x70];
    UPhysicsFieldComponent* PhysicsField; // 0x3b8
    char pad_3c0[0x50];
    TArray<UActorComponent*> ComponentsThatNeedEndOfFrameUpdate; // 0x410
    TArray<UActorComponent*> ComponentsThatNeedEndOfFrameUpdate_OnGameThread; // 0x420
    char pad_430[0x450];
    UWorldComposition* WorldComposition; // 0x880
    char pad_888[0x90];
    FWorldPSCPool PSCPool; // 0x918
    bool CodeGeneratedUWorld; // 0x970
    bool UseOwnTimerManager; // 0x971
    bool UseOwnLatentActionManager; // 0x972
    char pad_973[0xcd];
    static UWorld* StaticClass();
    AWorldSettings* K2_GetWorldSettings();
    void HandleTimelineScrubbed();
}; // Size: 0xa40
#pragma pack(pop)
