#include "EAxis\Type.hpp"
#include "FBoneMirrorInfo.hpp"
#include "FBoxSphereBounds.hpp"
#include "FPerPlatformBool.hpp"
#include "FPerPlatformInt.hpp"
#include "FSkeletalMaterial.hpp"
#include "FSkeletalMeshLODInfo.hpp"
#include "FSkeletalMeshSamplingInfo.hpp"
#include "FSkinWeightProfileInfo.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UAssetUserData.hpp"
#include "UBlueprint.hpp"
#include "UBodySetup.hpp"
#include "UClass.hpp"
#include "UClothingAssetBase.hpp"
#include "UFunction.hpp"
#include "UMorphTarget.hpp"
#include "UNodeMappingContainer.hpp"
#include "UPhysicsAsset.hpp"
#include "USkeletalMesh.hpp"
#include "USkeletalMeshLODSettings.hpp"
#include "USkeletalMeshSocket.hpp"
#include "USkeleton.hpp"
#include "UStreamableRenderAsset.hpp"
USkeletalMesh* USkeletalMesh::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SkeletalMesh");
    return (USkeletalMesh*)res;
}
void USkeletalMesh::SetMorphTargets(TArray<UMorphTarget*>& InMorphTargets) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMesh.SetMorphTargets"));
    struct Params_SetMorphTargets {
        TArray<UMorphTarget*> InMorphTargets; // 0x0
    }; // Size: 0x10
    Params_SetMorphTargets params{};
    params.InMorphTargets = (TArray<UMorphTarget*>)InMorphTargets;
    ProcessEvent(func, &params);
    InMorphTargets = params.InMorphTargets;
}
void USkeletalMesh::SetMeshClothingAssets(TArray<UClothingAssetBase*>& InMeshClothingAssets) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMesh.SetMeshClothingAssets"));
    struct Params_SetMeshClothingAssets {
        TArray<UClothingAssetBase*> InMeshClothingAssets; // 0x0
    }; // Size: 0x10
    Params_SetMeshClothingAssets params{};
    params.InMeshClothingAssets = (TArray<UClothingAssetBase*>)InMeshClothingAssets;
    ProcessEvent(func, &params);
    InMeshClothingAssets = params.InMeshClothingAssets;
}
void USkeletalMesh::SetMaterials(TArray<FSkeletalMaterial>& InMaterials) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMesh.SetMaterials"));
    struct Params_SetMaterials {
        TArray<FSkeletalMaterial> InMaterials; // 0x0
    }; // Size: 0x10
    Params_SetMaterials params{};
    params.InMaterials = (TArray<FSkeletalMaterial>)InMaterials;
    ProcessEvent(func, &params);
    InMaterials = params.InMaterials;
}
bool USkeletalMesh::IsSectionUsingCloth(int32_t InSectionIndex, bool bCheckCorrespondingSections) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMesh.IsSectionUsingCloth"));
    struct Params_IsSectionUsingCloth {
        int32_t InSectionIndex; // 0x0
        bool bCheckCorrespondingSections; // 0x4
        bool ReturnValue; // 0x5
    }; // Size: 0x6
    Params_IsSectionUsingCloth params{};
    params.InSectionIndex = (int32_t)InSectionIndex;
    params.bCheckCorrespondingSections = (bool)bCheckCorrespondingSections;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void USkeletalMesh::SetLODSettings(USkeletalMeshLODSettings* InLODSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMesh.SetLODSettings"));
    struct Params_SetLODSettings {
        USkeletalMeshLODSettings* InLODSettings; // 0x0
    }; // Size: 0x8
    Params_SetLODSettings params{};
    params.InLODSettings = (USkeletalMeshLODSettings*)InLODSettings;
    ProcessEvent(func, &params);
}
void USkeletalMesh::SetDefaultAnimatingRig() {}
int32_t USkeletalMesh::NumSockets() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMesh.NumSockets"));
    struct Params_NumSockets {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_NumSockets params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FBoxSphereBounds USkeletalMesh::GetBounds() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMesh.GetBounds"));
    struct Params_GetBounds {
        FBoxSphereBounds ReturnValue; // 0x0
    }; // Size: 0x1c
    Params_GetBounds params{};
    ProcessEvent(func, &params);
    return (FBoxSphereBounds)params.ReturnValue;
}
TArray<FSkeletalMaterial> USkeletalMesh::GetMaterials() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMesh.GetMaterials"));
    struct Params_GetMaterials {
        TArray<FSkeletalMaterial> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetMaterials params{};
    ProcessEvent(func, &params);
    return (TArray<FSkeletalMaterial>)params.ReturnValue;
}
TArray<FString> USkeletalMesh::K2_GetAllMorphTargetNames() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMesh.K2_GetAllMorphTargetNames"));
    struct Params_K2_GetAllMorphTargetNames {
        TArray<FString> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_K2_GetAllMorphTargetNames params{};
    ProcessEvent(func, &params);
    return (TArray<FString>)params.ReturnValue;
}
TArray<UNodeMappingContainer*> USkeletalMesh::GetNodeMappingData() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMesh.GetNodeMappingData"));
    struct Params_GetNodeMappingData {
        TArray<UNodeMappingContainer*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetNodeMappingData params{};
    ProcessEvent(func, &params);
    return (TArray<UNodeMappingContainer*>)params.ReturnValue;
}
USkeletalMeshSocket* USkeletalMesh::GetSocketByIndex(int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMesh.GetSocketByIndex"));
    struct Params_GetSocketByIndex {
        int32_t Index; // 0x0
        char pad_4[0x4];
        USkeletalMeshSocket* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetSocketByIndex params{};
    params.Index = (int32_t)Index;
    ProcessEvent(func, &params);
    return (USkeletalMeshSocket*)params.ReturnValue;
}
USkeleton* USkeletalMesh::GetSkeleton() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMesh.GetSkeleton"));
    struct Params_GetSkeleton {
        USkeleton* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSkeleton params{};
    ProcessEvent(func, &params);
    return (USkeleton*)params.ReturnValue;
}
UPhysicsAsset* USkeletalMesh::GetShadowPhysicsAsset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMesh.GetShadowPhysicsAsset"));
    struct Params_GetShadowPhysicsAsset {
        UPhysicsAsset* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetShadowPhysicsAsset params{};
    ProcessEvent(func, &params);
    return (UPhysicsAsset*)params.ReturnValue;
}
UPhysicsAsset* USkeletalMesh::GetPhysicsAsset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMesh.GetPhysicsAsset"));
    struct Params_GetPhysicsAsset {
        UPhysicsAsset* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPhysicsAsset params{};
    ProcessEvent(func, &params);
    return (UPhysicsAsset*)params.ReturnValue;
}
USkeletalMeshSocket* USkeletalMesh::FindSocketInfo(FName InSocketName, FTransform& OutTransform, int32_t& OutBoneIndex, int32_t& OutIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMesh.FindSocketInfo"));
    struct Params_FindSocketInfo {
        FName InSocketName; // 0x0
        char pad_8[0x8];
        FTransform OutTransform; // 0x10
        int32_t OutBoneIndex; // 0x40
        int32_t OutIndex; // 0x44
        USkeletalMeshSocket* ReturnValue; // 0x48
    }; // Size: 0x50
    Params_FindSocketInfo params{};
    params.InSocketName = (FName)InSocketName;
    params.OutTransform = (FTransform)OutTransform;
    params.OutBoneIndex = (int32_t)OutBoneIndex;
    params.OutIndex = (int32_t)OutIndex;
    ProcessEvent(func, &params);
    OutTransform = params.OutTransform;
    OutBoneIndex = params.OutBoneIndex;
    OutIndex = params.OutIndex;
    return (USkeletalMeshSocket*)params.ReturnValue;
}
UNodeMappingContainer* USkeletalMesh::GetNodeMappingContainer(UBlueprint* SourceAsset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMesh.GetNodeMappingContainer"));
    struct Params_GetNodeMappingContainer {
        UBlueprint* SourceAsset; // 0x0
        UNodeMappingContainer* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetNodeMappingContainer params{};
    params.SourceAsset = (UBlueprint*)SourceAsset;
    ProcessEvent(func, &params);
    return (UNodeMappingContainer*)params.ReturnValue;
}
TArray<UMorphTarget*> USkeletalMesh::GetMorphTargets() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMesh.GetMorphTargets"));
    struct Params_GetMorphTargets {
        TArray<UMorphTarget*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetMorphTargets params{};
    ProcessEvent(func, &params);
    return (TArray<UMorphTarget*>)params.ReturnValue;
}
TArray<UClothingAssetBase*> USkeletalMesh::GetMeshClothingAssets() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMesh.GetMeshClothingAssets"));
    struct Params_GetMeshClothingAssets {
        TArray<UClothingAssetBase*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetMeshClothingAssets params{};
    ProcessEvent(func, &params);
    return (TArray<UClothingAssetBase*>)params.ReturnValue;
}
USkeletalMeshLODSettings* USkeletalMesh::GetLODSettings() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMesh.GetLODSettings"));
    struct Params_GetLODSettings {
        USkeletalMeshLODSettings* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetLODSettings params{};
    ProcessEvent(func, &params);
    return (USkeletalMeshLODSettings*)params.ReturnValue;
}
FBoxSphereBounds USkeletalMesh::GetImportedBounds() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMesh.GetImportedBounds"));
    struct Params_GetImportedBounds {
        FBoxSphereBounds ReturnValue; // 0x0
    }; // Size: 0x1c
    Params_GetImportedBounds params{};
    ProcessEvent(func, &params);
    return (FBoxSphereBounds)params.ReturnValue;
}
void USkeletalMesh::GetDefaultAnimatingRig() {}
USkeletalMeshSocket* USkeletalMesh::FindSocketAndIndex(FName InSocketName, int32_t& OutIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMesh.FindSocketAndIndex"));
    struct Params_FindSocketAndIndex {
        FName InSocketName; // 0x0
        int32_t OutIndex; // 0x8
        char pad_c[0x4];
        USkeletalMeshSocket* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_FindSocketAndIndex params{};
    params.InSocketName = (FName)InSocketName;
    params.OutIndex = (int32_t)OutIndex;
    ProcessEvent(func, &params);
    OutIndex = params.OutIndex;
    return (USkeletalMeshSocket*)params.ReturnValue;
}
USkeletalMeshSocket* USkeletalMesh::FindSocket(FName InSocketName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMesh.FindSocket"));
    struct Params_FindSocket {
        FName InSocketName; // 0x0
        USkeletalMeshSocket* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_FindSocket params{};
    params.InSocketName = (FName)InSocketName;
    ProcessEvent(func, &params);
    return (USkeletalMeshSocket*)params.ReturnValue;
}
