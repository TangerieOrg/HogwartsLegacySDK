#pragma once
#include <cstdint>
#include "FBoneParticleTracker.hpp"
#include "FBonySkeletonTimerProfile.hpp"
#include "FBonySkeletonTimerProfiles.hpp"
#include "UActorComponent.hpp"
class USkeletalMesh;
class USkeletalMeshComponent;
class UPhysicsAsset;
class USkinFXComponent;
#pragma pack(push, 1)
class UBonySkeletonComponent : public UActorComponent {
public:
    USkeletalMesh* SkeletonMesh; // 0xc8
    UPhysicsAsset* SkeletonPhysiscsAssetOveride; // 0xd0
    FBonySkeletonTimerProfiles TimerProfiles; // 0xd8
    char pad_140[0x10];
    USkeletalMeshComponent* SkeletonMeshComponent; // 0x150
    FBonySkeletonTimerProfile ActiveTimerProfile; // 0x158
    FBoneParticleTracker BoneParticles; // 0x1b0
    USkinFXComponent* SkinFXComponent; // 0x1c0
    float Age; // 0x1c8
    bool bInitialized; // 0x1cc
    char pad_1cd[0x3];
    static UBonySkeletonComponent* StaticClass();
    bool Initialize(FName ProfileName);
    void Abort();
}; // Size: 0x1d0
#pragma pack(pop)
