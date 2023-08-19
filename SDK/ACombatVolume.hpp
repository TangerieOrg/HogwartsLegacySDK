#pragma once
#include <cstdint>
#include "ATargetPoint.hpp"
#include "FColor.hpp"
#include "FCustomButtonWidget.hpp"
class UCombatVolumeGroup;
class UBoxComponent;
class AActor;
class UCombatDOVCollection;
struct FHitResult;
class UPrimitiveComponent;
#pragma pack(push, 1)
class ACombatVolume : public ATargetPoint {
public:
    char pad_248[0x20];
    UCombatVolumeGroup* OwningGroup; // 0x268
    FColor WireColor; // 0x270
    bool bStartEncounterOnEnter; // 0x274
    char pad_275[0x3];
    float PlayerClearDistance; // 0x278
    char pad_27c[0x4];
    UBoxComponent* BoxComponent; // 0x280
    char pad_288[0xa0];
    FCustomButtonWidget VolumesRefreshButton; // 0x328
    UCombatDOVCollection* LinkedDOVCollection; // 0x358
    char pad_360[0x140];
    static ACombatVolume* StaticClass();
    void OnActorSpawnInFinished(AActor* SpawnedActor);
    void OnActorDeadEvent(AActor* DeadActor);
    UCombatVolumeGroup* GetGroup();
    void EndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
}; // Size: 0x4a0
#pragma pack(pop)
