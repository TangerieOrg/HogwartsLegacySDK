#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#pragma pack(push, 1)
class UAblCustomEventFiredOnMeshOverlapScratchpad : public UAblAbilityTaskScratchPad {
public:
    char pad_28[0x60];
    static UAblCustomEventFiredOnMeshOverlapScratchpad* StaticClass();
    void HandleOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
}; // Size: 0x88
#pragma pack(pop)
