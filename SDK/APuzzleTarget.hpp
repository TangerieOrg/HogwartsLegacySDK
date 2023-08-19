#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FVector.hpp"
class UBoxComponent;
class UBillboardComponent;
class UClass;
class UPrimitiveComponent;
struct FHitResult;
#pragma pack(push, 1)
class APuzzleTarget : public AActor {
public:
    char pad_248[0x8];
    UBoxComponent* VolumeComponent; // 0x250
    UBillboardComponent* TargetComponent; // 0x258
    bool bCanComplete; // 0x260
    char pad_261[0x3];
    int32_t NumActorsToComplete; // 0x264
    float MoveSpeed; // 0x268
    float RotationSpeed; // 0x26c
    float MarginOfError; // 0x270
    bool bStopMovingWhenFinished; // 0x274
    bool bSnapToTarget; // 0x275
    bool bRotateToTarget; // 0x276
    bool bCancelMomentum; // 0x277
    TArray<UClass*> ActorTypes; // 0x278
    TArray<AActor*> ActorList; // 0x288
    TArray<UClass*> TerminatePreviousEffects; // 0x298
    bool bCancelSpellsOnTargetReached; // 0x2a8
    bool bOneAtATime; // 0x2a9
    char pad_2aa[0x26];
    TArray<AActor*> MovingActors; // 0x2d0
    TArray<AActor*> TargetActors; // 0x2e0
    bool bMoving; // 0x2f0
    bool bDoOnce; // 0x2f1
    char pad_2f2[0x6];
    TArray<bool> MovingDestReached; // 0x2f8
    TArray<bool> MovingRotReached; // 0x308
    static APuzzleTarget* StaticClass();
    void StartMove(AActor* OtherActor);
    void OnTargetReached__DelegateSignature(AActor* newActor);
    void OnTargetFinished__DelegateSignature();
    void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    FVector GetNewVelocity(UPrimitiveComponent* PrimComp);
}; // Size: 0x318
#pragma pack(pop)
