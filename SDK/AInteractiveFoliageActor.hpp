#pragma once
#include <cstdint>
#include "AStaticMeshActor.hpp"
#include "FVector.hpp"
class UCapsuleComponent;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#pragma pack(push, 1)
class AInteractiveFoliageActor : public AStaticMeshActor {
public:
    UCapsuleComponent* CapsuleComponent; // 0x258
    FVector TouchingActorEntryPosition; // 0x260
    FVector FoliageVelocity; // 0x26c
    FVector FoliageForce; // 0x278
    FVector FoliagePosition; // 0x284
    float FoliageDamageImpulseScale; // 0x290
    float FoliageTouchImpulseScale; // 0x294
    float FoliageStiffness; // 0x298
    float FoliageStiffnessQuadratic; // 0x29c
    float FoliageDamping; // 0x2a0
    float MaxDamageImpulse; // 0x2a4
    float MaxTouchImpulse; // 0x2a8
    float MaxForce; // 0x2ac
    float Mass; // 0x2b0
    char pad_2b4[0x4];
    static AInteractiveFoliageActor* StaticClass();
    void CapsuleTouched(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& OverlapInfo);
}; // Size: 0x2b8
#pragma pack(pop)
