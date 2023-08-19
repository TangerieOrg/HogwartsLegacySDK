#pragma once
#include <cstdint>
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
#include "UMeshComponent.hpp"
class USkeletalMesh;
class UPhysicsAsset;
#pragma pack(push, 1)
class USkinnedMeshComponent : public UMeshComponent {
public:
    USkeletalMesh* SkeletalMesh; // 0x4b0
    char pad_4b8[0x8];
    TArray<ESkinCacheUsage> SkinCacheUsage; // 0x4c0
    TArray<FVertexOffsetUsage> VertexOffsetUsage; // 0x4d0
    char pad_4e0[0xf8];
    UPhysicsAsset* PhysicsAssetOverride; // 0x5d8
    int32_t ForcedLodModel; // 0x5e0
    int32_t MinLodModel; // 0x5e4
    char pad_5e8[0x8];
    float StreamingDistanceMultiplier; // 0x5f0
    char pad_5f4[0xc];
    TArray<FSkelMeshComponentLODInfo> LODInfo; // 0x600
    char pad_610[0x24];
    EVisibilityBasedAnimTickOption VisibilityBasedAnimTickOption; // 0x634
    char pad_635[0x1];
    uint8_t pad_bitfield_636_0 : 3;
    uint8_t bOverrideMinLOD : 1; // 0x636
    uint8_t bUseBoundsFromMasterPoseComponent : 1; // 0x636
    uint8_t bForceWireframe : 1; // 0x636
    uint8_t bDisplayBones : 1; // 0x636
    uint8_t bDisableMorphTarget : 1; // 0x636
    uint8_t bHideSkin : 1; // 0x637
    uint8_t bPerBoneMotionBlur : 1; // 0x637
    uint8_t bComponentUseFixedSkelBounds : 1; // 0x637
    uint8_t bConsiderAllBodiesForBounds : 1; // 0x637
    uint8_t bSyncAttachParentLOD : 1; // 0x637
    uint8_t bCanHighlightSelectedSections : 1; // 0x637
    uint8_t bRecentlyRendered : 1; // 0x637
    uint8_t bCalculateRecentlyRendered : 1; // 0x637
    uint8_t bCastCapsuleDirectShadow : 1; // 0x638
    uint8_t bCastCapsuleIndirectShadow : 1; // 0x638
    uint8_t bCPUSkinning : 1; // 0x638
    uint8_t bEnableUpdateRateOptimizations : 1; // 0x638
    uint8_t bDisplayDebugUpdateRateOptimizations : 1; // 0x638
    uint8_t bRenderStatic : 1; // 0x638
    uint8_t bIgnoreMasterPoseComponentLOD : 1; // 0x638
    uint8_t pad_bitfield_638_7 : 1;
    uint8_t pad_bitfield_639_0 : 1;
    uint8_t bCachedLocalBoundsUpToDate : 1; // 0x639
    uint8_t pad_bitfield_639_2 : 1;
    uint8_t bForceMeshObjectUpdate : 1; // 0x639
    uint8_t pad_bitfield_639_4 : 4;
    char pad_63a[0x2];
    float CapsuleIndirectShadowMinVisibility; // 0x63c
    char pad_640[0x10];
    FBoxSphereBounds CachedWorldSpaceBounds; // 0x650
    char pad_66c[0x4];
    FMatrix CachedWorldToLocalTransform; // 0x670
    char pad_6b0[0x20];
    static USkinnedMeshComponent* StaticClass();
    void UnloadSkinWeightProfile(FName InProfileName);
    void UnHideBoneByName(FName BoneName);
    void TransformToBoneSpace(FName BoneName, FVector InPosition, FRotator InRotation, FVector& OutPosition, FRotator& OutRotation);
    void TransformFromBoneSpace(FName BoneName, FVector InPosition, FRotator InRotation, FVector& OutPosition, FRotator& OutRotation);
    void ShowMaterialSection(int32_t MaterialID, int32_t SectionIndex, bool bShow, int32_t LODIndex);
    void ShowAllMaterialSections(int32_t LODIndex);
    void SetVertexOffsetUsage(int32_t LODIndex, int32_t Usage);
    void SetVertexColorOverride_LinearColor(int32_t LODIndex, TArray<FLinearColor>& VertexColors);
    bool SetSkinWeightProfile(FName InProfileName);
    void SetSkinWeightOverride(int32_t LODIndex, TArray<FSkelMeshSkinWeightInfo>& SkinWeights);
    void SetSkeletalMesh(USkeletalMesh* NewMesh, bool bReinitPose);
    void SetRenderStatic(bool bNewValue);
    void SetPreSkinningOffsets(int32_t LODIndex, TArray<FVector> Offsets);
    void SetPostSkinningOffsets(int32_t LODIndex, TArray<FVector> Offsets);
    void SetPhysicsAsset(UPhysicsAsset* NewPhysicsAsset, bool bForceReInit);
    void SetMinLOD(int32_t InNewMinLOD);
    void SetMasterPoseComponent(USkinnedMeshComponent* NewMasterBoneComponent, bool bForceUpdate);
    void SetForcedLOD(int32_t InNewForcedLOD);
    void SetCastCapsuleIndirectShadow(bool bNewValue);
    void SetCastCapsuleDirectShadow(bool bNewValue);
    void SetCapsuleIndirectShadowMinVisibility(float NewValue);
    bool IsUsingSkinWeightProfile();
    bool IsMaterialSectionShown(int32_t MaterialID, int32_t LODIndex);
    bool IsBoneHiddenByName(FName BoneName);
    void HideBoneByName(FName BoneName, EPhysBodyOp PhysBodyOption);
    int32_t GetVertexOffsetUsage(int32_t LODIndex);
    bool GetTwistAndSwingAngleOfDeltaRotationFromRefPose(FName BoneName, float& OutTwistAngle, float& OutSwingAngle);
    FName GetSocketBoneName(FName InSocketName);
    FVector GetRefPosePosition(int32_t BoneIndex);
    FName GetParentBone(FName BoneName);
    int32_t GetNumLODs();
    int32_t GetNumBones();
    int32_t GetForcedLOD();
    FTransform GetDeltaTransformFromRefPose(FName BoneName, FName BaseName);
    FName GetCurrentSkinWeightProfileName();
    FName GetBoneName(int32_t BoneIndex);
    int32_t GetBoneIndex(FName BoneName);
    FName FindClosestBone_K2(FVector TestLocation, FVector& BoneLocation, float IgnoreScale, bool bRequirePhysicsAsset);
    void ClearVertexColorOverride(int32_t LODIndex);
    void ClearSkinWeightProfile();
    void ClearSkinWeightOverride(int32_t LODIndex);
    bool BoneIsChildOf(FName BoneName, FName ParentBoneName);
}; // Size: 0x6d0
#pragma pack(pop)
