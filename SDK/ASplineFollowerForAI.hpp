#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EPerformTaskSplineTypes.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "FSplinePoint.hpp"
#include "FSplineSceneRig.hpp"
class UPathComponent;
class ASceneRigActor;
class UCameraStackInfluenceHandle;
class UCameraStackVolumePreset;
class UScheduledEntity;
#pragma pack(push, 1)
class ASplineFollowerForAI : public AActor {
public:
    UPathComponent* PathComponent; // 0x248
    bool bDebugSpline; // 0x250
    EPerformTaskSplineTypes SplineType; // 0x251
    bool bCanPlayerUseSpeedModifier; // 0x252
    bool bStartAtSplineStart; // 0x253
    bool bOrientTowardsPlayer; // 0x254
    bool bInfluenceCamera; // 0x255
    char pad_256[0x2];
    uint8_t bLumosOn : 1; // 0x258
    uint8_t pad_bitfield_258_1 : 7;
    char pad_259[0x3];
    bool bUseDetailPanelRadiusValues; // 0x25c
    char pad_25d[0x3];
    float clearanceDistance; // 0x260
    bool CasualMode; // 0x264
    bool JumpDisabled; // 0x265
    bool DodgeDisabled; // 0x266
    bool AimModeDisabled; // 0x267
    bool SpellsDisabled; // 0x268
    char pad_269[0x7];
    TArray<FSplineSceneRig> SplineSceneRigs; // 0x270
    ASceneRigActor* CommonInterruptParallelSceneRigActor; // 0x280
    ASceneRigActor* CommonResumeParallelSceneRigActor; // 0x288
    ASceneRigActor* CommonBarkParallelSceneRigActor; // 0x290
    bool bClearParallelSceneRig; // 0x298
    char pad_299[0x7];
    FDbSingleColumnInfo MissionID; // 0x2a0
    int32_t MissionUID; // 0x328
    float StartMatchingPlayerSpeedRadius; // 0x32c
    float BungeeRadius; // 0x330
    float TickDelays; // 0x334
    float EntryPointDistance; // 0x338
    int32_t HeadTrackingCounter; // 0x33c
    bool bPlayerDistanceFromSpline; // 0x340
    bool bCanWait; // 0x341
    char pad_342[0x2];
    float StartWaitingProximityRadius; // 0x344
    float StopWaitingProximityRadius; // 0x348
    float PlayerDistanceFromSplineForWait; // 0x34c
    float StartSlowWalkingProximityRadius; // 0x350
    float StartWalkingProximityRadius; // 0x354
    char pad_358[0x4];
    float StartJoggingProximityRadius; // 0x35c
    bool bRevertToOriginalSpeedMode; // 0x360
    char pad_361[0x3];
    float RevertToOrginalProximityRadius; // 0x364
    bool bCanInterruptVO; // 0x368
    char pad_369[0x3];
    float InterruptVOProximityRadius; // 0x36c
    float ResumeVOProximityRadius; // 0x370
    float BarkVOProximityRadius; // 0x374
    TArray<FSplinePoint> SplinePointsFromOtherSpline; // 0x378
    ASplineFollowerForAI* OtherSplinePath; // 0x388
    char pad_390[0x58];
    UCameraStackVolumePreset* CameraInfluencePreset; // 0x3e8
    UCameraStackInfluenceHandle* CameraInfluenceHandle; // 0x3f0
    char pad_3f8[0x80];
    static ASplineFollowerForAI* StaticClass();
    void UpdateSplineType(EPerformTaskSplineTypes NewSplineType);
    void StartAIMovementOnSpline(UScheduledEntity* InScheduledEntity, int32_t ActivityTypeBits);
    void SetLumos(bool InbLumosOn);
    void OnWaitForPlayerComplete();
    void OnFleshLoadComplete(AActor* FleshActor);
    void MoveOnSplineFleshLoad(AActor* FleshActor);
    void CreateSplineFromGivenPoints();
}; // Size: 0x478
#pragma pack(pop)
