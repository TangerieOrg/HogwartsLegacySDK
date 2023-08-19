#pragma once
#include <cstdint>
#include "AInfo.hpp"
#include "EVisibilityAggressiveness.hpp"
#include "FBroadphaseSettings.hpp"
#include "FInteriorSettings.hpp"
#include "FNetViewer.hpp"
#include "FReverbSettings.hpp"
#include "FVector.hpp"
class UCullDistancePreset;
class UAssetUserData;
class UNavigationSystemConfig;
class UClass;
class USoundMix;
class APlayerState;
class UBookmarkBase;
#pragma pack(push, 1)
class AWorldSettings : public AInfo {
public:
    char pad_248[0x8];
    int32_t VisibilityCellSize; // 0x250
    EVisibilityAggressiveness VisibilityAggressiveness; // 0x254
    uint8_t bPrecomputeVisibility : 1; // 0x255
    uint8_t bPlaceCellsOnlyAlongCameraTracks : 1; // 0x255
    uint8_t bEnableWorldBoundsChecks : 1; // 0x255
    uint8_t bEnableNavigationSystem : 1; // 0x255
    uint8_t pad_bitfield_255_4 : 4;
    char pad_256[0x2];
    UCullDistancePreset* CullDistancePreset; // 0x258
    uint8_t bEnableAISystem : 1; // 0x260
    uint8_t bEnableWorldComposition : 1; // 0x260
    uint8_t bUseClientSideLevelStreamingVolumes : 1; // 0x260
    uint8_t bEnableWorldOriginRebasing : 1; // 0x260
    uint8_t bWorldGravitySet : 1; // 0x260
    uint8_t bGlobalGravitySet : 1; // 0x260
    uint8_t bMinimizeBSPSections : 1; // 0x260
    uint8_t bForceNoPrecomputedLighting : 1; // 0x260
    uint8_t bHighPriorityLoading : 1; // 0x261
    uint8_t bHighPriorityLoadingLocal : 1; // 0x261
    uint8_t bOverrideDefaultBroadphaseSettings : 1; // 0x261
    uint8_t pad_bitfield_261_3 : 5;
    char pad_262[0x6];
    UNavigationSystemConfig* NavigationSystemConfig; // 0x268
    UNavigationSystemConfig* NavigationSystemConfigOverride; // 0x270
    float WorldToMeters; // 0x278
    float KillZ; // 0x27c
    UClass* KillZDamageType; // 0x280
    float WorldGravityZ; // 0x288
    float GlobalGravityZ; // 0x28c
    UClass* DefaultPhysicsVolumeClass; // 0x290
    UClass* PhysicsCollisionHandlerClass; // 0x298
    UClass* DefaultGameMode; // 0x2a0
    UClass* GameNetworkManagerClass; // 0x2a8
    int32_t PackedLightAndShadowMapTextureSize; // 0x2b0
    FVector DefaultColorScale; // 0x2b4
    float DefaultMaxDistanceFieldOcclusionDistance; // 0x2c0
    float GlobalDistanceFieldViewDistance; // 0x2c4
    float DynamicIndirectShadowsSelfShadowingIntensity; // 0x2c8
    char pad_2cc[0x4];
    FReverbSettings DefaultReverbSettings; // 0x2d0
    FInteriorSettings DefaultAmbientZoneSettings; // 0x2f0
    char pad_314[0x4];
    USoundMix* DefaultBaseSoundMix; // 0x318
    float TimeDilation; // 0x320
    float MatineeTimeDilation; // 0x324
    float DemoPlayTimeDilation; // 0x328
    float MinGlobalTimeDilation; // 0x32c
    float MaxGlobalTimeDilation; // 0x330
    float MinUndilatedFrameTime; // 0x334
    float MaxUndilatedFrameTime; // 0x338
    FBroadphaseSettings BroadphaseSettings; // 0x33c
    char pad_37c[0x4];
    APlayerState* Pauser; // 0x380
    TArray<FNetViewer> ReplicationViewers; // 0x388
    TArray<UAssetUserData*> AssetUserData; // 0x398
    APlayerState* PauserPlayerState; // 0x3a8
    int32_t MaxNumberOfBookmarks; // 0x3b0
    char pad_3b4[0x4];
    UClass* DefaultBookmarkClass; // 0x3b8
    TArray<UBookmarkBase*> BookmarkArray; // 0x3c0
    UClass* LastBookmarkClass; // 0x3d0
    static AWorldSettings* StaticClass();
    void OnRep_WorldGravityZ();
}; // Size: 0x3d8
#pragma pack(pop)
