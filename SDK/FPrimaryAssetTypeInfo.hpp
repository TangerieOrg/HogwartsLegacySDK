#pragma once
#include <cstdint>
#include "FDirectoryPath.hpp"
#include "FPrimaryAssetRules.hpp"
#include "FSoftObjectPath.hpp"
class UClass;
#pragma pack(push, 1)
struct FPrimaryAssetTypeInfo {
    FName PrimaryAssetType; // 0x0
    char pad_8[0x28];
    UClass* AssetBaseClassLoaded; // 0x30
    bool bHasBlueprintClasses; // 0x38
    bool bIsEditorOnly; // 0x39
    char pad_3a[0x6];
    TArray<FDirectoryPath> Directories; // 0x40
    TArray<FSoftObjectPath> SpecificAssets; // 0x50
    FPrimaryAssetRules Rules; // 0x60
    char pad_6c[0x4];
    TArray<FString> AssetScanPaths; // 0x70
    bool bIsDynamicAsset; // 0x80
    char pad_81[0x3];
    int32_t NumberOfAssets; // 0x84
}; // Size: 0x88
#pragma pack(pop)
