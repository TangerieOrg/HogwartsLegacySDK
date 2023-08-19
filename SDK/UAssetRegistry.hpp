#pragma once
#include <cstdint>
#include "FAssetData.hpp"
#include "UInterface.hpp"
struct FARFilter;
struct FAssetRegistryDependencyOptions;
#pragma pack(push, 1)
class UAssetRegistry : public UInterface {
public:
    static UAssetRegistry* StaticClass();
    void WaitForCompletion();
    void UseFilterToExcludeAssets(TArray<FAssetData>& AssetDataList, FARFilter& Filter);
    void SearchAllAssets(bool bSynchronousSearch);
    void ScanPathsSynchronous(TArray<FString>& InPaths, bool bForceRescan);
    void ScanModifiedAssetFiles(TArray<FString>& InFilePaths);
    void ScanFilesSynchronous(TArray<FString>& InFilePaths, bool bForceRescan);
    void RunAssetsThroughFilter(TArray<FAssetData>& AssetDataList, FARFilter& Filter);
    void PrioritizeSearchPath(FString PathToPrioritize);
    bool K2_GetReferencers(FName PackageName, FAssetRegistryDependencyOptions& ReferenceOptions, TArray<FName>& OutReferencers);
    bool K2_GetDependencies(FName PackageName, FAssetRegistryDependencyOptions& DependencyOptions, TArray<FName>& OutDependencies);
    bool IsLoadingAssets();
    bool HasAssets(FName PackagePath, bool bRecursive);
    void GetSubPaths(FString InBasePath, TArray<FString>& OutPathList, bool bInRecurse);
    bool GetAssetsByPath(FName PackagePath, TArray<FAssetData>& OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets);
    bool GetAssetsByPackageName(FName PackageName, TArray<FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets);
    bool GetAssetsByClass(FName ClassName, TArray<FAssetData>& OutAssetData, bool bSearchSubClasses);
    bool GetAssets(FARFilter& Filter, TArray<FAssetData>& OutAssetData);
    FAssetData GetAssetByObjectPath(FName ObjectPath, bool bIncludeOnlyOnDiskAssets);
    void GetAllCachedPaths(TArray<FString>& OutPathList);
    bool GetAllAssets(TArray<FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets);
}; // Size: 0x28
#pragma pack(pop)
