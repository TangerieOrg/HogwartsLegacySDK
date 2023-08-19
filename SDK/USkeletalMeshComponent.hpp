#pragma once
#include <cstdint>
#include "EAnimationMode\Type.hpp"
#include "ECustomBoneAttributeLookup.hpp"
#include "EKinematicBonesUpdateToPhysics\Type.hpp"
#include "EPhysicsTransformUpdateMode\Type.hpp"
#include "ETeleportType.hpp"
#include "FSingleAnimationPlayData.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "USkinnedMeshComponent.hpp"
class UAnimBlueprintGeneratedClass;
class UClothingSimulationInteractor;
class UClass;
struct FPoseSnapshot;
class UAnimInstance;
class UBodySetup;
class UAnimationAsset;
#pragma pack(push, 1)
class USkeletalMeshComponent : public USkinnedMeshComponent {
public:
    UAnimBlueprintGeneratedClass* AnimBlueprintGeneratedClass; // 0x6d0
    UClass* AnimClass; // 0x6d8
    UAnimInstance* AnimScriptInstance; // 0x6e0
    UAnimInstance* PostProcessAnimInstance; // 0x6e8
    bool bInitializeAnimationWithRefPose; // 0x6f0
    char pad_6f1[0x7];
    FSingleAnimationPlayData AnimationData; // 0x6f8
    char pad_710[0x10];
    FVector RootBoneTranslation; // 0x720
    FVector LineCheckBoundsScale; // 0x72c
    char pad_738[0x30];
    TArray<UAnimInstance*> LinkedInstances; // 0x768
    TArray<FTransform> CachedBoneSpaceTransforms; // 0x778
    TArray<FTransform> CachedComponentSpaceTransforms; // 0x788
    char pad_798[0x150];
    float GlobalAnimRateScale; // 0x8e8
    EKinematicBonesUpdateToPhysics::Type KinematicBonesUpdateType; // 0x8ec
    EPhysicsTransformUpdateMode::Type PhysicsTransformUpdateMode; // 0x8ed
    char pad_8ee[0x1];
    EAnimationMode::Type AnimationMode; // 0x8ef
    char pad_8f0[0x1];
    uint8_t bDisablePostProcessBlueprint : 1; // 0x8f1
    uint8_t pad_bitfield_8f1_1 : 1;
    uint8_t bUpdateOverlapsOnAnimationFinalize : 1; // 0x8f1
    uint8_t pad_bitfield_8f1_3 : 1;
    uint8_t bHasValidBodies : 1; // 0x8f1
    uint8_t bBlendPhysics : 1; // 0x8f1
    uint8_t bEnablePhysicsOnDedicatedServer : 1; // 0x8f1
    uint8_t bUpdateJointsFromAnimation : 1; // 0x8f1
    uint8_t bAllowClothActors : 1; // 0x8f2
    uint8_t bDisableClothSimulation : 1; // 0x8f2
    uint8_t pad_bitfield_8f2_2 : 6;
    char pad_8f3[0x5];
    uint8_t bDisableRigidBodyAnimNode : 1; // 0x8f8
    uint8_t bAllowAnimCurveEvaluation : 1; // 0x8f8
    uint8_t bDisableAnimCurves : 1; // 0x8f8
    uint8_t pad_bitfield_8f8_3 : 5;
    uint8_t bCanSkipChildUpdateTransforms : 1; // 0x8f9
    uint8_t bCollideWithEnvironment : 1; // 0x8f9
    uint8_t bCollideWithAttachedChildren : 1; // 0x8f9
    uint8_t bForceCollisionUpdate : 1; // 0x8f9
    uint8_t bLocalSpaceSimulation : 1; // 0x8f9
    uint8_t bResetAfterTeleport : 1; // 0x8f9
    uint8_t pad_bitfield_8f9_6 : 1;
    uint8_t bDeferKinematicBoneUpdate : 1; // 0x8f9
    uint8_t bNoSkeletonUpdate : 1; // 0x8fa
    uint8_t bPauseAnims : 1; // 0x8fa
    uint8_t bUseRefPoseOnInitAnim : 1; // 0x8fa
    uint8_t bEnablePerPolyCollision : 1; // 0x8fa
    uint8_t bForceRefpose : 1; // 0x8fa
    uint8_t bOnlyAllowAutonomousTickPose : 1; // 0x8fa
    uint8_t bIsAutonomousTickPose : 1; // 0x8fa
    uint8_t bOldForceRefPose : 1; // 0x8fa
    uint8_t bShowPrePhysBones : 1; // 0x8fb
    uint8_t bRequiredBonesUpToDate : 1; // 0x8fb
    uint8_t bAnimTreeInitialised : 1; // 0x8fb
    uint8_t bIncludeComponentLocationIntoBounds : 1; // 0x8fb
    uint8_t bEnableLineCheckWithBounds : 1; // 0x8fb
    uint8_t bPropagateCurvesToSlaves : 1; // 0x8fb
    uint8_t bSkipKinematicUpdateWhenInterpolating : 1; // 0x8fb
    uint8_t bSkipBoundsUpdateWhenInterpolating : 1; // 0x8fb
    uint8_t bWantsMaterialCurvesPushedToMaterials : 1; // 0x8fc
    uint8_t pad_bitfield_8fc_1 : 2;
    uint8_t bNeedsQueuedAnimEventsDispatched : 1; // 0x8fc
    uint8_t pad_bitfield_8fc_4 : 4;
    char pad_8fd[0x1];
    uint16_t CachedAnimCurveUidVersion; // 0x8fe
    float ClothBlendWeight; // 0x900
    bool bWaitForParallelClothTask; // 0x904
    char pad_905[0x3];
    TArray<FName> DisallowedAnimCurves; // 0x908
    UBodySetup* BodySetup; // 0x918
    char pad_920[0x4];
    float ClothMaxDistanceScale; // 0x924
    char pad_928[0x10];
    UClass* ClothingSimulationFactory; // 0x938
    char pad_940[0xe0];
    float TeleportDistanceThreshold; // 0xa20
    float TeleportRotationThreshold; // 0xa24
    char pad_a28[0x8];
    uint32_t LastPoseTickFrame; // 0xa30
    char pad_a34[0x5c];
    UClothingSimulationInteractor* ClothingInteractor; // 0xa90
    char pad_a98[0x498];
    static USkeletalMeshComponent* StaticClass();
    void UnlinkAnimClassLayers(UClass* InClass);
    void UnbindClothFromMasterPoseComponent(bool bRestoreSimulationSpace);
    void ToggleDisablePostProcessBlueprint();
    void TermBodiesBelow(FName ParentBoneName);
    void SuspendClothingSimulation();
    void Stop();
    void SnapshotPose(FPoseSnapshot& Snapshot);
    void SetUpdateClothInEditor(bool NewUpdateState);
    void SetUpdateAnimationInEditor(bool NewUpdateState);
    void SetTeleportRotationThreshold(float Threshold);
    void SetTeleportDistanceThreshold(float Threshold);
    void SetPosition(float InPos, bool bFireNotifies);
    void SetPlayRate(float Rate);
    void SetPhysicsBlendWeight(float PhysicsBlendWeight);
    void SetNotifyRigidBodyCollisionBelow(bool bNewNotifyRigidBodyCollision, FName BoneName, bool bIncludeSelf);
    void SetMorphTarget(FName MorphTargetName, float Value, bool bRemoveZeroWeight);
    void SetEnablePhysicsBlending(bool bNewBlendPhysics);
    void SetEnableGravityOnAllBodiesBelow(bool bEnableGravity, FName BoneName, bool bIncludeSelf);
    void SetEnableBodyGravity(bool bEnableGravity, FName BoneName);
    void SetDisablePostProcessBlueprint(bool bInDisablePostProcess);
    void SetDisableAnimCurves(bool bInDisableAnimCurves);
    void SetConstraintProfileForAll(FName ProfileName, bool bDefaultIfNotFound);
    void SetConstraintProfile(FName JointName, FName ProfileName, bool bDefaultIfNotFound);
    void SetClothMaxDistanceScale(float Scale);
    void SetBodyNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision, FName BoneName);
    void SetAnimClass(UClass* NewClass);
    void SetAnimationMode(EAnimationMode::Type InAnimationMode);
    void SetAnimation(UAnimationAsset* NewAnimToPlay);
    void SetAngularLimits(FName InBoneName, float Swing1LimitAngle, float TwistLimitAngle, float Swing2LimitAngle);
    void SetAllowRigidBodyAnimNode(bool bInAllow, bool bReinitAnim);
    void SetAllowedAnimCurvesEvaluation(TArray<FName>& List, bool bAllow);
    void SetAllowClothActors(bool bInAllow);
    void SetAllowAnimCurveEvaluation(bool bInAllow);
    void SetAllMotorsAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType);
    void SetAllMotorsAngularPositionDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType);
    void SetAllMotorsAngularDriveParams(float InSpring, float InDamping, float InForceLimit, bool bSkipCustomPhysicsType);
    void SetAllBodiesSimulatePhysics(bool bNewSimulate);
    void SetAllBodiesPhysicsBlendWeight(float PhysicsBlendWeight, bool bSkipCustomPhysicsType);
    void SetAllBodiesBelowSimulatePhysics(FName& InBoneName, bool bNewSimulate, bool bIncludeSelf);
    void SetAllBodiesBelowPhysicsBlendWeight(FName& InBoneName, float PhysicsBlendWeight, bool bSkipCustomPhysicsType, bool bIncludeSelf);
    void ResumeClothingSimulation();
    void ResetClothTeleportMode();
    void ResetAnimInstanceDynamics(ETeleportType InTeleportType);
    void ResetAllowedAnimCurveEvaluation();
    void ResetAllBodiesSimulatePhysics();
    void PlayAnimation(UAnimationAsset* NewAnimToPlay, bool bLooping);
    void Play(bool bLooping);
    void OverrideAnimationData(UAnimationAsset* InAnimToPlay, bool bIsLooping, bool bIsPlaying, float Position, float PlayRate);
    void LinkAnimGraphByTag(FName InTag, UClass* InClass);
    void LinkAnimClassLayers(UClass* InClass);
    bool K2_GetClosestPointOnPhysicsAsset(FVector& WorldPosition, FVector& ClosestWorldPosition, FVector& Normal, FName& BoneName, float& Distance);
    bool IsPlaying();
    bool IsClothingSimulationSuspended();
    bool IsBodyGravityEnabled(FName BoneName);
    bool HasValidAnimationInstance();
    float GetTeleportRotationThreshold();
    float GetTeleportDistanceThreshold();
    bool GetStringAttribute_Ref(FName& BoneName, FName& AttributeName, FString& OutValue, ECustomBoneAttributeLookup LookupType);
    bool GetStringAttribute(FName& BoneName, FName& AttributeName, FString DefaultValue, FString& OutValue, ECustomBoneAttributeLookup LookupType);
    FVector GetSkeletalCenterOfMass();
    UAnimInstance* GetPostProcessInstance();
    float GetPosition();
    float GetPlayRate();
    float GetMorphTarget(FName MorphTargetName);
    UAnimInstance* GetLinkedAnimLayerInstanceByGroup(FName InGroup);
    UAnimInstance* GetLinkedAnimLayerInstanceByClass(UClass* InClass);
    void GetLinkedAnimGraphInstancesByTag(FName InTag, TArray<UAnimInstance*>& OutLinkedInstances);
    UAnimInstance* GetLinkedAnimGraphInstanceByTag(FName InTag);
    bool GetIntegerAttribute_Ref(FName& BoneName, FName& AttributeName, int32_t& OutValue, ECustomBoneAttributeLookup LookupType);
    bool GetIntegerAttribute(FName& BoneName, FName& AttributeName, int32_t DefaultValue, int32_t& OutValue, ECustomBoneAttributeLookup LookupType);
    bool GetFloatAttribute_Ref(FName& BoneName, FName& AttributeName, float& OutValue, ECustomBoneAttributeLookup LookupType);
    bool GetFloatAttribute(FName& BoneName, FName& AttributeName, float DefaultValue, float& OutValue, ECustomBoneAttributeLookup LookupType);
    bool GetDisablePostProcessBlueprint();
    bool GetDisableAnimCurves();
    void GetCurrentJointAngles(FName InBoneName, float& Swing1Angle, float& TwistAngle, float& Swing2Angle);
    float GetClothMaxDistanceScale();
    UClothingSimulationInteractor* GetClothingSimulationInteractor();
    float GetBoneMass(FName BoneName, bool bScaleMass);
    UAnimInstance* GetAnimInstance();
    UClass* GetAnimClass();
    EAnimationMode::Type GetAnimationMode();
    bool GetAllowRigidBodyAnimNode();
    bool GetAllowedAnimCurveEvaluate();
    bool GetAllowClothActors();
    void ForceClothNextUpdateTeleportAndReset();
    void ForceClothNextUpdateTeleport();
    FName FindConstraintBoneName(int32_t ConstraintIndex);
    void ClearMorphTargets();
    void BreakConstraint(FVector Impulse, FVector HitLocation, FName InBoneName);
    void BindClothToMasterPoseComponent();
    void AllowAnimCurveEvaluation(FName NameOfCurve, bool bAllow);
    void AddImpulseToAllBodiesBelow(FVector Impulse, FName BoneName, bool bVelChange, bool bIncludeSelf);
    void AddForceToAllBodiesBelow(FVector Force, FName BoneName, bool bAccelChange, bool bIncludeSelf);
    void AccumulateAllBodiesBelowPhysicsBlendWeight(FName& InBoneName, float AddPhysicsBlendWeight, bool bSkipCustomPhysicsType);
}; // Size: 0xf30
#pragma pack(pop)
