#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
class UGroomAsset;
class USkeletalMesh;
class UGroomBindingAsset;
class UGeometryCache;
#pragma pack(push, 1)
class UGroomBlueprintLibrary : public UBlueprintFunctionLibrary {
public:
    static UGroomBlueprintLibrary* StaticClass();
    static UGroomBindingAsset* CreateNewGroomBindingAssetWithPath(FString InDesiredPackagePath, UGroomAsset* InGroomAsset, USkeletalMesh* InSkeletalMesh, int32_t InNumInterpolationPoints, USkeletalMesh* InSourceSkeletalMeshForTransfer, int32_t InMatchingSection);
    static UGroomBindingAsset* CreateNewGroomBindingAsset(UGroomAsset* InGroomAsset, USkeletalMesh* InSkeletalMesh, int32_t InNumInterpolationPoints, USkeletalMesh* InSourceSkeletalMeshForTransfer, int32_t InMatchingSection);
    static UGroomBindingAsset* CreateNewGeometryCacheGroomBindingAssetWithPath(FString DesiredPackagePath, UGroomAsset* GroomAsset, UGeometryCache* GeometryCache, int32_t NumInterpolationPoints, UGeometryCache* SourceGeometryCacheForTransfer, int32_t MatchingSection);
    static UGroomBindingAsset* CreateNewGeometryCacheGroomBindingAsset(UGroomAsset* GroomAsset, UGeometryCache* GeometryCache, int32_t NumInterpolationPoints, UGeometryCache* SourceGeometryCacheForTransfer, int32_t MatchingSection);
}; // Size: 0x28
#pragma pack(pop)
