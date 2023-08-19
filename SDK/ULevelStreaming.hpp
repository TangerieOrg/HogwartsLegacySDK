#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FTransform.hpp"
#include "UObject.hpp"
class ALevelStreamingVolume;
class ULevel;
class ALevelScriptActor;
#pragma pack(push, 1)
class ULevelStreaming : public UObject {
public:
    char pad_28[0x28];
    FName PackageNameToLoad; // 0x50
    TArray<FName> LODPackageNames; // 0x58
    char pad_68[0x18];
    FTransform LevelTransform; // 0x80
    int32_t LoadPriority; // 0xb0
    int32_t LevelLODIndex; // 0xb4
    int32_t StreamingPriority; // 0xb8
    char pad_bc[0x2];
    uint8_t pad_bitfield_be_0 : 3;
    uint8_t bShouldBeVisible : 1; // 0xbe
    uint8_t pad_bitfield_be_4 : 4;
    char pad_bf[0x9];
    uint8_t bShouldBeLoaded : 1; // 0xc8
    uint8_t bLocked : 1; // 0xc8
    uint8_t bIsStatic : 1; // 0xc8
    uint8_t bShouldBlockOnLoad : 1; // 0xc8
    uint8_t bShouldBlockOnUnload : 1; // 0xc8
    uint8_t bIsCodeGeneratedWorld : 1; // 0xc8
    uint8_t bDisableDistanceStreaming : 1; // 0xc8
    uint8_t bDrawOnLevelStatusMap : 1; // 0xc8
    uint8_t bShouldDitherInAndOut : 1; // 0xc9
    uint8_t bShouldDitherTransitions : 1; // 0xc9
    uint8_t pad_bitfield_c9_2 : 6;
    char pad_ca[0x6];
    FLinearColor LevelColor; // 0xd0
    TArray<ALevelStreamingVolume*> EditorStreamingVolumes; // 0xe0
    char pad_f0[0x20];
    float MinTimeBetweenVolumeUnloadRequests; // 0x110
    char pad_114[0x64];
    ULevel* LoadedLevel; // 0x178
    ULevel* TransitionLevel; // 0x180
    char pad_188[0x8];
    ULevel* PendingUnloadLevel; // 0x190
    char pad_198[0x18];
    static ULevelStreaming* StaticClass();
    bool ShouldBeLoaded();
    void SetShouldWarmUpStreamingAssets(bool bInShouldWarmUp, float Seconds);
    void SetShouldBeVisible(bool bInShouldBeVisible);
    void SetShouldBeLoaded(bool bInShouldBeLoaded);
    void SetPriority(int32_t NewPriority);
    void SetLevelLODIndex(int32_t LODIndex);
    void SetIsRequestingUnloadAndRemoval(bool bInIsRequestingUnloadAndRemoval);
    bool IsStreamingWarmedUp();
    bool IsStreamingStatePending();
    bool IsStreamingLevelDithering();
    bool IsLevelVisible();
    bool IsLevelLoaded();
    FName GetWorldAssetPackageFName();
    ULevel* GetLoadedLevel();
    ALevelScriptActor* GetLevelScriptActor();
    bool GetIsRequestingUnloadAndRemoval();
    ULevelStreaming* CreateInstance(FString UniqueInstanceName);
}; // Size: 0x1b0
#pragma pack(pop)
