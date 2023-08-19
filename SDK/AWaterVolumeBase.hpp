#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ETargetSpeedMode\Type.hpp"
#include "EWaterVfx.hpp"
#include "FBoxSphereBounds.hpp"
#include "FMultiFX2Handle.hpp"
#include "FVector.hpp"
class URagdollControlComponent;
class UBoxComponent;
class UWaterInteractionComponent;
class ACharacter;
class UStaticMeshComponent;
class UPhoenixPhysicalMaterial;
class ARiverVolume;
class UPrimitiveComponent;
class UAmbulatory_MovementComponent;
class UObjectStateInfo;
struct FHitResult;
#pragma pack(push, 1)
class AWaterVolumeBase : public AActor {
public:
    UBoxComponent* WaterBox; // 0x248
    UStaticMeshComponent* DeepCollision; // 0x250
    UStaticMeshComponent* ShallowCollision; // 0x258
    bool bDisableFunctionality; // 0x260
    char pad_261[0x3];
    float PhysicsVolumeFluidFriction; // 0x264
    UPhoenixPhysicalMaterial* WaterPhysMat; // 0x268
    UPhoenixPhysicalMaterial* PuddlePhysMat; // 0x270
    TArray<AActor*> OverlapIgnores; // 0x278
    TArray<AActor*> WaterIgnoreActors; // 0x288
    TArray<AWaterVolumeBase*> OverlappingWaterVolumes; // 0x298
    TArray<ARiverVolume*> OverlappingRiverVolumes; // 0x2a8
    float WaterHeight; // 0x2b8
    float MinWaterHeight; // 0x2bc
    float ForcePercent; // 0x2c0
    char pad_2c4[0x4];
    TArray<AActor*> BuoyancyActors; // 0x2c8
    TArray<FVector> BuoyancyForces; // 0x2d8
    TArray<UPrimitiveComponent*> BuoyancyMeshes; // 0x2e8
    TArray<float> BuoyancyMasses; // 0x2f8
    TArray<bool> MeshInWater; // 0x308
    TArray<AActor*> MeshUnderwater; // 0x318
    TArray<URagdollControlComponent*> ObjectRagdollComps; // 0x328
    TArray<AActor*> ToBeRemoved; // 0x338
    TArray<ACharacter*> OverlappingCharacters; // 0x348
    TArray<UAmbulatory_MovementComponent*> CharacterMovementComps; // 0x358
    TArray_ETargetSpeedMode::Type> CharSpeedModes; // 0x368
    TArray<URagdollControlComponent*> CharacterRagdollComps; // 0x378
    TArray<UWaterInteractionComponent*> CharacterWICs; // 0x388
    TArray<bool> CharInWater; // 0x398
    char pad_3a8[0x10];
    TArray<ACharacter*> RemoveChars; // 0x3b8
    TArray<ACharacter*> TransferringChars; // 0x3c8
    TArray<ACharacter*> KillInWaterChars; // 0x3d8
    TArray<UWaterInteractionComponent*> KIW_WICs; // 0x3e8
    TArray<bool> KIWInWater; // 0x3f8
    TArray<ACharacter*> RemoveKIWChars; // 0x408
    TArray<AActor*> FloatVFXActors; // 0x418
    TArray<AActor*> FloatVFXTransfers; // 0x428
    TArray<AActor*> IgnoreEnterWaterVFX; // 0x438
    TArray<FMultiFX2Handle> FloatVFXHandles; // 0x448
    char pad_458[0x58];
    static AWaterVolumeBase* StaticClass();
    void UnDamp(UPrimitiveComponent* Mesh, UObjectStateInfo* ObjectState);
    void SplashVFX(bool i_Char, EWaterVfx i_vfx, AActor* curActor, UPrimitiveComponent* PrimComp, float waterZ, FVector waterNorm, bool bShallow);
    void SetupObject(AActor* Actor, UPrimitiveComponent* Mesh, UObjectStateInfo* ObjectState, bool bShouldFloat, bool bSkipIgnore, bool bOverlappingLakeSphere, URagdollControlComponent* RagdollComp);
    void SetupCharacter(ACharacter* Character, UObjectStateInfo* ObjectState, URagdollControlComponent* RagdollComp, bool bSkipIgnore, bool bOverlappingLakeSphere);
    void RemoveVFX(EWaterVfx i_vfx, AActor* curActor);
    bool RemoveActors();
    void OnRagdollRecoveredInWater(URagdollControlComponent* RagdollControlComponent);
    void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    FBoxSphereBounds GetBounds(UPrimitiveComponent* Mesh);
    void ExplosionVFX(AActor* curActor, UPrimitiveComponent* PrimComp, FVector Location, bool inWater, float InForce, float Radius, float Falloff);
    void Damp(UPrimitiveComponent* Mesh, UObjectStateInfo* ObjectState);
    void CalcForce(AActor* Actor, UPrimitiveComponent* Mesh, float i_Mass, bool bEmplace, URagdollControlComponent* RagdollComp);
}; // Size: 0x4b0
#pragma pack(pop)
