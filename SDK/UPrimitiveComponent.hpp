#pragma once
#include <cstdint>
#include "ECanBeCharacterBase.hpp"
#include "ECollisionChannel.hpp"
#include "ECollisionEnabled\Type.hpp"
#include "ECollisionResponse.hpp"
#include "EDOFMode\Type.hpp"
#include "EHasCustomNavigableGeometry\Type.hpp"
#include "EIndirectLightingCacheQuality.hpp"
#include "ELightmapType.hpp"
#include "ERadialImpulseFalloff.hpp"
#include "ERendererStencilMask.hpp"
#include "ERuntimeVirtualTextureMainPassType.hpp"
#include "ESceneDepthPriorityGroup.hpp"
#include "EVisibilityGroupMask.hpp"
#include "FBodyInstance.hpp"
#include "FBox.hpp"
#include "FCustomPrimitiveData.hpp"
#include "FLightingChannels.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "FVector4.hpp"
#include "FWalkableSlopeOverride.hpp"
#include "USceneComponent.hpp"
class URuntimeVirtualTexture;
struct FHitResult;
class AActor;
class UClass;
class UPhysicalMaterial;
class UMaterialInterface;
class UMaterialInstanceDynamic;
class APawn;
#pragma pack(push, 1)
class UPrimitiveComponent : public USceneComponent {
public:
    EVisibilityGroupMask VisibilityGroup; // 0x220
    char pad_221[0x3];
    float MinDrawDistance; // 0x224
    float LDMaxDrawDistance; // 0x228
    float CachedMaxDrawDistance; // 0x22c
    ESceneDepthPriorityGroup DepthPriorityGroup; // 0x230
    ESceneDepthPriorityGroup ViewOwnerDepthPriorityGroup; // 0x231
    EIndirectLightingCacheQuality IndirectLightingCacheQuality; // 0x232
    ELightmapType LightmapType; // 0x233
    uint8_t bUseMaxLODAsImposter : 1; // 0x234
    uint8_t bBatchImpostersAsInstances : 1; // 0x234
    uint8_t bNeverDistanceCull : 1; // 0x234
    uint8_t pad_bitfield_234_3 : 4;
    uint8_t bAlwaysCreatePhysicsState : 1; // 0x234
    uint8_t bGenerateOverlapEvents : 1; // 0x235
    uint8_t bMovementOverlapQueries : 1; // 0x235
    uint8_t bMultiBodyOverlap : 1; // 0x235
    uint8_t bTraceComplexOnMove : 1; // 0x235
    uint8_t bReturnMaterialOnMove : 1; // 0x235
    uint8_t bUseViewOwnerDepthPriorityGroup : 1; // 0x235
    uint8_t bAllowCullDistanceVolume : 1; // 0x235
    uint8_t bHasMotionBlurVelocityMeshes : 1; // 0x235
    uint8_t bVisibleInReflectionCaptures : 1; // 0x236
    uint8_t bVisibleInRealTimeSkyCaptures : 1; // 0x236
    uint8_t bVisibleInRayTracing : 1; // 0x236
    uint8_t bVisibleInProbeVolumes : 1; // 0x236
    uint8_t bVisibleInProbeVolumesSecond : 1; // 0x236
    uint8_t bVisibleInBackfaceCapture : 1; // 0x236
    uint8_t bAlwaysInBackfaceCapture : 1; // 0x236
    uint8_t bHideForOutdoorCaptures : 1; // 0x236
    uint8_t bHideForIndoorCaptures : 1; // 0x237
    uint8_t bIgnoreLightLeakingCorrection : 1; // 0x237
    uint8_t bAlwaysVisibleInCapture : 1; // 0x237
    uint8_t bRenderInMainPass : 1; // 0x237
    uint8_t bRenderInDepthPass : 1; // 0x237
    uint8_t bReceivesDecals : 1; // 0x237
    uint8_t bReceivesWeatherDecals : 1; // 0x237
    uint8_t bOwnerNoSee : 1; // 0x237
    uint8_t bOnlyOwnerSee : 1; // 0x238
    uint8_t bTreatAsBackgroundForOcclusion : 1; // 0x238
    uint8_t bUseAsOccluder : 1; // 0x238
    uint8_t bIsRaytracingBigOccluder : 1; // 0x238
    uint8_t bSelectable : 1; // 0x238
    uint8_t bForceMipStreaming : 1; // 0x238
    uint8_t bHasPerInstanceHitProxies : 1; // 0x238
    uint8_t CastShadow : 1; // 0x238
    uint8_t bAffectDynamicIndirectLighting : 1; // 0x239
    uint8_t bAffectDistanceFieldLighting : 1; // 0x239
    uint8_t bCastDynamicShadow : 1; // 0x239
    uint8_t bCastStaticShadow : 1; // 0x239
    uint8_t bCastVolumetricTranslucentShadow : 1; // 0x239
    uint8_t bCastContactShadow : 1; // 0x239
    uint8_t bSelfShadowOnly : 1; // 0x239
    uint8_t bCastFarShadow : 1; // 0x239
    uint8_t bCastInsetShadow : 1; // 0x23a
    uint8_t bCastCinematicShadow : 1; // 0x23a
    uint8_t bCastHiddenShadow : 1; // 0x23a
    uint8_t bCastShadowAsTwoSided : 1; // 0x23a
    uint8_t bCastShadowAsBackfacedMinLOD : 1; // 0x23a
    uint8_t bCastDirectionalShadow : 1; // 0x23a
    uint8_t bLightAsIfStatic : 1; // 0x23a
    uint8_t bLightAttachmentsAsGroup : 1; // 0x23a
    uint8_t bExcludeFromLightAttachmentGroup : 1; // 0x23b
    uint8_t bReceiveMobileCSMShadows : 1; // 0x23b
    uint8_t bSingleSampleShadowFromStationaryLights : 1; // 0x23b
    uint8_t bIgnoreRadialImpulse : 1; // 0x23b
    uint8_t bIgnoreRadialForce : 1; // 0x23b
    uint8_t bApplyImpulseOnDamage : 1; // 0x23b
    uint8_t bReplicatePhysicsToAutonomousProxy : 1; // 0x23b
    uint8_t bFillCollisionUnderneathForNavmesh : 1; // 0x23b
    uint8_t AlwaysLoadOnClient : 1; // 0x23c
    uint8_t AlwaysLoadOnServer : 1; // 0x23c
    uint8_t bUseEditorCompositing : 1; // 0x23c
    uint8_t bRenderCustomDepth : 1; // 0x23c
    uint8_t bVisibleInSceneCaptureOnly : 1; // 0x23c
    uint8_t bHiddenInSceneCapture : 1; // 0x23c
    uint8_t pad_bitfield_23c_6 : 2;
    EHasCustomNavigableGeometry::Type bHasCustomNavigableGeometry; // 0x23d
    char pad_23e[0x1];
    ECanBeCharacterBase CanCharacterStepUpOn; // 0x23f
    FLightingChannels LightingChannels; // 0x240
    ERendererStencilMask CustomDepthStencilWriteMask; // 0x241
    char pad_242[0x2];
    int32_t CustomDepthStencilValue; // 0x244
    FCustomPrimitiveData CustomPrimitiveData; // 0x248
    FCustomPrimitiveData CustomPrimitiveDataInternal; // 0x258
    char pad_268[0x8];
    int32_t TranslucencySortPriority; // 0x270
    float TranslucencySortDistanceOffset; // 0x274
    int32_t VisibilityId; // 0x278
    char pad_27c[0x4];
    TArray<URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x280
    int8_t VirtualTextureLodBias; // 0x290
    int8_t VirtualTextureCullMips; // 0x291
    int8_t VirtualTextureMinCoverage; // 0x292
    ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x293
    char pad_294[0x8];
    float LpvBiasMultiplier; // 0x29c
    int32_t ShadowMinLOD; // 0x2a0
    char pad_2a4[0x8];
    float BoundsScale; // 0x2ac
    char pad_2b0[0x10];
    TArray<AActor*> MoveIgnoreActors; // 0x2c0
    TArray<UPrimitiveComponent*> MoveIgnoreComponents; // 0x2d0
    char pad_2e0[0x10];
    FBodyInstance BodyInstance; // 0x2f0
    char pad_448[0x28];
    UPrimitiveComponent* LODParentPrimitive; // 0x470
    uint8_t bwIsLightProbesCaptureBlocker : 1; // 0x478
    uint8_t pad_bitfield_478_1 : 7;
    char pad_479[0x3];
    bool bwAllowGPUCulling; // 0x47c
    char pad_47d[0x3];
    static UPrimitiveComponent* StaticClass();
    bool WasRecentlyRendered(float Tolerance);
    void WakeRigidBody(FName BoneName);
    void WakeAllRigidBodies();
    void SetWalkableSlopeOverride(FWalkableSlopeOverride& NewOverride);
    void SetVisibleInSceneCaptureOnly(bool bValue);
    void SetVisibleInProbesSecondBounce(bool bValue);
    void SetVisibleInProbesFirstBounce(bool bValue);
    void SetVisibleInBackfaceCapture(bool bValue);
    void SetUseCCD(bool InUseCCD, FName BoneName);
    void SetTranslucentSortPriority(int32_t NewTranslucentSortPriority);
    void SetTranslucencySortDistanceOffset(float NewTranslucencySortDistanceOffset);
    void SetSingleSampleShadowFromStationaryLights(bool bNewSingleSampleShadowFromStationaryLights);
    void SetSimulatePhysics(bool bSimulate);
    void SetRenderInMainPass(bool bValue);
    void SetRenderCustomDepth(bool bValue);
    void SetReceivesWeatherDecals(bool bNewReceivesWeatherDecals);
    void SetReceivesDecals(bool bNewReceivesDecals);
    void SetPhysMaterialOverride(UPhysicalMaterial* NewPhysMaterial);
    void SetPhysicsMaxAngularVelocityInRadians(float NewMaxAngVel, bool bAddToCurrent, FName BoneName);
    void SetPhysicsMaxAngularVelocityInDegrees(float NewMaxAngVel, bool bAddToCurrent, FName BoneName);
    void SetPhysicsMaxAngularVelocity(float NewMaxAngVel, bool bAddToCurrent, FName BoneName);
    void SetPhysicsLinearVelocity(FVector NewVel, bool bAddToCurrent, FName BoneName);
    void SetPhysicsAngularVelocityInRadians(FVector NewAngVel, bool bAddToCurrent, FName BoneName);
    void SetPhysicsAngularVelocityInDegrees(FVector NewAngVel, bool bAddToCurrent, FName BoneName);
    void SetPhysicsAngularVelocity(FVector NewAngVel, bool bAddToCurrent, FName BoneName);
    void SetOwnerNoSee(bool bNewOwnerNoSee);
    void SetOnlyOwnerSee(bool bNewOnlyOwnerSee);
    void SetNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision);
    void SetMaterialByName(FName MaterialSlotName, UMaterialInterface* Material);
    void SetMaterial(int32_t ElementIndex, UMaterialInterface* Material);
    void SetMassScale(FName BoneName, float InMassScale);
    void SetMassOverrideInKg(FName BoneName, float MassInKg, bool bOverrideMass);
    void SetLinearDamping(float InDamping);
    void SetLightingChannels(bool bChannel0, bool bChannel1, bool bChannel2);
    void SetLightAttachmentsAsGroup(bool bInLightAttachmentsAsGroup);
    void SetIsLightProbesBlocker(bool bValue);
    void SetHideForOutdoorCaptures(bool bValue);
    void SetHideForIndoorCaptures(bool bValue);
    void SetHiddenInSceneCapture(bool bValue);
    void SetGenerateOverlapEvents(bool bInGenerateOverlapEvents);
    void SetExcludeFromLightAttachmentGroup(bool bInExcludeFromLightAttachmentGroup);
    void SetEnableGravity(bool bGravityEnabled);
    void SetDefaultCustomPrimitiveDataVector4(int32_t DataIndex, FVector4 Value);
    void SetDefaultCustomPrimitiveDataVector3(int32_t DataIndex, FVector Value);
    void SetDefaultCustomPrimitiveDataVector2(int32_t DataIndex, FVector2D Value);
    void SetDefaultCustomPrimitiveDataFloat(int32_t DataIndex, float Value);
    void SetCustomPrimitiveDataVector4(int32_t DataIndex, FVector4 Value);
    void SetCustomPrimitiveDataVector3(int32_t DataIndex, FVector Value);
    void SetCustomPrimitiveDataVector2(int32_t DataIndex, FVector2D Value);
    void SetCustomPrimitiveDataFloat(int32_t DataIndex, float Value);
    void SetCustomDepthStencilWriteMask(ERendererStencilMask WriteMaskBit);
    void SetCustomDepthStencilValue(int32_t Value);
    void SetCullDistance(float NewCullDistance);
    void SetConstraintMode(EDOFMode::Type ConstraintMode);
    void SetCollisionResponseToChannel(ECollisionChannel Channel, ECollisionResponse NewResponse, bool bUpdateOverlaps);
    void SetCollisionResponseToAllChannels(ECollisionResponse NewResponse, bool bUpdateOverlaps);
    void SetCollisionProfileName(FName InCollisionProfileName, bool bUpdateOverlaps);
    void SetCollisionObjectType(ECollisionChannel Channel);
    void SetCollisionEnabled(ECollisionEnabled::Type NewType, bool bUpdateOverlaps);
    void SetCenterOfMass(FVector CenterOfMassOffset, FName BoneName);
    void SetCastShadow(bool NewCastShadow);
    void SetCastInsetShadow(bool bInCastInsetShadow);
    void SetCastHiddenShadow(bool NewCastHiddenShadow);
    void SetBoundsScale(float NewBoundsScale);
    void SetAngularDamping(float InDamping);
    void SetAlwaysVisibleInCapture(bool bValue);
    void SetAlwaysInBackfaceCapture(bool bValue);
    void SetAllUseCCD(bool InUseCCD);
    void SetAllPhysicsLinearVelocity(FVector NewVel, bool bAddToCurrent);
    void SetAllPhysicsAngularVelocityInRadians(FVector& NewAngVel, bool bAddToCurrent);
    void SetAllPhysicsAngularVelocityInDegrees(FVector& NewAngVel, bool bAddToCurrent);
    void SetAllMassScale(float InMassScale);
    FVector ScaleByMomentOfInertia(FVector InputVector, FName BoneName);
    void PutRigidBodyToSleep(FName BoneName);
    bool K2_SphereTraceComponent(FVector TraceStart, FVector TraceEnd, float SphereRadius, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, FVector& HitLocation, FVector& HitNormal, FName& BoneName, FHitResult& OutHit);
    bool K2_SphereOverlapComponent(FVector InSphereCentre, float InSphereRadius, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, FVector& HitLocation, FVector& HitNormal, FName& BoneName, FHitResult& OutHit);
    bool K2_LineTraceComponent(FVector TraceStart, FVector TraceEnd, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, FVector& HitLocation, FVector& HitNormal, FName& BoneName, FHitResult& OutHit);
    bool K2_IsQueryCollisionEnabled();
    bool K2_IsPhysicsCollisionEnabled();
    bool K2_IsCollisionEnabled();
    bool K2_BoxOverlapComponent(FVector InBoxCentre, FBox InBox, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, FVector& HitLocation, FVector& HitNormal, FName& BoneName, FHitResult& OutHit);
    bool IsOverlappingComponent(UPrimitiveComponent* OtherComp);
    bool IsOverlappingActor(AActor* Other);
    bool IsGravityEnabled();
    bool IsAnyRigidBodyAwake();
    void IgnoreComponentWhenMoving(UPrimitiveComponent* Component, bool bShouldIgnore);
    void IgnoreActorWhenMoving(AActor* Actor, bool bShouldIgnore);
    FWalkableSlopeOverride GetWalkableSlopeOverride();
    FVector GetPhysicsLinearVelocityAtPoint(FVector Point, FName BoneName);
    FVector GetPhysicsLinearVelocity(FName BoneName);
    FVector GetPhysicsAngularVelocityInRadians(FName BoneName);
    FVector GetPhysicsAngularVelocityInDegrees(FName BoneName);
    FVector GetPhysicsAngularVelocity(FName BoneName);
    void GetOverlappingComponents(TArray<UPrimitiveComponent*>& OutOverlappingComponents);
    void GetOverlappingActors(TArray<AActor*>& OverlappingActors, UClass* ClassFilter);
    int32_t GetNumMaterials();
    UMaterialInterface* GetMaterialFromCollisionFaceIndex(int32_t FaceIndex, int32_t& SectionIndex);
    UMaterialInterface* GetMaterial(int32_t ElementIndex);
    float GetMassScale(FName BoneName);
    float GetMass();
    float GetLinearDamping();
    FVector GetInertiaTensor(FName BoneName);
    bool GetGenerateOverlapEvents();
    ECollisionResponse GetCollisionResponseToChannel(ECollisionChannel Channel);
    FName GetCollisionProfileName();
    ECollisionChannel GetCollisionObjectType();
    ECollisionEnabled::Type GetCollisionEnabled();
    float GetClosestPointOnCollision(FVector& Point, FVector& OutPointOnBody, FName BoneName);
    FVector GetCenterOfMass(FName BoneName);
    float GetAngularDamping();
    UMaterialInstanceDynamic* CreateDynamicMaterialInstance(int32_t ElementIndex, UMaterialInterface* SourceMaterial, FName OptionalName);
    UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamicFromMaterial(int32_t ElementIndex, UMaterialInterface* Parent);
    UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamic(int32_t ElementIndex);
    TArray<UPrimitiveComponent*> CopyArrayOfMoveIgnoreComponents();
    TArray<AActor*> CopyArrayOfMoveIgnoreActors();
    void ClearMoveIgnoreComponents();
    void ClearMoveIgnoreActors();
    bool CanCharacterStepUp(APawn* Pawn);
    void AddTorqueInRadians(FVector Torque, FName BoneName, bool bAccelChange);
    void AddTorqueInDegrees(FVector Torque, FName BoneName, bool bAccelChange);
    void AddTorque(FVector Torque, FName BoneName, bool bAccelChange);
    void AddRadialImpulse(FVector Origin, float Radius, float Strength, ERadialImpulseFalloff Falloff, bool bVelChange);
    void AddRadialForce(FVector Origin, float Radius, float Strength, ERadialImpulseFalloff Falloff, bool bAccelChange);
    void AddImpulseAtLocation(FVector Impulse, FVector Location, FName BoneName);
    void AddImpulse(FVector Impulse, FName BoneName, bool bVelChange);
    void AddForceAtLocationLocal(FVector Force, FVector Location, FName BoneName);
    void AddForceAtLocation(FVector Force, FVector Location, FName BoneName);
    void AddForce(FVector Force, FName BoneName, bool bAccelChange);
    void AddAngularImpulseInRadians(FVector Impulse, FName BoneName, bool bVelChange);
    void AddAngularImpulseInDegrees(FVector Impulse, FName BoneName, bool bVelChange);
    void AddAngularImpulse(FVector Impulse, FName BoneName, bool bVelChange);
}; // Size: 0x480
#pragma pack(pop)
