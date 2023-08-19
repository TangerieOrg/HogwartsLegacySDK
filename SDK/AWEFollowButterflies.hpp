#pragma once
#include <cstdint>
#include "AWorldEventActor.hpp"
#include "FGameplayTagContainer.hpp"
class USphereComponent;
class USplineComponent;
class USlaveToSplineComponent;
class UBillboardComponent;
class UClass;
class AActor;
class AFlockingActor;
class UPrimitiveComponent;
struct FHitResult;
#pragma pack(push, 1)
class AWEFollowButterflies : public AWorldEventActor {
public:
    USplineComponent* ButterflySpline; // 0x280
    USphereComponent* OverlapSphere; // 0x288
    UBillboardComponent* Billboard; // 0x290
    char pad_298[0x8];
    TArray<USlaveToSplineComponent*> SlaveToSplines; // 0x2a0
    FGameplayTagContainer FBGameplayTag; // 0x2b0
    float ButterflyMoveSpeed; // 0x2d0
    char pad_2d4[0x3c];
    UClass* TreasureChestClass; // 0x310
    float TreasureChestYaw; // 0x318
    char pad_31c[0x4];
    UClass* FBDressingClass; // 0x320
    AActor* HiddenChest; // 0x328
    AWorldEventActor* EventDressing; // 0x330
    int32_t ButterfliesHideCount; // 0x338
    char pad_33c[0x4];
    TArray<AFlockingActor*> Butterflies; // 0x340
    AFlockingActor* StartButterflies; // 0x350
    char pad_358[0x58];
    static AWEFollowButterflies* StaticClass();
    void StartMovement();
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void HideButterflies(AFlockingActor* ButterflyFlock);
    void BindToChestOpenedEvent();
}; // Size: 0x3b0
#pragma pack(pop)
