#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ETargetSpeedMode\Type.hpp"
#include "FVector.hpp"
class UPoseableMeshComponent;
class UCapsuleComponent;
class UBoxComponent;
class AAble_Character;
class UObjectStateInfo;
class UMaterialInstanceDynamic;
class ACharacter;
class UAmbulatory_MovementComponent;
class UPrimitiveComponent;
class USkeletalMeshComponent;
class ABiped_Character;
struct FHitResult;
#pragma pack(push, 1)
class ASpiderWeb_Spitter : public AActor {
public:
    bool bRegen; // 0x248
    char pad_249[0x3];
    float RegenTime; // 0x24c
    float MaxWebLength; // 0x250
    bool bAffectPawns; // 0x254
    ETargetSpeedMode::Type CharSpeedMode; // 0x255
    char pad_256[0x2];
    float WebLinearDamping; // 0x258
    float WebAngularDamping; // 0x25c
    bool bWebPushback; // 0x260
    char pad_261[0x3];
    float PushbackMaxForce; // 0x264
    float PushbackDistance; // 0x268
    bool bReactiveMaterials; // 0x26c
    char pad_26d[0x3];
    UCapsuleComponent* StickyTrig; // 0x270
    UBoxComponent* PushTrig; // 0x278
    UPoseableMeshComponent* WebMesh; // 0x280
    UPoseableMeshComponent* WebMesh2; // 0x288
    UObjectStateInfo* WebObjectState; // 0x290
    FVector WebEndLoc; // 0x298
    char pad_2a4[0x54];
    TArray<AAble_Character*> WebbedRagdolls; // 0x2f8
    char pad_308[0xa0];
    TArray<ACharacter*> NearbyCharacters; // 0x3a8
    TArray<UAmbulatory_MovementComponent*> CharMovementComps; // 0x3b8
    char pad_3c8[0x10];
    TArray<ACharacter*> CharsToRemove; // 0x3d8
    bool bFrozen; // 0x3e8
    bool bBroken; // 0x3e9
    char pad_3ea[0x6];
    UMaterialInstanceDynamic* InMatDynamic; // 0x3f0
    UMaterialInstanceDynamic* OutMatDynamic; // 0x3f8
    UPrimitiveComponent* PhysicsTarget; // 0x400
    USkeletalMeshComponent* SkeletalTarget; // 0x408
    FName SkeletalTargetBone; // 0x410
    float StickyTrigHalfHeight; // 0x418
    float PushbackExponent; // 0x41c
    char pad_420[0x28];
    static ASpiderWeb_Spitter* StaticClass();
    void WebThaw();
    void WebRegened();
    void WebFreeze();
    void WebDestroyed();
    void UnDamp(UPrimitiveComponent* PrimComp);
    void StartSkeletalMat(ABiped_Character* SkelActor);
    void StartPhysicsMat(UPrimitiveComponent* HitComp);
    void SkeletalMat();
    FVector SetWebEnd(bool i_Retract, bool i_Lerp, float i_Alpha);
    void SetMeshTick(bool i_Tick);
    void SetAIBlocker(bool i_block);
    void PushBack();
    void PhysicsMat();
    void PhysicsHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit);
    void OnStickyOverlapEnd(AActor* OtherActor, UPrimitiveComponent* OtherComp);
    void OnStickyOverlapBegin(AActor* OtherActor, UPrimitiveComponent* OtherComp);
    void OnPushOverlapEnd(AActor* OtherActor);
    void OnPushOverlapBegin(AActor* OtherActor);
    void InitOverlap();
    void CreatePhysicsConstraint(UPrimitiveComponent* PrimComp);
    void CreateBonePhysicsConstraint(USkeletalMeshComponent* skelComp, FName BoneName);
}; // Size: 0x448
#pragma pack(pop)
