#pragma once
#include <cstdint>
#include "EBoneSpaces\Type.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "USkinnedMeshComponent.hpp"
class USkeletalMeshComponent;
#pragma pack(push, 1)
class UPoseableMeshComponent : public USkinnedMeshComponent {
public:
    char pad_6d0[0x160];
    static UPoseableMeshComponent* StaticClass();
    void SetBoneTransformByName(FName BoneName, FTransform& InTransform, EBoneSpaces::Type BoneSpace);
    void SetBoneSpaceTransformByName(FName BoneName, FTransform& InTransform);
    void SetBoneScaleByName(FName BoneName, FVector InScale3D, EBoneSpaces::Type BoneSpace);
    void SetBoneRotationByName(FName BoneName, FRotator InRotation, EBoneSpaces::Type BoneSpace);
    void SetBoneLocationByName(FName BoneName, FVector InLocation, EBoneSpaces::Type BoneSpace);
    void ResetBoneTransformByName(FName BoneName);
    FTransform GetBoneTransformByName(FName BoneName, EBoneSpaces::Type BoneSpace);
    FTransform GetBoneSpaceTransformByName(FName BoneName);
    FVector GetBoneScaleByName(FName BoneName, EBoneSpaces::Type BoneSpace);
    FRotator GetBoneRotationByName(FName BoneName, EBoneSpaces::Type BoneSpace);
    FVector GetBoneLocationByName(FName BoneName, EBoneSpaces::Type BoneSpace);
    void CopyPoseFromSkeletalComponent(USkeletalMeshComponent* InComponentToCopy);
}; // Size: 0x830
#pragma pack(pop)
