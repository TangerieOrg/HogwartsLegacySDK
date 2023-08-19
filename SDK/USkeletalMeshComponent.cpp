#include "EAnimationMode\Type.hpp"
#include "ECustomBoneAttributeLookup.hpp"
#include "EKinematicBonesUpdateToPhysics\Type.hpp"
#include "EPhysicsTransformUpdateMode\Type.hpp"
#include "ETeleportType.hpp"
#include "FPoseSnapshot.hpp"
#include "FSingleAnimationPlayData.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UAnimBlueprintGeneratedClass.hpp"
#include "UAnimInstance.hpp"
#include "UAnimationAsset.hpp"
#include "UBodySetup.hpp"
#include "UClass.hpp"
#include "UClothingSimulationInteractor.hpp"
#include "UFunction.hpp"
#include "USkeletalMeshComponent.hpp"
#include "USkinnedMeshComponent.hpp"
USkeletalMeshComponent* USkeletalMeshComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SkeletalMeshComponent");
    return (USkeletalMeshComponent*)res;
}
void USkeletalMeshComponent::ResetClothTeleportMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.ResetClothTeleportMode"));
    struct Params_ResetClothTeleportMode {
    }; // Size: 0x0
    Params_ResetClothTeleportMode params{};
    ProcessEvent(func, &params);
}
void USkeletalMeshComponent::SuspendClothingSimulation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.SuspendClothingSimulation"));
    struct Params_SuspendClothingSimulation {
    }; // Size: 0x0
    Params_SuspendClothingSimulation params{};
    ProcessEvent(func, &params);
}
void USkeletalMeshComponent::Stop() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.Stop"));
    struct Params_Stop {
    }; // Size: 0x0
    Params_Stop params{};
    ProcessEvent(func, &params);
}
float USkeletalMeshComponent::GetTeleportDistanceThreshold() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.GetTeleportDistanceThreshold"));
    struct Params_GetTeleportDistanceThreshold {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetTeleportDistanceThreshold params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void USkeletalMeshComponent::UnlinkAnimClassLayers(UClass* InClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.UnlinkAnimClassLayers"));
    struct Params_UnlinkAnimClassLayers {
        UClass* InClass; // 0x0
    }; // Size: 0x8
    Params_UnlinkAnimClassLayers params{};
    params.InClass = (UClass*)InClass;
    ProcessEvent(func, &params);
}
UAnimInstance* USkeletalMeshComponent::GetLinkedAnimGraphInstanceByTag(FName InTag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.GetLinkedAnimGraphInstanceByTag"));
    struct Params_GetLinkedAnimGraphInstanceByTag {
        FName InTag; // 0x0
        UAnimInstance* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetLinkedAnimGraphInstanceByTag params{};
    params.InTag = (FName)InTag;
    ProcessEvent(func, &params);
    return (UAnimInstance*)params.ReturnValue;
}
void USkeletalMeshComponent::UnbindClothFromMasterPoseComponent(bool bRestoreSimulationSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.UnbindClothFromMasterPoseComponent"));
    struct Params_UnbindClothFromMasterPoseComponent {
        bool bRestoreSimulationSpace; // 0x0
    }; // Size: 0x1
    Params_UnbindClothFromMasterPoseComponent params{};
    params.bRestoreSimulationSpace = (bool)bRestoreSimulationSpace;
    ProcessEvent(func, &params);
}
void USkeletalMeshComponent::ToggleDisablePostProcessBlueprint() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.ToggleDisablePostProcessBlueprint"));
    struct Params_ToggleDisablePostProcessBlueprint {
    }; // Size: 0x0
    Params_ToggleDisablePostProcessBlueprint params{};
    ProcessEvent(func, &params);
}
void USkeletalMeshComponent::TermBodiesBelow(FName ParentBoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.TermBodiesBelow"));
    struct Params_TermBodiesBelow {
        FName ParentBoneName; // 0x0
    }; // Size: 0x8
    Params_TermBodiesBelow params{};
    params.ParentBoneName = (FName)ParentBoneName;
    ProcessEvent(func, &params);
}
void USkeletalMeshComponent::SnapshotPose(FPoseSnapshot& Snapshot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.SnapshotPose"));
    struct Params_SnapshotPose {
        FPoseSnapshot Snapshot; // 0x0
    }; // Size: 0x38
    Params_SnapshotPose params{};
    params.Snapshot = (FPoseSnapshot)Snapshot;
    ProcessEvent(func, &params);
    Snapshot = params.Snapshot;
}
void USkeletalMeshComponent::SetUpdateClothInEditor(bool NewUpdateState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.SetUpdateClothInEditor"));
    struct Params_SetUpdateClothInEditor {
        bool NewUpdateState; // 0x0
    }; // Size: 0x1
    Params_SetUpdateClothInEditor params{};
    params.NewUpdateState = (bool)NewUpdateState;
    ProcessEvent(func, &params);
}
bool USkeletalMeshComponent::HasValidAnimationInstance() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.HasValidAnimationInstance"));
    struct Params_HasValidAnimationInstance {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasValidAnimationInstance params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool USkeletalMeshComponent::IsClothingSimulationSuspended() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.IsClothingSimulationSuspended"));
    struct Params_IsClothingSimulationSuspended {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsClothingSimulationSuspended params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void USkeletalMeshComponent::SetUpdateAnimationInEditor(bool NewUpdateState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.SetUpdateAnimationInEditor"));
    struct Params_SetUpdateAnimationInEditor {
        bool NewUpdateState; // 0x0
    }; // Size: 0x1
    Params_SetUpdateAnimationInEditor params{};
    params.NewUpdateState = (bool)NewUpdateState;
    ProcessEvent(func, &params);
}
void USkeletalMeshComponent::SetAllMotorsAngularPositionDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.SetAllMotorsAngularPositionDrive"));
    struct Params_SetAllMotorsAngularPositionDrive {
        bool bEnableSwingDrive; // 0x0
        bool bEnableTwistDrive; // 0x1
        bool bSkipCustomPhysicsType; // 0x2
    }; // Size: 0x3
    Params_SetAllMotorsAngularPositionDrive params{};
    params.bEnableSwingDrive = (bool)bEnableSwingDrive;
    params.bEnableTwistDrive = (bool)bEnableTwistDrive;
    params.bSkipCustomPhysicsType = (bool)bSkipCustomPhysicsType;
    ProcessEvent(func, &params);
}
void USkeletalMeshComponent::SetTeleportRotationThreshold(float Threshold) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.SetTeleportRotationThreshold"));
    struct Params_SetTeleportRotationThreshold {
        float Threshold; // 0x0
    }; // Size: 0x4
    Params_SetTeleportRotationThreshold params{};
    params.Threshold = (float)Threshold;
    ProcessEvent(func, &params);
}
bool USkeletalMeshComponent::GetStringAttribute_Ref(FName& BoneName, FName& AttributeName, FString& OutValue, ECustomBoneAttributeLookup LookupType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.GetStringAttribute_Ref"));
    struct Params_GetStringAttribute_Ref {
        FName BoneName; // 0x0
        FName AttributeName; // 0x8
        FString OutValue; // 0x10
        ECustomBoneAttributeLookup LookupType; // 0x20
        bool ReturnValue; // 0x21
    }; // Size: 0x22
    Params_GetStringAttribute_Ref params{};
    params.BoneName = (FName)BoneName;
    params.AttributeName = (FName)AttributeName;
    params.OutValue = (FString)OutValue;
    params.LookupType = (ECustomBoneAttributeLookup)LookupType;
    ProcessEvent(func, &params);
    AttributeName = params.AttributeName;
    BoneName = params.BoneName;
    OutValue = params.OutValue;
    return (bool)params.ReturnValue;
}
void USkeletalMeshComponent::SetTeleportDistanceThreshold(float Threshold) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.SetTeleportDistanceThreshold"));
    struct Params_SetTeleportDistanceThreshold {
        float Threshold; // 0x0
    }; // Size: 0x4
    Params_SetTeleportDistanceThreshold params{};
    params.Threshold = (float)Threshold;
    ProcessEvent(func, &params);
}
void USkeletalMeshComponent::SetPosition(float InPos, bool bFireNotifies) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.SetPosition"));
    struct Params_SetPosition {
        float InPos; // 0x0
        bool bFireNotifies; // 0x4
    }; // Size: 0x5
    Params_SetPosition params{};
    params.InPos = (float)InPos;
    params.bFireNotifies = (bool)bFireNotifies;
    ProcessEvent(func, &params);
}
void USkeletalMeshComponent::SetPlayRate(float Rate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.SetPlayRate"));
    struct Params_SetPlayRate {
        float Rate; // 0x0
    }; // Size: 0x4
    Params_SetPlayRate params{};
    params.Rate = (float)Rate;
    ProcessEvent(func, &params);
}
void USkeletalMeshComponent::SetAnimation(UAnimationAsset* NewAnimToPlay) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.SetAnimation"));
    struct Params_SetAnimation {
        UAnimationAsset* NewAnimToPlay; // 0x0
    }; // Size: 0x8
    Params_SetAnimation params{};
    params.NewAnimToPlay = (UAnimationAsset*)NewAnimToPlay;
    ProcessEvent(func, &params);
}
FVector USkeletalMeshComponent::GetSkeletalCenterOfMass() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.GetSkeletalCenterOfMass"));
    struct Params_GetSkeletalCenterOfMass {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetSkeletalCenterOfMass params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void USkeletalMeshComponent::ResumeClothingSimulation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.ResumeClothingSimulation"));
    struct Params_ResumeClothingSimulation {
    }; // Size: 0x0
    Params_ResumeClothingSimulation params{};
    ProcessEvent(func, &params);
}
void USkeletalMeshComponent::SetAllMotorsAngularDriveParams(float InSpring, float InDamping, float InForceLimit, bool bSkipCustomPhysicsType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.SetAllMotorsAngularDriveParams"));
    struct Params_SetAllMotorsAngularDriveParams {
        float InSpring; // 0x0
        float InDamping; // 0x4
        float InForceLimit; // 0x8
        bool bSkipCustomPhysicsType; // 0xc
    }; // Size: 0xd
    Params_SetAllMotorsAngularDriveParams params{};
    params.InSpring = (float)InSpring;
    params.InDamping = (float)InDamping;
    params.InForceLimit = (float)InForceLimit;
    params.bSkipCustomPhysicsType = (bool)bSkipCustomPhysicsType;
    ProcessEvent(func, &params);
}
void USkeletalMeshComponent::SetPhysicsBlendWeight(float PhysicsBlendWeight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.SetPhysicsBlendWeight"));
    struct Params_SetPhysicsBlendWeight {
        float PhysicsBlendWeight; // 0x0
    }; // Size: 0x4
    Params_SetPhysicsBlendWeight params{};
    params.PhysicsBlendWeight = (float)PhysicsBlendWeight;
    ProcessEvent(func, &params);
}
void USkeletalMeshComponent::SetEnablePhysicsBlending(bool bNewBlendPhysics) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.SetEnablePhysicsBlending"));
    struct Params_SetEnablePhysicsBlending {
        bool bNewBlendPhysics; // 0x0
    }; // Size: 0x1
    Params_SetEnablePhysicsBlending params{};
    params.bNewBlendPhysics = (bool)bNewBlendPhysics;
    ProcessEvent(func, &params);
}
void USkeletalMeshComponent::SetClothMaxDistanceScale(float Scale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.SetClothMaxDistanceScale"));
    struct Params_SetClothMaxDistanceScale {
        float Scale; // 0x0
    }; // Size: 0x4
    Params_SetClothMaxDistanceScale params{};
    params.Scale = (float)Scale;
    ProcessEvent(func, &params);
}
void USkeletalMeshComponent::SetNotifyRigidBodyCollisionBelow(bool bNewNotifyRigidBodyCollision, FName BoneName, bool bIncludeSelf) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.SetNotifyRigidBodyCollisionBelow"));
    struct Params_SetNotifyRigidBodyCollisionBelow {
        bool bNewNotifyRigidBodyCollision; // 0x0
        char pad_1[0x3];
        FName BoneName; // 0x4
        bool bIncludeSelf; // 0xc
    }; // Size: 0xd
    Params_SetNotifyRigidBodyCollisionBelow params{};
    params.bNewNotifyRigidBodyCollision = (bool)bNewNotifyRigidBodyCollision;
    params.BoneName = (FName)BoneName;
    params.bIncludeSelf = (bool)bIncludeSelf;
    ProcessEvent(func, &params);
}
void USkeletalMeshComponent::SetAngularLimits(FName InBoneName, float Swing1LimitAngle, float TwistLimitAngle, float Swing2LimitAngle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.SetAngularLimits"));
    struct Params_SetAngularLimits {
        FName InBoneName; // 0x0
        float Swing1LimitAngle; // 0x8
        float TwistLimitAngle; // 0xc
        float Swing2LimitAngle; // 0x10
    }; // Size: 0x14
    Params_SetAngularLimits params{};
    params.InBoneName = (FName)InBoneName;
    params.Swing1LimitAngle = (float)Swing1LimitAngle;
    params.TwistLimitAngle = (float)TwistLimitAngle;
    params.Swing2LimitAngle = (float)Swing2LimitAngle;
    ProcessEvent(func, &params);
}
bool USkeletalMeshComponent::GetIntegerAttribute_Ref(FName& BoneName, FName& AttributeName, int32_t& OutValue, ECustomBoneAttributeLookup LookupType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.GetIntegerAttribute_Ref"));
    struct Params_GetIntegerAttribute_Ref {
        FName BoneName; // 0x0
        FName AttributeName; // 0x8
        int32_t OutValue; // 0x10
        ECustomBoneAttributeLookup LookupType; // 0x14
        bool ReturnValue; // 0x15
    }; // Size: 0x16
    Params_GetIntegerAttribute_Ref params{};
    params.BoneName = (FName)BoneName;
    params.AttributeName = (FName)AttributeName;
    params.OutValue = (int32_t)OutValue;
    params.LookupType = (ECustomBoneAttributeLookup)LookupType;
    ProcessEvent(func, &params);
    AttributeName = params.AttributeName;
    BoneName = params.BoneName;
    OutValue = params.OutValue;
    return (bool)params.ReturnValue;
}
void USkeletalMeshComponent::SetMorphTarget(FName MorphTargetName, float Value, bool bRemoveZeroWeight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.SetMorphTarget"));
    struct Params_SetMorphTarget {
        FName MorphTargetName; // 0x0
        float Value; // 0x8
        bool bRemoveZeroWeight; // 0xc
    }; // Size: 0xd
    Params_SetMorphTarget params{};
    params.MorphTargetName = (FName)MorphTargetName;
    params.Value = (float)Value;
    params.bRemoveZeroWeight = (bool)bRemoveZeroWeight;
    ProcessEvent(func, &params);
}
bool USkeletalMeshComponent::GetStringAttribute(FName& BoneName, FName& AttributeName, FString DefaultValue, FString& OutValue, ECustomBoneAttributeLookup LookupType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.GetStringAttribute"));
    struct Params_GetStringAttribute {
        FName BoneName; // 0x0
        FName AttributeName; // 0x8
        FString DefaultValue; // 0x10
        FString OutValue; // 0x20
        ECustomBoneAttributeLookup LookupType; // 0x30
        bool ReturnValue; // 0x31
    }; // Size: 0x32
    Params_GetStringAttribute params{};
    params.BoneName = (FName)BoneName;
    params.AttributeName = (FName)AttributeName;
    params.DefaultValue = (FString)DefaultValue;
    params.OutValue = (FString)OutValue;
    params.LookupType = (ECustomBoneAttributeLookup)LookupType;
    ProcessEvent(func, &params);
    BoneName = params.BoneName;
    OutValue = params.OutValue;
    AttributeName = params.AttributeName;
    return (bool)params.ReturnValue;
}
bool USkeletalMeshComponent::K2_GetClosestPointOnPhysicsAsset(FVector& WorldPosition, FVector& ClosestWorldPosition, FVector& Normal, FName& BoneName, float& Distance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.K2_GetClosestPointOnPhysicsAsset"));
    struct Params_K2_GetClosestPointOnPhysicsAsset {
        FVector WorldPosition; // 0x0
        FVector ClosestWorldPosition; // 0xc
        FVector Normal; // 0x18
        FName BoneName; // 0x24
        float Distance; // 0x2c
        bool ReturnValue; // 0x30
    }; // Size: 0x31
    Params_K2_GetClosestPointOnPhysicsAsset params{};
    params.WorldPosition = (FVector)WorldPosition;
    params.ClosestWorldPosition = (FVector)ClosestWorldPosition;
    params.Normal = (FVector)Normal;
    params.BoneName = (FName)BoneName;
    params.Distance = (float)Distance;
    ProcessEvent(func, &params);
    Distance = params.Distance;
    WorldPosition = params.WorldPosition;
    ClosestWorldPosition = params.ClosestWorldPosition;
    Normal = params.Normal;
    BoneName = params.BoneName;
    return (bool)params.ReturnValue;
}
void USkeletalMeshComponent::SetEnableGravityOnAllBodiesBelow(bool bEnableGravity, FName BoneName, bool bIncludeSelf) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.SetEnableGravityOnAllBodiesBelow"));
    struct Params_SetEnableGravityOnAllBodiesBelow {
        bool bEnableGravity; // 0x0
        char pad_1[0x3];
        FName BoneName; // 0x4
        bool bIncludeSelf; // 0xc
    }; // Size: 0xd
    Params_SetEnableGravityOnAllBodiesBelow params{};
    params.bEnableGravity = (bool)bEnableGravity;
    params.BoneName = (FName)BoneName;
    params.bIncludeSelf = (bool)bIncludeSelf;
    ProcessEvent(func, &params);
}
void USkeletalMeshComponent::SetEnableBodyGravity(bool bEnableGravity, FName BoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.SetEnableBodyGravity"));
    struct Params_SetEnableBodyGravity {
        bool bEnableGravity; // 0x0
        char pad_1[0x3];
        FName BoneName; // 0x4
    }; // Size: 0xc
    Params_SetEnableBodyGravity params{};
    params.bEnableGravity = (bool)bEnableGravity;
    params.BoneName = (FName)BoneName;
    ProcessEvent(func, &params);
}
void USkeletalMeshComponent::SetDisablePostProcessBlueprint(bool bInDisablePostProcess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.SetDisablePostProcessBlueprint"));
    struct Params_SetDisablePostProcessBlueprint {
        bool bInDisablePostProcess; // 0x0
    }; // Size: 0x1
    Params_SetDisablePostProcessBlueprint params{};
    params.bInDisablePostProcess = (bool)bInDisablePostProcess;
    ProcessEvent(func, &params);
}
void USkeletalMeshComponent::SetAllowAnimCurveEvaluation(bool bInAllow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.SetAllowAnimCurveEvaluation"));
    struct Params_SetAllowAnimCurveEvaluation {
        bool bInAllow; // 0x0
    }; // Size: 0x1
    Params_SetAllowAnimCurveEvaluation params{};
    params.bInAllow = (bool)bInAllow;
    ProcessEvent(func, &params);
}
void USkeletalMeshComponent::SetDisableAnimCurves(bool bInDisableAnimCurves) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.SetDisableAnimCurves"));
    struct Params_SetDisableAnimCurves {
        bool bInDisableAnimCurves; // 0x0
    }; // Size: 0x1
    Params_SetDisableAnimCurves params{};
    params.bInDisableAnimCurves = (bool)bInDisableAnimCurves;
    ProcessEvent(func, &params);
}
void USkeletalMeshComponent::SetConstraintProfileForAll(FName ProfileName, bool bDefaultIfNotFound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.SetConstraintProfileForAll"));
    struct Params_SetConstraintProfileForAll {
        FName ProfileName; // 0x0
        bool bDefaultIfNotFound; // 0x8
    }; // Size: 0x9
    Params_SetConstraintProfileForAll params{};
    params.ProfileName = (FName)ProfileName;
    params.bDefaultIfNotFound = (bool)bDefaultIfNotFound;
    ProcessEvent(func, &params);
}
void USkeletalMeshComponent::SetAllowRigidBodyAnimNode(bool bInAllow, bool bReinitAnim) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.SetAllowRigidBodyAnimNode"));
    struct Params_SetAllowRigidBodyAnimNode {
        bool bInAllow; // 0x0
        bool bReinitAnim; // 0x1
    }; // Size: 0x2
    Params_SetAllowRigidBodyAnimNode params{};
    params.bInAllow = (bool)bInAllow;
    params.bReinitAnim = (bool)bReinitAnim;
    ProcessEvent(func, &params);
}
void USkeletalMeshComponent::SetConstraintProfile(FName JointName, FName ProfileName, bool bDefaultIfNotFound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.SetConstraintProfile"));
    struct Params_SetConstraintProfile {
        FName JointName; // 0x0
        FName ProfileName; // 0x8
        bool bDefaultIfNotFound; // 0x10
    }; // Size: 0x11
    Params_SetConstraintProfile params{};
    params.JointName = (FName)JointName;
    params.ProfileName = (FName)ProfileName;
    params.bDefaultIfNotFound = (bool)bDefaultIfNotFound;
    ProcessEvent(func, &params);
}
void USkeletalMeshComponent::ResetAllBodiesSimulatePhysics() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.ResetAllBodiesSimulatePhysics"));
    struct Params_ResetAllBodiesSimulatePhysics {
    }; // Size: 0x0
    Params_ResetAllBodiesSimulatePhysics params{};
    ProcessEvent(func, &params);
}
UAnimInstance* USkeletalMeshComponent::GetLinkedAnimLayerInstanceByClass(UClass* InClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.GetLinkedAnimLayerInstanceByClass"));
    struct Params_GetLinkedAnimLayerInstanceByClass {
        UClass* InClass; // 0x0
        UAnimInstance* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetLinkedAnimLayerInstanceByClass params{};
    params.InClass = (UClass*)InClass;
    ProcessEvent(func, &params);
    return (UAnimInstance*)params.ReturnValue;
}
void USkeletalMeshComponent::SetBodyNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision, FName BoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.SetBodyNotifyRigidBodyCollision"));
    struct Params_SetBodyNotifyRigidBodyCollision {
        bool bNewNotifyRigidBodyCollision; // 0x0
        char pad_1[0x3];
        FName BoneName; // 0x4
    }; // Size: 0xc
    Params_SetBodyNotifyRigidBodyCollision params{};
    params.bNewNotifyRigidBodyCollision = (bool)bNewNotifyRigidBodyCollision;
    params.BoneName = (FName)BoneName;
    ProcessEvent(func, &params);
}
void USkeletalMeshComponent::SetAnimClass(UClass* NewClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.SetAnimClass"));
    struct Params_SetAnimClass {
        UClass* NewClass; // 0x0
    }; // Size: 0x8
    Params_SetAnimClass params{};
    params.NewClass = (UClass*)NewClass;
    ProcessEvent(func, &params);
}
void USkeletalMeshComponent::SetAnimationMode(EAnimationMode::Type InAnimationMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.SetAnimationMode"));
    struct Params_SetAnimationMode {
        EAnimationMode::Type InAnimationMode; // 0x0
    }; // Size: 0x1
    Params_SetAnimationMode params{};
    params.InAnimationMode = (EAnimationMode::Type)InAnimationMode;
    ProcessEvent(func, &params);
}
void USkeletalMeshComponent::SetAllowedAnimCurvesEvaluation(TArray<FName>& List, bool bAllow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.SetAllowedAnimCurvesEvaluation"));
    struct Params_SetAllowedAnimCurvesEvaluation {
        TArray<FName> List; // 0x0
        bool bAllow; // 0x10
    }; // Size: 0x11
    Params_SetAllowedAnimCurvesEvaluation params{};
    params.List = (TArray<FName>)List;
    params.bAllow = (bool)bAllow;
    ProcessEvent(func, &params);
    List = params.List;
}
void USkeletalMeshComponent::SetAllowClothActors(bool bInAllow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.SetAllowClothActors"));
    struct Params_SetAllowClothActors {
        bool bInAllow; // 0x0
    }; // Size: 0x1
    Params_SetAllowClothActors params{};
    params.bInAllow = (bool)bInAllow;
    ProcessEvent(func, &params);
}
void USkeletalMeshComponent::SetAllMotorsAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.SetAllMotorsAngularVelocityDrive"));
    struct Params_SetAllMotorsAngularVelocityDrive {
        bool bEnableSwingDrive; // 0x0
        bool bEnableTwistDrive; // 0x1
        bool bSkipCustomPhysicsType; // 0x2
    }; // Size: 0x3
    Params_SetAllMotorsAngularVelocityDrive params{};
    params.bEnableSwingDrive = (bool)bEnableSwingDrive;
    params.bEnableTwistDrive = (bool)bEnableTwistDrive;
    params.bSkipCustomPhysicsType = (bool)bSkipCustomPhysicsType;
    ProcessEvent(func, &params);
}
void USkeletalMeshComponent::SetAllBodiesSimulatePhysics(bool bNewSimulate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.SetAllBodiesSimulatePhysics"));
    struct Params_SetAllBodiesSimulatePhysics {
        bool bNewSimulate; // 0x0
    }; // Size: 0x1
    Params_SetAllBodiesSimulatePhysics params{};
    params.bNewSimulate = (bool)bNewSimulate;
    ProcessEvent(func, &params);
}
void USkeletalMeshComponent::SetAllBodiesPhysicsBlendWeight(float PhysicsBlendWeight, bool bSkipCustomPhysicsType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.SetAllBodiesPhysicsBlendWeight"));
    struct Params_SetAllBodiesPhysicsBlendWeight {
        float PhysicsBlendWeight; // 0x0
        bool bSkipCustomPhysicsType; // 0x4
    }; // Size: 0x5
    Params_SetAllBodiesPhysicsBlendWeight params{};
    params.PhysicsBlendWeight = (float)PhysicsBlendWeight;
    params.bSkipCustomPhysicsType = (bool)bSkipCustomPhysicsType;
    ProcessEvent(func, &params);
}
void USkeletalMeshComponent::SetAllBodiesBelowSimulatePhysics(FName& InBoneName, bool bNewSimulate, bool bIncludeSelf) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.SetAllBodiesBelowSimulatePhysics"));
    struct Params_SetAllBodiesBelowSimulatePhysics {
        FName InBoneName; // 0x0
        bool bNewSimulate; // 0x8
        bool bIncludeSelf; // 0x9
    }; // Size: 0xa
    Params_SetAllBodiesBelowSimulatePhysics params{};
    params.InBoneName = (FName)InBoneName;
    params.bNewSimulate = (bool)bNewSimulate;
    params.bIncludeSelf = (bool)bIncludeSelf;
    ProcessEvent(func, &params);
    InBoneName = params.InBoneName;
}
float USkeletalMeshComponent::GetPosition() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.GetPosition"));
    struct Params_GetPosition {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPosition params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool USkeletalMeshComponent::GetFloatAttribute_Ref(FName& BoneName, FName& AttributeName, float& OutValue, ECustomBoneAttributeLookup LookupType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.GetFloatAttribute_Ref"));
    struct Params_GetFloatAttribute_Ref {
        FName BoneName; // 0x0
        FName AttributeName; // 0x8
        float OutValue; // 0x10
        ECustomBoneAttributeLookup LookupType; // 0x14
        bool ReturnValue; // 0x15
    }; // Size: 0x16
    Params_GetFloatAttribute_Ref params{};
    params.BoneName = (FName)BoneName;
    params.AttributeName = (FName)AttributeName;
    params.OutValue = (float)OutValue;
    params.LookupType = (ECustomBoneAttributeLookup)LookupType;
    ProcessEvent(func, &params);
    BoneName = params.BoneName;
    AttributeName = params.AttributeName;
    OutValue = params.OutValue;
    return (bool)params.ReturnValue;
}
void USkeletalMeshComponent::SetAllBodiesBelowPhysicsBlendWeight(FName& InBoneName, float PhysicsBlendWeight, bool bSkipCustomPhysicsType, bool bIncludeSelf) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.SetAllBodiesBelowPhysicsBlendWeight"));
    struct Params_SetAllBodiesBelowPhysicsBlendWeight {
        FName InBoneName; // 0x0
        float PhysicsBlendWeight; // 0x8
        bool bSkipCustomPhysicsType; // 0xc
        bool bIncludeSelf; // 0xd
    }; // Size: 0xe
    Params_SetAllBodiesBelowPhysicsBlendWeight params{};
    params.InBoneName = (FName)InBoneName;
    params.PhysicsBlendWeight = (float)PhysicsBlendWeight;
    params.bSkipCustomPhysicsType = (bool)bSkipCustomPhysicsType;
    params.bIncludeSelf = (bool)bIncludeSelf;
    ProcessEvent(func, &params);
    InBoneName = params.InBoneName;
}
bool USkeletalMeshComponent::IsPlaying() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.IsPlaying"));
    struct Params_IsPlaying {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPlaying params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void USkeletalMeshComponent::ResetAnimInstanceDynamics(ETeleportType InTeleportType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.ResetAnimInstanceDynamics"));
    struct Params_ResetAnimInstanceDynamics {
        ETeleportType InTeleportType; // 0x0
    }; // Size: 0x1
    Params_ResetAnimInstanceDynamics params{};
    params.InTeleportType = (ETeleportType)InTeleportType;
    ProcessEvent(func, &params);
}
void USkeletalMeshComponent::PlayAnimation(UAnimationAsset* NewAnimToPlay, bool bLooping) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.PlayAnimation"));
    struct Params_PlayAnimation {
        UAnimationAsset* NewAnimToPlay; // 0x0
        bool bLooping; // 0x8
    }; // Size: 0x9
    Params_PlayAnimation params{};
    params.NewAnimToPlay = (UAnimationAsset*)NewAnimToPlay;
    params.bLooping = (bool)bLooping;
    ProcessEvent(func, &params);
}
void USkeletalMeshComponent::ResetAllowedAnimCurveEvaluation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.ResetAllowedAnimCurveEvaluation"));
    struct Params_ResetAllowedAnimCurveEvaluation {
    }; // Size: 0x0
    Params_ResetAllowedAnimCurveEvaluation params{};
    ProcessEvent(func, &params);
}
void USkeletalMeshComponent::Play(bool bLooping) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.Play"));
    struct Params_Play {
        bool bLooping; // 0x0
    }; // Size: 0x1
    Params_Play params{};
    params.bLooping = (bool)bLooping;
    ProcessEvent(func, &params);
}
void USkeletalMeshComponent::ForceClothNextUpdateTeleport() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.ForceClothNextUpdateTeleport"));
    struct Params_ForceClothNextUpdateTeleport {
    }; // Size: 0x0
    Params_ForceClothNextUpdateTeleport params{};
    ProcessEvent(func, &params);
}
UAnimInstance* USkeletalMeshComponent::GetPostProcessInstance() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.GetPostProcessInstance"));
    struct Params_GetPostProcessInstance {
        UAnimInstance* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPostProcessInstance params{};
    ProcessEvent(func, &params);
    return (UAnimInstance*)params.ReturnValue;
}
void USkeletalMeshComponent::OverrideAnimationData(UAnimationAsset* InAnimToPlay, bool bIsLooping, bool bIsPlaying, float Position, float PlayRate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.OverrideAnimationData"));
    struct Params_OverrideAnimationData {
        UAnimationAsset* InAnimToPlay; // 0x0
        bool bIsLooping; // 0x8
        bool bIsPlaying; // 0x9
        char pad_a[0x2];
        float Position; // 0xc
        float PlayRate; // 0x10
    }; // Size: 0x14
    Params_OverrideAnimationData params{};
    params.InAnimToPlay = (UAnimationAsset*)InAnimToPlay;
    params.bIsLooping = (bool)bIsLooping;
    params.bIsPlaying = (bool)bIsPlaying;
    params.Position = (float)Position;
    params.PlayRate = (float)PlayRate;
    ProcessEvent(func, &params);
}
bool USkeletalMeshComponent::GetIntegerAttribute(FName& BoneName, FName& AttributeName, int32_t DefaultValue, int32_t& OutValue, ECustomBoneAttributeLookup LookupType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.GetIntegerAttribute"));
    struct Params_GetIntegerAttribute {
        FName BoneName; // 0x0
        FName AttributeName; // 0x8
        int32_t DefaultValue; // 0x10
        int32_t OutValue; // 0x14
        ECustomBoneAttributeLookup LookupType; // 0x18
        bool ReturnValue; // 0x19
    }; // Size: 0x1a
    Params_GetIntegerAttribute params{};
    params.BoneName = (FName)BoneName;
    params.AttributeName = (FName)AttributeName;
    params.DefaultValue = (int32_t)DefaultValue;
    params.OutValue = (int32_t)OutValue;
    params.LookupType = (ECustomBoneAttributeLookup)LookupType;
    ProcessEvent(func, &params);
    AttributeName = params.AttributeName;
    BoneName = params.BoneName;
    OutValue = params.OutValue;
    return (bool)params.ReturnValue;
}
void USkeletalMeshComponent::LinkAnimGraphByTag(FName InTag, UClass* InClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.LinkAnimGraphByTag"));
    struct Params_LinkAnimGraphByTag {
        FName InTag; // 0x0
        UClass* InClass; // 0x8
    }; // Size: 0x10
    Params_LinkAnimGraphByTag params{};
    params.InTag = (FName)InTag;
    params.InClass = (UClass*)InClass;
    ProcessEvent(func, &params);
}
void USkeletalMeshComponent::LinkAnimClassLayers(UClass* InClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.LinkAnimClassLayers"));
    struct Params_LinkAnimClassLayers {
        UClass* InClass; // 0x0
    }; // Size: 0x8
    Params_LinkAnimClassLayers params{};
    params.InClass = (UClass*)InClass;
    ProcessEvent(func, &params);
}
bool USkeletalMeshComponent::IsBodyGravityEnabled(FName BoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.IsBodyGravityEnabled"));
    struct Params_IsBodyGravityEnabled {
        FName BoneName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsBodyGravityEnabled params{};
    params.BoneName = (FName)BoneName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float USkeletalMeshComponent::GetTeleportRotationThreshold() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.GetTeleportRotationThreshold"));
    struct Params_GetTeleportRotationThreshold {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetTeleportRotationThreshold params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float USkeletalMeshComponent::GetPlayRate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.GetPlayRate"));
    struct Params_GetPlayRate {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPlayRate params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool USkeletalMeshComponent::GetDisableAnimCurves() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.GetDisableAnimCurves"));
    struct Params_GetDisableAnimCurves {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetDisableAnimCurves params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float USkeletalMeshComponent::GetMorphTarget(FName MorphTargetName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.GetMorphTarget"));
    struct Params_GetMorphTarget {
        FName MorphTargetName; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetMorphTarget params{};
    params.MorphTargetName = (FName)MorphTargetName;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool USkeletalMeshComponent::GetDisablePostProcessBlueprint() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.GetDisablePostProcessBlueprint"));
    struct Params_GetDisablePostProcessBlueprint {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetDisablePostProcessBlueprint params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UAnimInstance* USkeletalMeshComponent::GetLinkedAnimLayerInstanceByGroup(FName InGroup) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.GetLinkedAnimLayerInstanceByGroup"));
    struct Params_GetLinkedAnimLayerInstanceByGroup {
        FName InGroup; // 0x0
        UAnimInstance* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetLinkedAnimLayerInstanceByGroup params{};
    params.InGroup = (FName)InGroup;
    ProcessEvent(func, &params);
    return (UAnimInstance*)params.ReturnValue;
}
void USkeletalMeshComponent::GetLinkedAnimGraphInstancesByTag(FName InTag, TArray<UAnimInstance*>& OutLinkedInstances) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.GetLinkedAnimGraphInstancesByTag"));
    struct Params_GetLinkedAnimGraphInstancesByTag {
        FName InTag; // 0x0
        TArray<UAnimInstance*> OutLinkedInstances; // 0x8
    }; // Size: 0x18
    Params_GetLinkedAnimGraphInstancesByTag params{};
    params.InTag = (FName)InTag;
    params.OutLinkedInstances = (TArray<UAnimInstance*>)OutLinkedInstances;
    ProcessEvent(func, &params);
    OutLinkedInstances = params.OutLinkedInstances;
}
bool USkeletalMeshComponent::GetFloatAttribute(FName& BoneName, FName& AttributeName, float DefaultValue, float& OutValue, ECustomBoneAttributeLookup LookupType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.GetFloatAttribute"));
    struct Params_GetFloatAttribute {
        FName BoneName; // 0x0
        FName AttributeName; // 0x8
        float DefaultValue; // 0x10
        float OutValue; // 0x14
        ECustomBoneAttributeLookup LookupType; // 0x18
        bool ReturnValue; // 0x19
    }; // Size: 0x1a
    Params_GetFloatAttribute params{};
    params.BoneName = (FName)BoneName;
    params.AttributeName = (FName)AttributeName;
    params.DefaultValue = (float)DefaultValue;
    params.OutValue = (float)OutValue;
    params.LookupType = (ECustomBoneAttributeLookup)LookupType;
    ProcessEvent(func, &params);
    BoneName = params.BoneName;
    AttributeName = params.AttributeName;
    OutValue = params.OutValue;
    return (bool)params.ReturnValue;
}
void USkeletalMeshComponent::GetCurrentJointAngles(FName InBoneName, float& Swing1Angle, float& TwistAngle, float& Swing2Angle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.GetCurrentJointAngles"));
    struct Params_GetCurrentJointAngles {
        FName InBoneName; // 0x0
        float Swing1Angle; // 0x8
        float TwistAngle; // 0xc
        float Swing2Angle; // 0x10
    }; // Size: 0x14
    Params_GetCurrentJointAngles params{};
    params.InBoneName = (FName)InBoneName;
    params.Swing1Angle = (float)Swing1Angle;
    params.TwistAngle = (float)TwistAngle;
    params.Swing2Angle = (float)Swing2Angle;
    ProcessEvent(func, &params);
    Swing1Angle = params.Swing1Angle;
    TwistAngle = params.TwistAngle;
    Swing2Angle = params.Swing2Angle;
}
float USkeletalMeshComponent::GetClothMaxDistanceScale() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.GetClothMaxDistanceScale"));
    struct Params_GetClothMaxDistanceScale {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetClothMaxDistanceScale params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
UClothingSimulationInteractor* USkeletalMeshComponent::GetClothingSimulationInteractor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.GetClothingSimulationInteractor"));
    struct Params_GetClothingSimulationInteractor {
        UClothingSimulationInteractor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetClothingSimulationInteractor params{};
    ProcessEvent(func, &params);
    return (UClothingSimulationInteractor*)params.ReturnValue;
}
float USkeletalMeshComponent::GetBoneMass(FName BoneName, bool bScaleMass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.GetBoneMass"));
    struct Params_GetBoneMass {
        FName BoneName; // 0x0
        bool bScaleMass; // 0x8
        char pad_9[0x3];
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_GetBoneMass params{};
    params.BoneName = (FName)BoneName;
    params.bScaleMass = (bool)bScaleMass;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
UAnimInstance* USkeletalMeshComponent::GetAnimInstance() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.GetAnimInstance"));
    struct Params_GetAnimInstance {
        UAnimInstance* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAnimInstance params{};
    ProcessEvent(func, &params);
    return (UAnimInstance*)params.ReturnValue;
}
UClass* USkeletalMeshComponent::GetAnimClass() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.GetAnimClass"));
    struct Params_GetAnimClass {
        UClass* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAnimClass params{};
    ProcessEvent(func, &params);
    return (UClass*)params.ReturnValue;
}
EAnimationMode::Type USkeletalMeshComponent::GetAnimationMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.GetAnimationMode"));
    struct Params_GetAnimationMode {
        EAnimationMode::Type ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetAnimationMode params{};
    ProcessEvent(func, &params);
    return (EAnimationMode::Type)params.ReturnValue;
}
bool USkeletalMeshComponent::GetAllowRigidBodyAnimNode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.GetAllowRigidBodyAnimNode"));
    struct Params_GetAllowRigidBodyAnimNode {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetAllowRigidBodyAnimNode params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool USkeletalMeshComponent::GetAllowedAnimCurveEvaluate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.GetAllowedAnimCurveEvaluate"));
    struct Params_GetAllowedAnimCurveEvaluate {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetAllowedAnimCurveEvaluate params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool USkeletalMeshComponent::GetAllowClothActors() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.GetAllowClothActors"));
    struct Params_GetAllowClothActors {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetAllowClothActors params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void USkeletalMeshComponent::ForceClothNextUpdateTeleportAndReset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.ForceClothNextUpdateTeleportAndReset"));
    struct Params_ForceClothNextUpdateTeleportAndReset {
    }; // Size: 0x0
    Params_ForceClothNextUpdateTeleportAndReset params{};
    ProcessEvent(func, &params);
}
FName USkeletalMeshComponent::FindConstraintBoneName(int32_t ConstraintIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.FindConstraintBoneName"));
    struct Params_FindConstraintBoneName {
        int32_t ConstraintIndex; // 0x0
        FName ReturnValue; // 0x4
    }; // Size: 0xc
    Params_FindConstraintBoneName params{};
    params.ConstraintIndex = (int32_t)ConstraintIndex;
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void USkeletalMeshComponent::ClearMorphTargets() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.ClearMorphTargets"));
    struct Params_ClearMorphTargets {
    }; // Size: 0x0
    Params_ClearMorphTargets params{};
    ProcessEvent(func, &params);
}
void USkeletalMeshComponent::BreakConstraint(FVector Impulse, FVector HitLocation, FName InBoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.BreakConstraint"));
    struct Params_BreakConstraint {
        FVector Impulse; // 0x0
        FVector HitLocation; // 0xc
        FName InBoneName; // 0x18
    }; // Size: 0x20
    Params_BreakConstraint params{};
    params.Impulse = (FVector)Impulse;
    params.HitLocation = (FVector)HitLocation;
    params.InBoneName = (FName)InBoneName;
    ProcessEvent(func, &params);
}
void USkeletalMeshComponent::BindClothToMasterPoseComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.BindClothToMasterPoseComponent"));
    struct Params_BindClothToMasterPoseComponent {
    }; // Size: 0x0
    Params_BindClothToMasterPoseComponent params{};
    ProcessEvent(func, &params);
}
void USkeletalMeshComponent::AllowAnimCurveEvaluation(FName NameOfCurve, bool bAllow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.AllowAnimCurveEvaluation"));
    struct Params_AllowAnimCurveEvaluation {
        FName NameOfCurve; // 0x0
        bool bAllow; // 0x8
    }; // Size: 0x9
    Params_AllowAnimCurveEvaluation params{};
    params.NameOfCurve = (FName)NameOfCurve;
    params.bAllow = (bool)bAllow;
    ProcessEvent(func, &params);
}
void USkeletalMeshComponent::AddImpulseToAllBodiesBelow(FVector Impulse, FName BoneName, bool bVelChange, bool bIncludeSelf) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.AddImpulseToAllBodiesBelow"));
    struct Params_AddImpulseToAllBodiesBelow {
        FVector Impulse; // 0x0
        FName BoneName; // 0xc
        bool bVelChange; // 0x14
        bool bIncludeSelf; // 0x15
    }; // Size: 0x16
    Params_AddImpulseToAllBodiesBelow params{};
    params.Impulse = (FVector)Impulse;
    params.BoneName = (FName)BoneName;
    params.bVelChange = (bool)bVelChange;
    params.bIncludeSelf = (bool)bIncludeSelf;
    ProcessEvent(func, &params);
}
void USkeletalMeshComponent::AddForceToAllBodiesBelow(FVector Force, FName BoneName, bool bAccelChange, bool bIncludeSelf) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.AddForceToAllBodiesBelow"));
    struct Params_AddForceToAllBodiesBelow {
        FVector Force; // 0x0
        FName BoneName; // 0xc
        bool bAccelChange; // 0x14
        bool bIncludeSelf; // 0x15
    }; // Size: 0x16
    Params_AddForceToAllBodiesBelow params{};
    params.Force = (FVector)Force;
    params.BoneName = (FName)BoneName;
    params.bAccelChange = (bool)bAccelChange;
    params.bIncludeSelf = (bool)bIncludeSelf;
    ProcessEvent(func, &params);
}
void USkeletalMeshComponent::AccumulateAllBodiesBelowPhysicsBlendWeight(FName& InBoneName, float AddPhysicsBlendWeight, bool bSkipCustomPhysicsType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshComponent.AccumulateAllBodiesBelowPhysicsBlendWeight"));
    struct Params_AccumulateAllBodiesBelowPhysicsBlendWeight {
        FName InBoneName; // 0x0
        float AddPhysicsBlendWeight; // 0x8
        bool bSkipCustomPhysicsType; // 0xc
    }; // Size: 0xd
    Params_AccumulateAllBodiesBelowPhysicsBlendWeight params{};
    params.InBoneName = (FName)InBoneName;
    params.AddPhysicsBlendWeight = (float)AddPhysicsBlendWeight;
    params.bSkipCustomPhysicsType = (bool)bSkipCustomPhysicsType;
    ProcessEvent(func, &params);
    InBoneName = params.InBoneName;
}
