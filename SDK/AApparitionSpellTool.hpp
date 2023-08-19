#pragma once
#include <cstdint>
#include "AChannelingSpellTool.hpp"
#include "FApparitionLevelData.hpp"
class UClass;
class UParticleSystem;
class UAkAudioEvent;
class AActor;
#pragma pack(push, 1)
class AApparitionSpellTool : public AChannelingSpellTool {
public:
    bool bShowDebug; // 0x960
    char pad_961[0x7];
    TArray<FApparitionLevelData> LevelDataArray; // 0x968
    UClass* ApparitionActorClass; // 0x978
    UParticleSystem* TeleportFX; // 0x980
    bool bUseBulletTime; // 0x988
    char pad_989[0x3];
    float BulletTimeRate; // 0x98c
    UAkAudioEvent* TimeDilationSfx; // 0x990
    float DistanceFromObstruction; // 0x998
    float SweepSphereRadius; // 0x99c
    float SweepSegmentDistance; // 0x9a0
    float GroundSweepDistance; // 0x9a4
    AActor* ApparitionActor; // 0x9a8
    char pad_9b0[0x30];
    static AApparitionSpellTool* StaticClass();
    void TeleportNow();
    void SetDirection(float X, float Y);
}; // Size: 0x9e0
#pragma pack(pop)
