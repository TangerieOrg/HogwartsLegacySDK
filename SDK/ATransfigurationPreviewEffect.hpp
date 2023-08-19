#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
class ATransfigurationPreviewEffect : public AActor {
public:
    bool CanPlaceObject; // 0x248
    char pad_249[0x7];
    AActor* TargetActor; // 0x250
    AActor* TargetActorCopy; // 0x258
    FVector ObjectExtent; // 0x260
    FVector ObjectCenter; // 0x26c
    char pad_278[0x10];
    static ATransfigurationPreviewEffect* StaticClass();
    void TickVFX(float DeltaSeconds);
    void OnTargetActorDestroyed(AActor* InDestroyedActor);
    void BeginVFX();
}; // Size: 0x288
#pragma pack(pop)
