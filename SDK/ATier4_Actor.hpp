#pragma once
#include <cstdint>
#include "ACustomizableActor.hpp"
class UClass;
class UCapsuleComponent;
class AVisibilityMeshActor;
class AStation;
class UStaticMeshComponent;
class AActor;
#pragma pack(push, 1)
class ATier4_Actor : public ACustomizableActor {
public:
    char pad_360[0x38];
    UClass* AnimSharingSetup; // 0x398
    char pad_3a0[0x160];
    UCapsuleComponent* Collision; // 0x500
    char pad_508[0x90];
    AVisibilityMeshActor* VisibilityMesh; // 0x598
    char pad_5a0[0x10];
    static ATier4_Actor* StaticClass();
    bool TeleportToStation(AStation* InStation, int32_t InConnectionIndex);
    void SetManagedStackVisibilityMesh(UStaticMeshComponent* InVisibilityMesh);
    void OnCharacterLoadComplete(AActor* inTheActor);
    void OnBeginActorOverlap(AActor* SelfActor, AActor* OtherActor);
}; // Size: 0x5b0
#pragma pack(pop)
