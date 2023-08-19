#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EUsdInitialLoadSet.hpp"
#include "FFilePath.hpp"
class USceneComponent;
class ULevelSequence;
class UUsdPrimTwin;
class UUsdAssetCache;
class UObject;
class UUsdTransactor;
#pragma pack(push, 1)
class AUsdStageActor : public AActor {
public:
    FFilePath RootLayer; // 0x248
    EUsdInitialLoadSet InitialLoadSet; // 0x258
    char pad_259[0x3];
    int32_t PurposesToLoad; // 0x25c
    FName RenderContext; // 0x260
    USceneComponent* SceneComponent; // 0x268
    float Time; // 0x270
    float StartTimeCode; // 0x274
    float EndTimeCode; // 0x278
    float TimeCodesPerSecond; // 0x27c
    ULevelSequence* LevelSequence; // 0x280
    char pad_288[0x60];
    UUsdPrimTwin* RootUsdTwin; // 0x2e8
    char pad_2f0[0xa0];
    UUsdAssetCache* AssetCache; // 0x390
    UUsdTransactor* Transactor; // 0x398
    char pad_3a0[0xf0];
    static AUsdStageActor* StaticClass();
    void SetTime(float InTime);
    void SetRootLayer(FString RootFilePath);
    void SetRenderContext(FName& NewRenderContext);
    void SetPurposesToLoad(int32_t NewPurposesToLoad);
    void SetInitialLoadSet(EUsdInitialLoadSet NewLoadSet);
    float GetTime();
    FString GetSourcePrimPath(UObject* Object);
    USceneComponent* GetGeneratedComponent(FString PrimPath);
    TArray<UObject*> GetGeneratedAssets(FString PrimPath);
}; // Size: 0x490
#pragma pack(pop)
