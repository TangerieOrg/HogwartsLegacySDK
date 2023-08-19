#pragma once
#include <cstdint>
#include "EAxis\Type.hpp"
#include "FBoneMirrorInfo.hpp"
#include "FBoxSphereBounds.hpp"
#include "FPerPlatformBool.hpp"
#include "FPerPlatformInt.hpp"
#include "FSkeletalMaterial.hpp"
#include "FSkeletalMeshLODInfo.hpp"
#include "FSkeletalMeshSamplingInfo.hpp"
#include "FSkinWeightProfileInfo.hpp"
#include "FVector.hpp"
#include "UStreamableRenderAsset.hpp"
class UClothingAssetBase;
class USkeleton;
class UNodeMappingContainer;
class UBodySetup;
class UAssetUserData;
class UPhysicsAsset;
class UMorphTarget;
class UClass;
class USkeletalMeshSocket;
class USkeletalMeshLODSettings;
class UBlueprint;
struct FTransform;
#pragma pack(push, 1)
class USkeletalMesh : public UStreamableRenderAsset {
public:
    char pad_60[0x20];
    USkeleton* Skeleton; // 0x80
    FBoxSphereBounds ImportedBounds; // 0x88
    FBoxSphereBounds ExtendedBounds; // 0xa4
    FVector PositiveBoundsExtension; // 0xc0
    FVector NegativeBoundsExtension; // 0xcc
    TArray<FSkeletalMaterial> Materials; // 0xd8
    TArray<FBoneMirrorInfo> SkelMirrorTable; // 0xe8
    TArray<FSkeletalMeshLODInfo> LODInfo; // 0xf8
    char pad_108[0x50];
    FPerPlatformInt MinLOD; // 0x158
    FPerPlatformBool DisableBelowMinLodStripping; // 0x15c
    EAxis::Type SkelMirrorAxis; // 0x15d
    EAxis::Type SkelMirrorFlipAxis; // 0x15e
    uint8_t bUseFullPrecisionUVs : 1; // 0x15f
    uint8_t bUseHighPrecisionTangentBasis : 1; // 0x15f
    uint8_t bHasBeenSimplified : 1; // 0x15f
    uint8_t bHasVertexColors : 1; // 0x15f
    uint8_t pad_bitfield_15f_4 : 1;
    uint8_t bEnablePerPolyCollision : 1; // 0x15f
    uint8_t pad_bitfield_15f_6 : 2;
    UBodySetup* BodySetup; // 0x160
    UPhysicsAsset* PhysicsAsset; // 0x168
    UPhysicsAsset* ShadowPhysicsAsset; // 0x170
    TArray<UNodeMappingContainer*> NodeMappingData; // 0x178
    uint8_t bSupportRayTracing : 1; // 0x188
    uint8_t pad_bitfield_188_1 : 7;
    char pad_189[0x3];
    int32_t RayTracingMinLOD; // 0x18c
    TArray<UMorphTarget*> MorphTargets; // 0x190
    char pad_1a0[0x178];
    UClass* PostProcessAnimBlueprint; // 0x318
    TArray<UClothingAssetBase*> MeshClothingAssets; // 0x320
    FSkeletalMeshSamplingInfo SamplingInfo; // 0x330
    TArray<UAssetUserData*> AssetUserData; // 0x360
    TArray<USkeletalMeshSocket*> Sockets; // 0x370
    char pad_380[0x10];
    TArray<FSkinWeightProfileInfo> SkinWeightProfiles; // 0x390
    static USkeletalMesh* StaticClass();
    void SetMorphTargets(TArray<UMorphTarget*>& InMorphTargets);
    void SetMeshClothingAssets(TArray<UClothingAssetBase*>& InMeshClothingAssets);
    void SetMaterials(TArray<FSkeletalMaterial>& InMaterials);
    void SetLODSettings(USkeletalMeshLODSettings* InLODSettings);
    void SetDefaultAnimatingRig();
    int32_t NumSockets();
    TArray<FString> K2_GetAllMorphTargetNames();
    bool IsSectionUsingCloth(int32_t InSectionIndex, bool bCheckCorrespondingSections);
    USkeletalMeshSocket* GetSocketByIndex(int32_t Index);
    USkeleton* GetSkeleton();
    UPhysicsAsset* GetShadowPhysicsAsset();
    UPhysicsAsset* GetPhysicsAsset();
    TArray<UNodeMappingContainer*> GetNodeMappingData();
    UNodeMappingContainer* GetNodeMappingContainer(UBlueprint* SourceAsset);
    TArray<UMorphTarget*> GetMorphTargets();
    TArray<UClothingAssetBase*> GetMeshClothingAssets();
    TArray<FSkeletalMaterial> GetMaterials();
    USkeletalMeshLODSettings* GetLODSettings();
    FBoxSphereBounds GetImportedBounds();
    void GetDefaultAnimatingRig();
    FBoxSphereBounds GetBounds();
    USkeletalMeshSocket* FindSocketInfo(FName InSocketName, FTransform& OutTransform, int32_t& OutBoneIndex, int32_t& OutIndex);
    USkeletalMeshSocket* FindSocketAndIndex(FName InSocketName, int32_t& OutIndex);
    USkeletalMeshSocket* FindSocket(FName InSocketName);
}; // Size: 0x3a0
#pragma pack(pop)
