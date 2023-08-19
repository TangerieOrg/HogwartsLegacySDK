#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UGeometryCache.hpp"
#include "UGroomAsset.hpp"
#include "UGroomBindingAsset.hpp"
#include "UGroomBlueprintLibrary.hpp"
#include "USkeletalMesh.hpp"
UGroomBlueprintLibrary* UGroomBlueprintLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/HairStrandsCore.GroomBlueprintLibrary");
    return (UGroomBlueprintLibrary*)res;
}
UGroomBindingAsset* UGroomBlueprintLibrary::CreateNewGroomBindingAssetWithPath(FString InDesiredPackagePath, UGroomAsset* InGroomAsset, USkeletalMesh* InSkeletalMesh, int32_t InNumInterpolationPoints, USkeletalMesh* InSourceSkeletalMeshForTransfer, int32_t InMatchingSection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAssetWithPath"));
    struct Params_CreateNewGroomBindingAssetWithPath {
        FString InDesiredPackagePath; // 0x0
        UGroomAsset* InGroomAsset; // 0x10
        USkeletalMesh* InSkeletalMesh; // 0x18
        int32_t InNumInterpolationPoints; // 0x20
        char pad_24[0x4];
        USkeletalMesh* InSourceSkeletalMeshForTransfer; // 0x28
        int32_t InMatchingSection; // 0x30
        char pad_34[0x4];
        UGroomBindingAsset* ReturnValue; // 0x38
    }; // Size: 0x40
    Params_CreateNewGroomBindingAssetWithPath params{};
    params.InDesiredPackagePath = (FString)InDesiredPackagePath;
    params.InGroomAsset = (UGroomAsset*)InGroomAsset;
    params.InSkeletalMesh = (USkeletalMesh*)InSkeletalMesh;
    params.InNumInterpolationPoints = (int32_t)InNumInterpolationPoints;
    params.InSourceSkeletalMeshForTransfer = (USkeletalMesh*)InSourceSkeletalMeshForTransfer;
    params.InMatchingSection = (int32_t)InMatchingSection;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UGroomBindingAsset*)params.ReturnValue;
}
UGroomBindingAsset* UGroomBlueprintLibrary::CreateNewGroomBindingAsset(UGroomAsset* InGroomAsset, USkeletalMesh* InSkeletalMesh, int32_t InNumInterpolationPoints, USkeletalMesh* InSourceSkeletalMeshForTransfer, int32_t InMatchingSection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAsset"));
    struct Params_CreateNewGroomBindingAsset {
        UGroomAsset* InGroomAsset; // 0x0
        USkeletalMesh* InSkeletalMesh; // 0x8
        int32_t InNumInterpolationPoints; // 0x10
        char pad_14[0x4];
        USkeletalMesh* InSourceSkeletalMeshForTransfer; // 0x18
        int32_t InMatchingSection; // 0x20
        char pad_24[0x4];
        UGroomBindingAsset* ReturnValue; // 0x28
    }; // Size: 0x30
    Params_CreateNewGroomBindingAsset params{};
    params.InGroomAsset = (UGroomAsset*)InGroomAsset;
    params.InSkeletalMesh = (USkeletalMesh*)InSkeletalMesh;
    params.InNumInterpolationPoints = (int32_t)InNumInterpolationPoints;
    params.InSourceSkeletalMeshForTransfer = (USkeletalMesh*)InSourceSkeletalMeshForTransfer;
    params.InMatchingSection = (int32_t)InMatchingSection;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UGroomBindingAsset*)params.ReturnValue;
}
UGroomBindingAsset* UGroomBlueprintLibrary::CreateNewGeometryCacheGroomBindingAssetWithPath(FString DesiredPackagePath, UGroomAsset* GroomAsset, UGeometryCache* GeometryCache, int32_t NumInterpolationPoints, UGeometryCache* SourceGeometryCacheForTransfer, int32_t MatchingSection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HairStrandsCore.GroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAssetWithPath"));
    struct Params_CreateNewGeometryCacheGroomBindingAssetWithPath {
        FString DesiredPackagePath; // 0x0
        UGroomAsset* GroomAsset; // 0x10
        UGeometryCache* GeometryCache; // 0x18
        int32_t NumInterpolationPoints; // 0x20
        char pad_24[0x4];
        UGeometryCache* SourceGeometryCacheForTransfer; // 0x28
        int32_t MatchingSection; // 0x30
        char pad_34[0x4];
        UGroomBindingAsset* ReturnValue; // 0x38
    }; // Size: 0x40
    Params_CreateNewGeometryCacheGroomBindingAssetWithPath params{};
    params.DesiredPackagePath = (FString)DesiredPackagePath;
    params.GroomAsset = (UGroomAsset*)GroomAsset;
    params.GeometryCache = (UGeometryCache*)GeometryCache;
    params.NumInterpolationPoints = (int32_t)NumInterpolationPoints;
    params.SourceGeometryCacheForTransfer = (UGeometryCache*)SourceGeometryCacheForTransfer;
    params.MatchingSection = (int32_t)MatchingSection;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UGroomBindingAsset*)params.ReturnValue;
}
UGroomBindingAsset* UGroomBlueprintLibrary::CreateNewGeometryCacheGroomBindingAsset(UGroomAsset* GroomAsset, UGeometryCache* GeometryCache, int32_t NumInterpolationPoints, UGeometryCache* SourceGeometryCacheForTransfer, int32_t MatchingSection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HairStrandsCore.GroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAsset"));
    struct Params_CreateNewGeometryCacheGroomBindingAsset {
        UGroomAsset* GroomAsset; // 0x0
        UGeometryCache* GeometryCache; // 0x8
        int32_t NumInterpolationPoints; // 0x10
        char pad_14[0x4];
        UGeometryCache* SourceGeometryCacheForTransfer; // 0x18
        int32_t MatchingSection; // 0x20
        char pad_24[0x4];
        UGroomBindingAsset* ReturnValue; // 0x28
    }; // Size: 0x30
    Params_CreateNewGeometryCacheGroomBindingAsset params{};
    params.GroomAsset = (UGroomAsset*)GroomAsset;
    params.GeometryCache = (UGeometryCache*)GeometryCache;
    params.NumInterpolationPoints = (int32_t)NumInterpolationPoints;
    params.SourceGeometryCacheForTransfer = (UGeometryCache*)SourceGeometryCacheForTransfer;
    params.MatchingSection = (int32_t)MatchingSection;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UGroomBindingAsset*)params.ReturnValue;
}
