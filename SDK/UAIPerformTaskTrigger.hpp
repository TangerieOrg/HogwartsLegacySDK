#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UAIPerformTaskBase.hpp"
class USphereComponent;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#pragma pack(push, 1)
class UAIPerformTaskTrigger : public UAIPerformTaskBase {
public:
    char pad_e0[0x8];
    USphereComponent* WaitTrigger; // 0xe8
    bool bOrientToPlayer; // 0xf0
    char pad_f1[0xf];
    static UAIPerformTaskTrigger* StaticClass();
    void OnWaitTriggerOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
}; // Size: 0x100
#pragma pack(pop)
