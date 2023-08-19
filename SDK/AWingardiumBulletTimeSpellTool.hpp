#pragma once
#include <cstdint>
#include "AChannelingSpellTool.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "FVector.hpp"
class UClass;
class UMultiFX2_Base;
class AActor;
class UPrimitiveComponent;
struct FHitResult;
class UParticleSystemComponent;
#pragma pack(push, 1)
class AWingardiumBulletTimeSpellTool : public AChannelingSpellTool {
public:
    UClass* WingardiumComponent; // 0x960
    TArray<UMultiFX2_Base*> ObjectTrailFX2; // 0x968
    TArray<UMultiFX2_Base*> GroundBeamFX2; // 0x978
    TArray<UMultiFX2_Base*> GroundFX2; // 0x988
    float MassLimit; // 0x998
    float TapZVelocity; // 0x99c
    float ImpulseScale; // 0x9a0
    float AngularImpulseScale; // 0x9a4
    float MaxImpulse; // 0x9a8
    float MaxVelocity; // 0x9ac
    float WingardiumLinearDamping; // 0x9b0
    float WingardiumAngularDamping; // 0x9b4
    float CharacterImpulseScale; // 0x9b8
    float CharacterAngularImpulseScale; // 0x9bc
    float CharacterMaxImpulse; // 0x9c0
    float CharacterMaxVelocity; // 0x9c4
    float CharacterLinearDamping; // 0x9c8
    float CharacterAngularDamping; // 0x9cc
    float WingardiumDistanceSpeed; // 0x9d0
    float WingardiumRotationSpeed; // 0x9d4
    float WingardiumHeightSpeed; // 0x9d8
    float WingardiumMinDistance; // 0x9dc
    float WingardiumMaxDistance; // 0x9e0
    float WingardiumMinHeight; // 0x9e4
    float WingardiumMaxHeight; // 0x9e8
    float RiseTime; // 0x9ec
    float CameraAdjustValue; // 0x9f0
    char pad_9f4[0x4];
    FRuntimeFloatCurve FloatHeightOverCameraPitch; // 0x9f8
    float RiseHeight; // 0xa80
    float RiseRate; // 0xa84
    float VelocityToTorqueScale; // 0xa88
    bool bZeroInitialOrientation; // 0xa8c
    bool bRoundInitialOrientationTo90; // 0xa8d
    bool bRoundReleaseOrientationTo90; // 0xa8e
    bool bForcePositionRotation; // 0xa8f
    float HoldAtEndTime; // 0xa90
    float DisableCharacterCollisionTime; // 0xa94
    float DownImpulseScale; // 0xa98
    float MinDamageDealt; // 0xa9c
    float MaxDamageDealt; // 0xaa0
    float MinDamageDealtCharacter; // 0xaa4
    float MaxDamageDealtCharacter; // 0xaa8
    float MinDamageTaken; // 0xaac
    float MaxDamageTaken; // 0xab0
    float MinDamageTakenCharacter; // 0xab4
    float MaxDamageTakenCharacter; // 0xab8
    float DropMinDamageDealt; // 0xabc
    float DropMaxDamageDealt; // 0xac0
    float DropMinDamageDealtCharacter; // 0xac4
    float DropMaxDamageDealtCharacter; // 0xac8
    float DropMinDamageTaken; // 0xacc
    float DropMaxDamageTaken; // 0xad0
    float DropMinDamageTakenCharacter; // 0xad4
    float DropMaxDamageTakenCharacter; // 0xad8
    char pad_adc[0x4];
    TArray<AActor*> IgnoreActors; // 0xae0
    UPrimitiveComponent* ActivePrimComponent; // 0xaf0
    char pad_af8[0xf0];
    static AWingardiumBulletTimeSpellTool* StaticClass();
    void OnComponentOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void OnActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit);
    void OnActorEndPlay(AActor* DestroyedActor, EEndPlayReason::Type EndPlayReason);
    void BeamFadeOut(UParticleSystemComponent* BeamEmitter);
    void BeamFadeIn(UParticleSystemComponent* BeamEmitter);
    void AdjustWingardiumRotation(FVector InDirection);
    void AdjustWingardiumHeight(float Adjust);
    void AdjustWingardiumDistance(float Adjust);
}; // Size: 0xbe8
#pragma pack(pop)
