#pragma once
#include <cstdint>
#include "AChannelingSpellTool.hpp"
#include "EObjectSizeClass.hpp"
#include "FOppugnoLevelData.hpp"
#include "FVector.hpp"
class UCurveFloat;
class UClass;
class UMultiFX2_Base;
class UAkAudioEvent;
struct FHitResult;
class AMunitionType_Base;
class AActor;
struct FMunitionImpactData;
class UPrimitiveComponent;
#pragma pack(push, 1)
class AOppugnoSpellTool : public AChannelingSpellTool {
public:
    TArray<FOppugnoLevelData> LevelDataArray; // 0x960
    float TargetIdentifyRadius; // 0x970
    float OppugnoAngularDamping; // 0x974
    float OppugnoLinearDamping; // 0x978
    float ClearActorTagAfterThrowTime; // 0x97c
    TArray<UClass*> ActorsToSpawn; // 0x980
    TArray<UMultiFX2_Base*> SpawnFX2; // 0x990
    float AdjustTargetHeight; // 0x9a0
    float RagdollImpulseScale; // 0x9a4
    float DisableCharacterCollisionTime; // 0x9a8
    char pad_9ac[0x4];
    TArray<FVector> ObjectOffsetArray; // 0x9b0
    FVector HoldTorque; // 0x9c0
    float MinimumHoldTorque; // 0x9cc
    TArray<UMultiFX2_Base*> PullFX2; // 0x9d0
    UAkAudioEvent* PullMotionFX; // 0x9e0
    TArray<UMultiFX2_Base*> HoldFX2; // 0x9e8
    TArray<UMultiFX2_Base*> ThrowFX2; // 0x9f8
    UAkAudioEvent* ThrowMotionFX; // 0xa08
    TArray<UMultiFX2_Base*> ImpactFX2; // 0xa10
    UCurveFloat* ThrowTimeDilationCurve; // 0xa20
    bool bReplacePhysicsObjectWithMunitionOnThrow; // 0xa28
    char pad_a29[0x7];
    UClass* MunitionToSpawn; // 0xa30
    float MinDamageDealt; // 0xa38
    float MaxDamageDealt; // 0xa3c
    float MinDamageDealtCharacter; // 0xa40
    float MaxDamageDealtCharacter; // 0xa44
    float MinDamageTaken; // 0xa48
    float MaxDamageTaken; // 0xa4c
    float MinDamageTakenCharacter; // 0xa50
    float MaxDamageTakenCharacter; // 0xa54
    float InterpPositionSpeed; // 0xa58
    float InterpRotationSpeed; // 0xa5c
    EObjectSizeClass MaximumCharacterSize; // 0xa60
    char pad_a61[0x7];
    TArray<AActor*> IgnoreActors; // 0xa68
    AActor* AttachedActor; // 0xa78
    TArray<UPrimitiveComponent*> RestorePullCollisionPrim; // 0xa80
    char pad_a90[0x1c0];
    static AOppugnoSpellTool* StaticClass();
    void TriggerOnOppugnoImpact(AActor* InSrcActor, AActor* InTargetActor);
    void SetThrowTarget(FVector InLocation);
    void OnOppugnoMunitionImpact(AMunitionType_Base* MunitionInstance, FMunitionImpactData& MunitionImpactData);
    void OnActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit);
}; // Size: 0xc50
#pragma pack(pop)
