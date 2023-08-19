#pragma once
#include <cstdint>
#include "EEndPlayReason\Type.hpp"
#include "UBoxComponent.hpp"
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#pragma pack(push, 1)
class UInteractionZoneComponent : public UBoxComponent {
public:
    char pad_4b0[0x20];
    static UInteractionZoneComponent* StaticClass();
    void OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void OnActorEndPlay(AActor* DestroyedActor, EEndPlayReason::Type EndPlayReason);
}; // Size: 0x4d0
#pragma pack(pop)
