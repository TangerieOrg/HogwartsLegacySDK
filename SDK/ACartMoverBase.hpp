#pragma once
#include <cstdint>
#include "AWorldEventActor.hpp"
#include "FTimerHandle.hpp"
class UTimelineComponent;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
struct FCartSetup;
#pragma pack(push, 1)
class ACartMoverBase : public AWorldEventActor {
public:
    char pad_280[0x10];
    bool bCartStopping; // 0x290
    char pad_291[0x3];
    float TargetSpeed; // 0x294
    float InterpSpeed; // 0x298
    float SwingLimiter; // 0x29c
    float SwingAngle; // 0x2a0
    char pad_2a4[0x4];
    FTimerHandle RestartTimer; // 0x2a8
    UTimelineComponent* TailGateTimeline; // 0x2b0
    TArray<void*> SlowingSocialAgents; // 0x2b8
    TArray<void*> BlockingSocialAgents; // 0x2c8
    char pad_2d8[0x80];
    static ACartMoverBase* StaticClass();
    void SetMaxSpeed(float InMaxSpeed);
    void ResumeMovement();
    void PauseMovement();
    void OnStopBoxEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void OnStopBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void OnSlowDownBoxEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void OnSlowDownBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void OnDetectedEnemyDeath(AActor* EnemyAI);
    void MoveAlongSpline(FCartSetup& InCartSetup, float DeltaTime);
    bool IsCharacter(AActor* ObstructingActor);
    bool IsCartBlocking(AActor* ObstructingActor);
    bool HasStopped();
    bool HasReachedEndOfSpline();
    void BeginMovement(FCartSetup& InCartSetup, bool bStartFromBeginning);
}; // Size: 0x358
#pragma pack(pop)
