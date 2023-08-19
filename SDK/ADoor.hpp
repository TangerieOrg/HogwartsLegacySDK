#pragma once
#include <cstdint>
#include "ALockable.hpp"
#include "EBlockNavMeshOverride.hpp"
#include "EDoorCurveAdjustment.hpp"
#include "EDoorState.hpp"
#include "EOpenDoorDirection.hpp"
class AAkAcousticPortal;
class UArrowComponent;
class UWidgetComponent;
class UFastTravelForDoorsComponent;
class ARenderSettingsCustomBlendDomainVolume;
class UStaticMeshComponent;
class ALerpVolume;
class UAkAudioEvent;
struct FHitResult;
class UCurveFloat;
class UOdcObstacleComponent;
class UDoorBoxComponent;
class UObject;
class UPrimitiveComponent;
class AActor;
#pragma pack(push, 1)
class ADoor : public ALockable {
public:
    char pad_288[0x24];
    int32_t EnvInt; // 0x2ac
    int32_t PropIndex; // 0x2b0
    char pad_2b4[0x54];
    bool UseDoorFrame; // 0x308
    char pad_309[0x7];
    ADoor* ChildDoor; // 0x310
    bool RegisterNamedDoor; // 0x318
    char pad_319[0x3];
    FName BeaconableObjectID; // 0x31c
    bool Open; // 0x324
    bool KeepDoorOpen; // 0x325
    bool DefaultOpenDoorForward; // 0x326
    char pad_327[0x1];
    float TimeToOpenDoor; // 0x328
    float TimeToKeepDoorOpen; // 0x32c
    float TimeToHoldDoorWhenInVolume; // 0x330
    float TimeToCloseDoor; // 0x334
    float BaseCharacterSpeed; // 0x338
    float BaseHingeDistanceRatio; // 0x33c
    float MinOpenSpeedMultiplier; // 0x340
    float MaxOpenSpeedMultiplier; // 0x344
    float MinDoorAngle; // 0x348
    float MaxDoorAngle; // 0x34c
    bool AllowNPCToPassThroughLockedDoor; // 0x350
    bool BlockNPCsIfLocked; // 0x351
    bool SlowPlayerInFrontOfDoor; // 0x352
    char pad_353[0x5];
    int64_t Expiry_Time; // 0x358
    bool ForceTickEnabled; // 0x360
    bool bNeverBlockNavGuide; // 0x361
    char pad_362[0x6];
    AAkAcousticPortal* AcousticPortal; // 0x368
    ARenderSettingsCustomBlendDomainVolume* RenderSettingsCustomBlendDomainVolumeAttached; // 0x370
    ALerpVolume* LerpVolumeAttached; // 0x378
    UAkAudioEvent* OpeningSound; // 0x380
    UAkAudioEvent* OpenedSound; // 0x388
    UAkAudioEvent* ClosingSound; // 0x390
    UAkAudioEvent* ClosedSound; // 0x398
    UAkAudioEvent* BellSound; // 0x3a0
    bool FrontCaresAboutStreaming; // 0x3a8
    bool BackCaresAboutStreaming; // 0x3a9
    bool FrontIsExterior; // 0x3aa
    bool BackIsExterior; // 0x3ab
    char pad_3ac[0x4];
    UCurveFloat* OpenCurve; // 0x3b0
    UCurveFloat* CloseCurve; // 0x3b8
    EDoorCurveAdjustment CloseDoorCurveAdjustment; // 0x3c0
    char pad_3c1[0x7];
    UStaticMeshComponent* DoorMesh; // 0x3c8
    UStaticMeshComponent* FrameMesh; // 0x3d0
    UOdcObstacleComponent* NavObstacle; // 0x3d8
    UArrowComponent* ForwardArrow; // 0x3e0
    UOdcObstacleComponent* ClosedDoorNavObstacle; // 0x3e8
    UDoorBoxComponent* EnterTrigger; // 0x3f0
    UDoorBoxComponent* ExitTrigger; // 0x3f8
    UDoorBoxComponent* PlayerNearTrigger; // 0x400
    UDoorBoxComponent* PlayerCollision; // 0x408
    UWidgetComponent* WidgetComponentSpinner; // 0x410
    char pad_418[0x10];
    UFastTravelForDoorsComponent* FastTravelComponent; // 0x428
    char pad_430[0x100];
    static ADoor* StaticClass();
    void SwingDoorFinished();
    void SetState(EDoorState DoorState, bool LockVisible, bool PlaySoundsAndEffects);
    void SetLockLevel(UObject* Caller, int32_t int);
    void SetKeepDoorOpen(bool InKeepDoorOpen);
    void RotateDoorToAlpha(float Alpha);
    void OpenDoor(bool KeepOpen, float SecondsToDelayClosing, bool bPushedOpen, EOpenDoorDirection Direction, bool AllowStreamingDoorsToKeepOpen);
    void OnPlayerNearTriggerBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* ActorInTrigger, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void OnEnterTriggerEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* ActorInTrigger, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void OnEnterTriggerBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* ActorInTrigger, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void ObjectPickedUp(UObject* Caller);
    void DestroyWidgetComponentSpinner();
    void CloseDoor(bool ForceClose);
    void BlockPlayer(bool ShouldBlock);
    void BlockOrUnblockDoor();
    void BlockNavMesh(bool ShouldBlock, EBlockNavMeshOverride Override);
}; // Size: 0x530
#pragma pack(pop)
