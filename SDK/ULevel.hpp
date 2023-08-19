#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "FIntVector.hpp"
#include "FReplicatedStaticActorDestructionInfo.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
class UWorld;
class UModel;
class UModelComponent;
class ULevelActorContainer;
class UNavigationDataChunk;
class ANavigationObjectBase;
class ALevelScriptActor;
class UMapBuildDataRegistry;
class AWorldSettings;
class UAssetUserData;
#pragma pack(push, 1)
class ULevel : public UObject {
public:
    char pad_28[0x90];
    UWorld* OwningWorld; // 0xb8
    UModel* Model; // 0xc0
    TArray<UModelComponent*> ModelComponents; // 0xc8
    ULevelActorContainer* ActorCluster; // 0xd8
    int32_t NumTextureStreamingUnbuiltComponents; // 0xe0
    int32_t NumTextureStreamingDirtyResources; // 0xe4
    ALevelScriptActor* LevelScriptActor; // 0xe8
    ANavigationObjectBase* NavListStart; // 0xf0
    ANavigationObjectBase* NavListEnd; // 0xf8
    TArray<UNavigationDataChunk*> NavDataChunks; // 0x100
    float LightmapTotalSize; // 0x110
    float ShadowmapTotalSize; // 0x114
    TArray<FVector> StaticNavigableGeometry; // 0x118
    TArray<FGuid> StreamingTextureGuids; // 0x128
    char pad_138[0xc8];
    FGuid LevelBuildDataId; // 0x200
    UMapBuildDataRegistry* MapBuildData; // 0x210
    FIntVector LightBuildLevelOffset; // 0x218
    uint8_t bIsLightingScenario : 1; // 0x224
    uint8_t pad_bitfield_224_1 : 2;
    uint8_t bTextureStreamingRotationChanged : 1; // 0x224
    uint8_t bStaticComponentsRegisteredInStreamingManager : 1; // 0x224
    uint8_t bIsVisible : 1; // 0x224
    uint8_t pad_bitfield_224_6 : 2;
    char pad_225[0x6b];
    AWorldSettings* WorldSettings; // 0x290
    char pad_298[0x8];
    TArray<UAssetUserData*> AssetUserData; // 0x2a0
    char pad_2b0[0x10];
    TArray<FReplicatedStaticActorDestructionInfo> DestroyedReplicatedStaticActors; // 0x2c0
    char pad_2d0[0x30];
    static ULevel* StaticClass();
}; // Size: 0x300
#pragma pack(pop)
