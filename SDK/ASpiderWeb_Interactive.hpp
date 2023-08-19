#pragma once
#include <cstdint>
#include "AWorldObject.hpp"
#include "ETargetSpeedMode\Type.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class UObjectStateInfo;
class AAble_Character;
class UPrimitiveComponent;
class UMaterialInstanceDynamic;
class ACharacter;
class UAmbulatory_MovementComponent;
class AActor;
class USkeletalMeshComponent;
class USphereComponent;
class ABiped_Character;
struct FHitResult;
#pragma pack(push, 1)
class ASpiderWeb_Interactive : public AWorldObject {
public:
    ETargetSpeedMode::Type CharSpeedMode; // 0x2b0
    char pad_2b1[0x3];
    float WebLinearDamping; // 0x2b4
    float WebAngularDamping; // 0x2b8
    bool bReactiveMaterials; // 0x2bc
    bool bDebugBurnSphere; // 0x2bd
    char pad_2be[0x2];
    float PercentageDisableCollision; // 0x2c0
    char pad_2c4[0x4];
    TArray<UPrimitiveComponent*> WebbedComponents; // 0x2c8
    TArray<AAble_Character*> WebbedRagdolls; // 0x2d8
    char pad_2e8[0xa0];
    TArray<ACharacter*> NearbyCharacters; // 0x388
    TArray<UAmbulatory_MovementComponent*> CharMovementComps; // 0x398
    char pad_3a8[0x10];
    TArray<ACharacter*> CharsToRemove; // 0x3b8
    TArray<AActor*> BurnActors; // 0x3c8
    bool bFrozen; // 0x3d8
    char pad_3d9[0x7];
    UMaterialInstanceDynamic* InMatDynamic; // 0x3e0
    UMaterialInstanceDynamic* OutMatDynamic; // 0x3e8
    UPrimitiveComponent* PhysicsTarget; // 0x3f0
    USkeletalMeshComponent* SkeletalTarget; // 0x3f8
    FName SkeletalTargetBone; // 0x400
    float BurnRate; // 0x408
    char pad_40c[0x4];
    UPrimitiveComponent* RootComp; // 0x410
    UObjectStateInfo* WebObjectState; // 0x418
    USphereComponent* BurnSphere; // 0x420
    float BurnDist; // 0x428
    float BurnDistNeeded; // 0x42c
    FVector BurnOrigin; // 0x430
    char pad_43c[0x4];
    TArray<AActor*> IgnoreBurnActors; // 0x440
    char pad_450[0x20];
    static ASpiderWeb_Interactive* StaticClass();
    void WebThaw();
    void WebFreeze();
    void WebBurn(FVector burnLoc);
    void WakeCompBody(UPrimitiveComponent* PrimComp);
    void UnDamp(UPrimitiveComponent* PrimComp);
    void StartSkeletalMat(ABiped_Character* SkelActor);
    void StartPhysicsMat(UPrimitiveComponent* HitComp);
    void SkeletalMat();
    void PhysicsMat();
    void PhysicsHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit);
    void OnWebOverlapEnd(AActor* OtherActor, UPrimitiveComponent* OtherComp);
    void OnWebOverlapBegin(AActor* OtherActor, UPrimitiveComponent* OtherComp);
    void OnFullyCharred(bool bCharred);
    void OnFireOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void OnFireOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void InitFireOverlap();
    FTransform GetRelativeTransform(UPrimitiveComponent* PrimComp, FVector FireLocation);
    FVector GetCollisionScale();
    void DestroyWeb();
    void CreatePhysicsConstraint(UPrimitiveComponent* PrimComp);
    void CreateBonePhysicsConstraint(USkeletalMeshComponent* skelComp, FName BoneName);
}; // Size: 0x470
#pragma pack(pop)
