#pragma once
#include <cstdint>
#include "AChannelingSpellTool.hpp"
#include "FAccioDampingSphere.hpp"
#include "FAccioLevelData.hpp"
#include "FVector.hpp"
class USpellToolRecord;
class UClass;
class AWingardiumBulletTimeSpellTool;
class AActor;
struct FHitResult;
#pragma pack(push, 1)
class AAccioSpellTool : public AChannelingSpellTool {
public:
    TArray<FAccioLevelData> LevelDataArray; // 0x960
    TArray<FAccioDampingSphere> DampingSpheres; // 0x970
    float AccioEndThreshold; // 0x980
    float AccioHoverDistance; // 0x984
    float AccioHoverHeight; // 0x988
    float AccioEndSpellTime; // 0x98c
    float SlidingDotMin; // 0x990
    float SlidingMinVel; // 0x994
    float AccioEndVelocityScale; // 0x998
    float FlyingBookPullVelocity; // 0x99c
    float FlyingBookHideDistance; // 0x9a0
    float FlyingBookSlowStartScale; // 0x9a4
    float MinDamageDealt; // 0x9a8
    float MaxDamageDealt; // 0x9ac
    float MinDamageDealtCharacter; // 0x9b0
    float MaxDamageDealtCharacter; // 0x9b4
    float MinDamageTaken; // 0x9b8
    float MaxDamageTaken; // 0x9bc
    float MinDamageTakenCharacter; // 0x9c0
    float MaxDamageTakenCharacter; // 0x9c4
    float AccioCharacterHoverDistance; // 0x9c8
    float AccioCharacterHoverHeight; // 0x9cc
    USpellToolRecord* WingardiumSpellToolRecord; // 0x9d0
    float ExtendedRange; // 0x9d8
    char pad_9dc[0x4];
    UClass* AOEMunition; // 0x9e0
    bool bSkipTriggerReaction; // 0x9e8
    char pad_9e9[0x3];
    float PullCharacterObjectVelocityMultiplier; // 0x9ec
    char pad_9f0[0x98];
    AWingardiumBulletTimeSpellTool* WingardiumSpellTool; // 0xa88
    char pad_a90[0x58];
    static AAccioSpellTool* StaticClass();
    static void StartAccioBall();
    void PullCharacter(FHitResult& HitResult);
    void OnActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit);
    static void EndAccioBall();
}; // Size: 0xae8
#pragma pack(pop)
