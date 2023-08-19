#include "EPhysBodyOp.hpp"
#include "ESkinCacheUsage.hpp"
#include "EVisibilityBasedAnimTickOption.hpp"
#include "FBoxSphereBounds.hpp"
#include "FLinearColor.hpp"
#include "FMatrix.hpp"
#include "FRotator.hpp"
#include "FSkelMeshComponentLODInfo.hpp"
#include "FSkelMeshSkinWeightInfo.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "FVertexOffsetUsage.hpp"
#include "UFunction.hpp"
#include "UMeshComponent.hpp"
#include "UPhysicsAsset.hpp"
#include "USkeletalMesh.hpp"
#include "USkinnedMeshComponent.hpp"
void USkinnedMeshComponent::UnloadSkinWeightProfile(FName InProfileName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkinnedMeshComponent.UnloadSkinWeightProfile"));
    struct Params_UnloadSkinWeightProfile {
        FName InProfileName; // 0x0
    }; // Size: 0x8
    Params_UnloadSkinWeightProfile params{};
    params.InProfileName = (FName)InProfileName;
    ProcessEvent(func, &params);
}
USkinnedMeshComponent* USkinnedMeshComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SkinnedMeshComponent");
    return (USkinnedMeshComponent*)res;
}
void USkinnedMeshComponent::SetCastCapsuleIndirectShadow(bool bNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkinnedMeshComponent.SetCastCapsuleIndirectShadow"));
    struct Params_SetCastCapsuleIndirectShadow {
        bool bNewValue; // 0x0
    }; // Size: 0x1
    Params_SetCastCapsuleIndirectShadow params{};
    params.bNewValue = (bool)bNewValue;
    ProcessEvent(func, &params);
}
void USkinnedMeshComponent::UnHideBoneByName(FName BoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkinnedMeshComponent.UnHideBoneByName"));
    struct Params_UnHideBoneByName {
        FName BoneName; // 0x0
    }; // Size: 0x8
    Params_UnHideBoneByName params{};
    params.BoneName = (FName)BoneName;
    ProcessEvent(func, &params);
}
int32_t USkinnedMeshComponent::GetVertexOffsetUsage(int32_t LODIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkinnedMeshComponent.GetVertexOffsetUsage"));
    struct Params_GetVertexOffsetUsage {
        int32_t LODIndex; // 0x0
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetVertexOffsetUsage params{};
    params.LODIndex = (int32_t)LODIndex;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void USkinnedMeshComponent::TransformToBoneSpace(FName BoneName, FVector InPosition, FRotator InRotation, FVector& OutPosition, FRotator& OutRotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkinnedMeshComponent.TransformToBoneSpace"));
    struct Params_TransformToBoneSpace {
        FName BoneName; // 0x0
        FVector InPosition; // 0x8
        FRotator InRotation; // 0x14
        FVector OutPosition; // 0x20
        FRotator OutRotation; // 0x2c
    }; // Size: 0x38
    Params_TransformToBoneSpace params{};
    params.BoneName = (FName)BoneName;
    params.InPosition = (FVector)InPosition;
    params.InRotation = (FRotator)InRotation;
    params.OutPosition = (FVector)OutPosition;
    params.OutRotation = (FRotator)OutRotation;
    ProcessEvent(func, &params);
    OutPosition = params.OutPosition;
    OutRotation = params.OutRotation;
}
void USkinnedMeshComponent::TransformFromBoneSpace(FName BoneName, FVector InPosition, FRotator InRotation, FVector& OutPosition, FRotator& OutRotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkinnedMeshComponent.TransformFromBoneSpace"));
    struct Params_TransformFromBoneSpace {
        FName BoneName; // 0x0
        FVector InPosition; // 0x8
        FRotator InRotation; // 0x14
        FVector OutPosition; // 0x20
        FRotator OutRotation; // 0x2c
    }; // Size: 0x38
    Params_TransformFromBoneSpace params{};
    params.BoneName = (FName)BoneName;
    params.InPosition = (FVector)InPosition;
    params.InRotation = (FRotator)InRotation;
    params.OutPosition = (FVector)OutPosition;
    params.OutRotation = (FRotator)OutRotation;
    ProcessEvent(func, &params);
    OutPosition = params.OutPosition;
    OutRotation = params.OutRotation;
}
bool USkinnedMeshComponent::SetSkinWeightProfile(FName InProfileName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkinnedMeshComponent.SetSkinWeightProfile"));
    struct Params_SetSkinWeightProfile {
        FName InProfileName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_SetSkinWeightProfile params{};
    params.InProfileName = (FName)InProfileName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void USkinnedMeshComponent::SetVertexOffsetUsage(int32_t LODIndex, int32_t Usage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkinnedMeshComponent.SetVertexOffsetUsage"));
    struct Params_SetVertexOffsetUsage {
        int32_t LODIndex; // 0x0
        int32_t Usage; // 0x4
    }; // Size: 0x8
    Params_SetVertexOffsetUsage params{};
    params.LODIndex = (int32_t)LODIndex;
    params.Usage = (int32_t)Usage;
    ProcessEvent(func, &params);
}
FTransform USkinnedMeshComponent::GetDeltaTransformFromRefPose(FName BoneName, FName BaseName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkinnedMeshComponent.GetDeltaTransformFromRefPose"));
    struct Params_GetDeltaTransformFromRefPose {
        FName BoneName; // 0x0
        FName BaseName; // 0x8
        FTransform ReturnValue; // 0x10
    }; // Size: 0x40
    Params_GetDeltaTransformFromRefPose params{};
    params.BoneName = (FName)BoneName;
    params.BaseName = (FName)BaseName;
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
void USkinnedMeshComponent::SetPostSkinningOffsets(int32_t LODIndex, TArray<FVector> Offsets) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkinnedMeshComponent.SetPostSkinningOffsets"));
    struct Params_SetPostSkinningOffsets {
        int32_t LODIndex; // 0x0
        char pad_4[0x4];
        TArray<FVector> Offsets; // 0x8
    }; // Size: 0x18
    Params_SetPostSkinningOffsets params{};
    params.LODIndex = (int32_t)LODIndex;
    params.Offsets = (TArray<FVector>)Offsets;
    ProcessEvent(func, &params);
}
void USkinnedMeshComponent::ShowMaterialSection(int32_t MaterialID, int32_t SectionIndex, bool bShow, int32_t LODIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkinnedMeshComponent.ShowMaterialSection"));
    struct Params_ShowMaterialSection {
        int32_t MaterialID; // 0x0
        int32_t SectionIndex; // 0x4
        bool bShow; // 0x8
        char pad_9[0x3];
        int32_t LODIndex; // 0xc
    }; // Size: 0x10
    Params_ShowMaterialSection params{};
    params.MaterialID = (int32_t)MaterialID;
    params.SectionIndex = (int32_t)SectionIndex;
    params.bShow = (bool)bShow;
    params.LODIndex = (int32_t)LODIndex;
    ProcessEvent(func, &params);
}
void USkinnedMeshComponent::SetVertexColorOverride_LinearColor(int32_t LODIndex, TArray<FLinearColor>& VertexColors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkinnedMeshComponent.SetVertexColorOverride_LinearColor"));
    struct Params_SetVertexColorOverride_LinearColor {
        int32_t LODIndex; // 0x0
        char pad_4[0x4];
        TArray<FLinearColor> VertexColors; // 0x8
    }; // Size: 0x18
    Params_SetVertexColorOverride_LinearColor params{};
    params.LODIndex = (int32_t)LODIndex;
    params.VertexColors = (TArray<FLinearColor>)VertexColors;
    ProcessEvent(func, &params);
    VertexColors = params.VertexColors;
}
void USkinnedMeshComponent::ShowAllMaterialSections(int32_t LODIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkinnedMeshComponent.ShowAllMaterialSections"));
    struct Params_ShowAllMaterialSections {
        int32_t LODIndex; // 0x0
    }; // Size: 0x4
    Params_ShowAllMaterialSections params{};
    params.LODIndex = (int32_t)LODIndex;
    ProcessEvent(func, &params);
}
void USkinnedMeshComponent::SetSkinWeightOverride(int32_t LODIndex, TArray<FSkelMeshSkinWeightInfo>& SkinWeights) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkinnedMeshComponent.SetSkinWeightOverride"));
    struct Params_SetSkinWeightOverride {
        int32_t LODIndex; // 0x0
        char pad_4[0x4];
        TArray<FSkelMeshSkinWeightInfo> SkinWeights; // 0x8
    }; // Size: 0x18
    Params_SetSkinWeightOverride params{};
    params.LODIndex = (int32_t)LODIndex;
    params.SkinWeights = (TArray<FSkelMeshSkinWeightInfo>)SkinWeights;
    ProcessEvent(func, &params);
    SkinWeights = params.SkinWeights;
}
void USkinnedMeshComponent::SetSkeletalMesh(USkeletalMesh* NewMesh, bool bReinitPose) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkinnedMeshComponent.SetSkeletalMesh"));
    struct Params_SetSkeletalMesh {
        USkeletalMesh* NewMesh; // 0x0
        bool bReinitPose; // 0x8
    }; // Size: 0x9
    Params_SetSkeletalMesh params{};
    params.NewMesh = (USkeletalMesh*)NewMesh;
    params.bReinitPose = (bool)bReinitPose;
    ProcessEvent(func, &params);
}
void USkinnedMeshComponent::SetCastCapsuleDirectShadow(bool bNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkinnedMeshComponent.SetCastCapsuleDirectShadow"));
    struct Params_SetCastCapsuleDirectShadow {
        bool bNewValue; // 0x0
    }; // Size: 0x1
    Params_SetCastCapsuleDirectShadow params{};
    params.bNewValue = (bool)bNewValue;
    ProcessEvent(func, &params);
}
void USkinnedMeshComponent::SetRenderStatic(bool bNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkinnedMeshComponent.SetRenderStatic"));
    struct Params_SetRenderStatic {
        bool bNewValue; // 0x0
    }; // Size: 0x1
    Params_SetRenderStatic params{};
    params.bNewValue = (bool)bNewValue;
    ProcessEvent(func, &params);
}
int32_t USkinnedMeshComponent::GetNumBones() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkinnedMeshComponent.GetNumBones"));
    struct Params_GetNumBones {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumBones params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void USkinnedMeshComponent::SetPreSkinningOffsets(int32_t LODIndex, TArray<FVector> Offsets) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkinnedMeshComponent.SetPreSkinningOffsets"));
    struct Params_SetPreSkinningOffsets {
        int32_t LODIndex; // 0x0
        char pad_4[0x4];
        TArray<FVector> Offsets; // 0x8
    }; // Size: 0x18
    Params_SetPreSkinningOffsets params{};
    params.LODIndex = (int32_t)LODIndex;
    params.Offsets = (TArray<FVector>)Offsets;
    ProcessEvent(func, &params);
}
void USkinnedMeshComponent::SetPhysicsAsset(UPhysicsAsset* NewPhysicsAsset, bool bForceReInit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkinnedMeshComponent.SetPhysicsAsset"));
    struct Params_SetPhysicsAsset {
        UPhysicsAsset* NewPhysicsAsset; // 0x0
        bool bForceReInit; // 0x8
    }; // Size: 0x9
    Params_SetPhysicsAsset params{};
    params.NewPhysicsAsset = (UPhysicsAsset*)NewPhysicsAsset;
    params.bForceReInit = (bool)bForceReInit;
    ProcessEvent(func, &params);
}
int32_t USkinnedMeshComponent::GetForcedLOD() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkinnedMeshComponent.GetForcedLOD"));
    struct Params_GetForcedLOD {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetForcedLOD params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void USkinnedMeshComponent::SetMinLOD(int32_t InNewMinLOD) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkinnedMeshComponent.SetMinLOD"));
    struct Params_SetMinLOD {
        int32_t InNewMinLOD; // 0x0
    }; // Size: 0x4
    Params_SetMinLOD params{};
    params.InNewMinLOD = (int32_t)InNewMinLOD;
    ProcessEvent(func, &params);
}
void USkinnedMeshComponent::SetMasterPoseComponent(USkinnedMeshComponent* NewMasterBoneComponent, bool bForceUpdate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkinnedMeshComponent.SetMasterPoseComponent"));
    struct Params_SetMasterPoseComponent {
        USkinnedMeshComponent* NewMasterBoneComponent; // 0x0
        bool bForceUpdate; // 0x8
    }; // Size: 0x9
    Params_SetMasterPoseComponent params{};
    params.NewMasterBoneComponent = (USkinnedMeshComponent*)NewMasterBoneComponent;
    params.bForceUpdate = (bool)bForceUpdate;
    ProcessEvent(func, &params);
}
void USkinnedMeshComponent::SetForcedLOD(int32_t InNewForcedLOD) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkinnedMeshComponent.SetForcedLOD"));
    struct Params_SetForcedLOD {
        int32_t InNewForcedLOD; // 0x0
    }; // Size: 0x4
    Params_SetForcedLOD params{};
    params.InNewForcedLOD = (int32_t)InNewForcedLOD;
    ProcessEvent(func, &params);
}
void USkinnedMeshComponent::SetCapsuleIndirectShadowMinVisibility(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkinnedMeshComponent.SetCapsuleIndirectShadowMinVisibility"));
    struct Params_SetCapsuleIndirectShadowMinVisibility {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetCapsuleIndirectShadowMinVisibility params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
FName USkinnedMeshComponent::GetSocketBoneName(FName InSocketName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkinnedMeshComponent.GetSocketBoneName"));
    struct Params_GetSocketBoneName {
        FName InSocketName; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetSocketBoneName params{};
    params.InSocketName = (FName)InSocketName;
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
bool USkinnedMeshComponent::IsUsingSkinWeightProfile() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkinnedMeshComponent.IsUsingSkinWeightProfile"));
    struct Params_IsUsingSkinWeightProfile {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsUsingSkinWeightProfile params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FName USkinnedMeshComponent::FindClosestBone_K2(FVector TestLocation, FVector& BoneLocation, float IgnoreScale, bool bRequirePhysicsAsset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkinnedMeshComponent.FindClosestBone_K2"));
    struct Params_FindClosestBone_K2 {
        FVector TestLocation; // 0x0
        FVector BoneLocation; // 0xc
        float IgnoreScale; // 0x18
        bool bRequirePhysicsAsset; // 0x1c
        char pad_1d[0x3];
        FName ReturnValue; // 0x20
    }; // Size: 0x28
    Params_FindClosestBone_K2 params{};
    params.TestLocation = (FVector)TestLocation;
    params.BoneLocation = (FVector)BoneLocation;
    params.IgnoreScale = (float)IgnoreScale;
    params.bRequirePhysicsAsset = (bool)bRequirePhysicsAsset;
    ProcessEvent(func, &params);
    BoneLocation = params.BoneLocation;
    return (FName)params.ReturnValue;
}
bool USkinnedMeshComponent::IsMaterialSectionShown(int32_t MaterialID, int32_t LODIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkinnedMeshComponent.IsMaterialSectionShown"));
    struct Params_IsMaterialSectionShown {
        int32_t MaterialID; // 0x0
        int32_t LODIndex; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsMaterialSectionShown params{};
    params.MaterialID = (int32_t)MaterialID;
    params.LODIndex = (int32_t)LODIndex;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool USkinnedMeshComponent::IsBoneHiddenByName(FName BoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkinnedMeshComponent.IsBoneHiddenByName"));
    struct Params_IsBoneHiddenByName {
        FName BoneName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsBoneHiddenByName params{};
    params.BoneName = (FName)BoneName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void USkinnedMeshComponent::HideBoneByName(FName BoneName, EPhysBodyOp PhysBodyOption) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkinnedMeshComponent.HideBoneByName"));
    struct Params_HideBoneByName {
        FName BoneName; // 0x0
        EPhysBodyOp PhysBodyOption; // 0x8
    }; // Size: 0x9
    Params_HideBoneByName params{};
    params.BoneName = (FName)BoneName;
    params.PhysBodyOption = (EPhysBodyOp)PhysBodyOption;
    ProcessEvent(func, &params);
}
bool USkinnedMeshComponent::GetTwistAndSwingAngleOfDeltaRotationFromRefPose(FName BoneName, float& OutTwistAngle, float& OutSwingAngle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkinnedMeshComponent.GetTwistAndSwingAngleOfDeltaRotationFromRefPose"));
    struct Params_GetTwistAndSwingAngleOfDeltaRotationFromRefPose {
        FName BoneName; // 0x0
        float OutTwistAngle; // 0x8
        float OutSwingAngle; // 0xc
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GetTwistAndSwingAngleOfDeltaRotationFromRefPose params{};
    params.BoneName = (FName)BoneName;
    params.OutTwistAngle = (float)OutTwistAngle;
    params.OutSwingAngle = (float)OutSwingAngle;
    ProcessEvent(func, &params);
    OutSwingAngle = params.OutSwingAngle;
    OutTwistAngle = params.OutTwistAngle;
    return (bool)params.ReturnValue;
}
void USkinnedMeshComponent::ClearSkinWeightProfile() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkinnedMeshComponent.ClearSkinWeightProfile"));
    struct Params_ClearSkinWeightProfile {
    }; // Size: 0x0
    Params_ClearSkinWeightProfile params{};
    ProcessEvent(func, &params);
}
FVector USkinnedMeshComponent::GetRefPosePosition(int32_t BoneIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkinnedMeshComponent.GetRefPosePosition"));
    struct Params_GetRefPosePosition {
        int32_t BoneIndex; // 0x0
        FVector ReturnValue; // 0x4
    }; // Size: 0x10
    Params_GetRefPosePosition params{};
    params.BoneIndex = (int32_t)BoneIndex;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FName USkinnedMeshComponent::GetParentBone(FName BoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkinnedMeshComponent.GetParentBone"));
    struct Params_GetParentBone {
        FName BoneName; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetParentBone params{};
    params.BoneName = (FName)BoneName;
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
int32_t USkinnedMeshComponent::GetNumLODs() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkinnedMeshComponent.GetNumLODs"));
    struct Params_GetNumLODs {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumLODs params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FName USkinnedMeshComponent::GetCurrentSkinWeightProfileName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkinnedMeshComponent.GetCurrentSkinWeightProfileName"));
    struct Params_GetCurrentSkinWeightProfileName {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetCurrentSkinWeightProfileName params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
FName USkinnedMeshComponent::GetBoneName(int32_t BoneIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkinnedMeshComponent.GetBoneName"));
    struct Params_GetBoneName {
        int32_t BoneIndex; // 0x0
        FName ReturnValue; // 0x4
    }; // Size: 0xc
    Params_GetBoneName params{};
    params.BoneIndex = (int32_t)BoneIndex;
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
int32_t USkinnedMeshComponent::GetBoneIndex(FName BoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkinnedMeshComponent.GetBoneIndex"));
    struct Params_GetBoneIndex {
        FName BoneName; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetBoneIndex params{};
    params.BoneName = (FName)BoneName;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void USkinnedMeshComponent::ClearVertexColorOverride(int32_t LODIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkinnedMeshComponent.ClearVertexColorOverride"));
    struct Params_ClearVertexColorOverride {
        int32_t LODIndex; // 0x0
    }; // Size: 0x4
    Params_ClearVertexColorOverride params{};
    params.LODIndex = (int32_t)LODIndex;
    ProcessEvent(func, &params);
}
void USkinnedMeshComponent::ClearSkinWeightOverride(int32_t LODIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkinnedMeshComponent.ClearSkinWeightOverride"));
    struct Params_ClearSkinWeightOverride {
        int32_t LODIndex; // 0x0
    }; // Size: 0x4
    Params_ClearSkinWeightOverride params{};
    params.LODIndex = (int32_t)LODIndex;
    ProcessEvent(func, &params);
}
bool USkinnedMeshComponent::BoneIsChildOf(FName BoneName, FName ParentBoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkinnedMeshComponent.BoneIsChildOf"));
    struct Params_BoneIsChildOf {
        FName BoneName; // 0x0
        FName ParentBoneName; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_BoneIsChildOf params{};
    params.BoneName = (FName)BoneName;
    params.ParentBoneName = (FName)ParentBoneName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
