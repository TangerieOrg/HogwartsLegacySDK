#include "FARFilter.hpp"
#include "FAssetData.hpp"
#include "FAssetRegistryDependencyOptions.hpp"
#include "UAssetRegistry.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
UAssetRegistry* UAssetRegistry::StaticClass() {
    static auto res = find_uobject("Class /Script/AssetRegistry.AssetRegistry");
    return (UAssetRegistry*)res;
}
void UAssetRegistry::WaitForCompletion() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AssetRegistry.AssetRegistry.WaitForCompletion"));
    struct Params_WaitForCompletion {
    }; // Size: 0x0
    Params_WaitForCompletion params{};
    ProcessEvent(func, &params);
}
void UAssetRegistry::UseFilterToExcludeAssets(TArray<FAssetData>& AssetDataList, FARFilter& Filter) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AssetRegistry.AssetRegistry.UseFilterToExcludeAssets"));
    struct Params_UseFilterToExcludeAssets {
        TArray<FAssetData> AssetDataList; // 0x0
        FARFilter Filter; // 0x10
    }; // Size: 0x100
    Params_UseFilterToExcludeAssets params{};
    params.AssetDataList = (TArray<FAssetData>)AssetDataList;
    params.Filter = (FARFilter)Filter;
    ProcessEvent(func, &params);
    AssetDataList = params.AssetDataList;
    Filter = params.Filter;
}
void UAssetRegistry::ScanFilesSynchronous(TArray<FString>& InFilePaths, bool bForceRescan) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AssetRegistry.AssetRegistry.ScanFilesSynchronous"));
    struct Params_ScanFilesSynchronous {
        TArray<FString> InFilePaths; // 0x0
        bool bForceRescan; // 0x10
    }; // Size: 0x11
    Params_ScanFilesSynchronous params{};
    params.InFilePaths = (TArray<FString>)InFilePaths;
    params.bForceRescan = (bool)bForceRescan;
    ProcessEvent(func, &params);
    InFilePaths = params.InFilePaths;
}
void UAssetRegistry::SearchAllAssets(bool bSynchronousSearch) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AssetRegistry.AssetRegistry.SearchAllAssets"));
    struct Params_SearchAllAssets {
        bool bSynchronousSearch; // 0x0
    }; // Size: 0x1
    Params_SearchAllAssets params{};
    params.bSynchronousSearch = (bool)bSynchronousSearch;
    ProcessEvent(func, &params);
}
void UAssetRegistry::ScanModifiedAssetFiles(TArray<FString>& InFilePaths) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AssetRegistry.AssetRegistry.ScanModifiedAssetFiles"));
    struct Params_ScanModifiedAssetFiles {
        TArray<FString> InFilePaths; // 0x0
    }; // Size: 0x10
    Params_ScanModifiedAssetFiles params{};
    params.InFilePaths = (TArray<FString>)InFilePaths;
    ProcessEvent(func, &params);
    InFilePaths = params.InFilePaths;
}
void UAssetRegistry::ScanPathsSynchronous(TArray<FString>& InPaths, bool bForceRescan) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AssetRegistry.AssetRegistry.ScanPathsSynchronous"));
    struct Params_ScanPathsSynchronous {
        TArray<FString> InPaths; // 0x0
        bool bForceRescan; // 0x10
    }; // Size: 0x11
    Params_ScanPathsSynchronous params{};
    params.InPaths = (TArray<FString>)InPaths;
    params.bForceRescan = (bool)bForceRescan;
    ProcessEvent(func, &params);
    InPaths = params.InPaths;
}
void UAssetRegistry::RunAssetsThroughFilter(TArray<FAssetData>& AssetDataList, FARFilter& Filter) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AssetRegistry.AssetRegistry.RunAssetsThroughFilter"));
    struct Params_RunAssetsThroughFilter {
        TArray<FAssetData> AssetDataList; // 0x0
        FARFilter Filter; // 0x10
    }; // Size: 0x100
    Params_RunAssetsThroughFilter params{};
    params.AssetDataList = (TArray<FAssetData>)AssetDataList;
    params.Filter = (FARFilter)Filter;
    ProcessEvent(func, &params);
    AssetDataList = params.AssetDataList;
    Filter = params.Filter;
}
void UAssetRegistry::PrioritizeSearchPath(FString PathToPrioritize) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AssetRegistry.AssetRegistry.PrioritizeSearchPath"));
    struct Params_PrioritizeSearchPath {
        FString PathToPrioritize; // 0x0
    }; // Size: 0x10
    Params_PrioritizeSearchPath params{};
    params.PathToPrioritize = (FString)PathToPrioritize;
    ProcessEvent(func, &params);
}
bool UAssetRegistry::K2_GetReferencers(FName PackageName, FAssetRegistryDependencyOptions& ReferenceOptions, TArray<FName>& OutReferencers) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AssetRegistry.AssetRegistry.K2_GetReferencers"));
    struct Params_K2_GetReferencers {
        FName PackageName; // 0x0
        FAssetRegistryDependencyOptions ReferenceOptions; // 0x8
        char pad_d[0x3];
        TArray<FName> OutReferencers; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_K2_GetReferencers params{};
    params.PackageName = (FName)PackageName;
    params.ReferenceOptions = (FAssetRegistryDependencyOptions)ReferenceOptions;
    params.OutReferencers = (TArray<FName>)OutReferencers;
    ProcessEvent(func, &params);
    ReferenceOptions = params.ReferenceOptions;
    OutReferencers = params.OutReferencers;
    return (bool)params.ReturnValue;
}
bool UAssetRegistry::K2_GetDependencies(FName PackageName, FAssetRegistryDependencyOptions& DependencyOptions, TArray<FName>& OutDependencies) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AssetRegistry.AssetRegistry.K2_GetDependencies"));
    struct Params_K2_GetDependencies {
        FName PackageName; // 0x0
        FAssetRegistryDependencyOptions DependencyOptions; // 0x8
        char pad_d[0x3];
        TArray<FName> OutDependencies; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_K2_GetDependencies params{};
    params.PackageName = (FName)PackageName;
    params.DependencyOptions = (FAssetRegistryDependencyOptions)DependencyOptions;
    params.OutDependencies = (TArray<FName>)OutDependencies;
    ProcessEvent(func, &params);
    DependencyOptions = params.DependencyOptions;
    OutDependencies = params.OutDependencies;
    return (bool)params.ReturnValue;
}
bool UAssetRegistry::IsLoadingAssets() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AssetRegistry.AssetRegistry.IsLoadingAssets"));
    struct Params_IsLoadingAssets {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsLoadingAssets params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UAssetRegistry::HasAssets(FName PackagePath, bool bRecursive) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AssetRegistry.AssetRegistry.HasAssets"));
    struct Params_HasAssets {
        FName PackagePath; // 0x0
        bool bRecursive; // 0x8
        bool ReturnValue; // 0x9
    }; // Size: 0xa
    Params_HasAssets params{};
    params.PackagePath = (FName)PackagePath;
    params.bRecursive = (bool)bRecursive;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UAssetRegistry::GetSubPaths(FString InBasePath, TArray<FString>& OutPathList, bool bInRecurse) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AssetRegistry.AssetRegistry.GetSubPaths"));
    struct Params_GetSubPaths {
        FString InBasePath; // 0x0
        TArray<FString> OutPathList; // 0x10
        bool bInRecurse; // 0x20
    }; // Size: 0x21
    Params_GetSubPaths params{};
    params.InBasePath = (FString)InBasePath;
    params.OutPathList = (TArray<FString>)OutPathList;
    params.bInRecurse = (bool)bInRecurse;
    ProcessEvent(func, &params);
    OutPathList = params.OutPathList;
}
bool UAssetRegistry::GetAssetsByPath(FName PackagePath, TArray<FAssetData>& OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AssetRegistry.AssetRegistry.GetAssetsByPath"));
    struct Params_GetAssetsByPath {
        FName PackagePath; // 0x0
        TArray<FAssetData> OutAssetData; // 0x8
        bool bRecursive; // 0x18
        bool bIncludeOnlyOnDiskAssets; // 0x19
        bool ReturnValue; // 0x1a
    }; // Size: 0x1b
    Params_GetAssetsByPath params{};
    params.PackagePath = (FName)PackagePath;
    params.OutAssetData = (TArray<FAssetData>)OutAssetData;
    params.bRecursive = (bool)bRecursive;
    params.bIncludeOnlyOnDiskAssets = (bool)bIncludeOnlyOnDiskAssets;
    ProcessEvent(func, &params);
    OutAssetData = params.OutAssetData;
    return (bool)params.ReturnValue;
}
bool UAssetRegistry::GetAssetsByPackageName(FName PackageName, TArray<FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AssetRegistry.AssetRegistry.GetAssetsByPackageName"));
    struct Params_GetAssetsByPackageName {
        FName PackageName; // 0x0
        TArray<FAssetData> OutAssetData; // 0x8
        bool bIncludeOnlyOnDiskAssets; // 0x18
        bool ReturnValue; // 0x19
    }; // Size: 0x1a
    Params_GetAssetsByPackageName params{};
    params.PackageName = (FName)PackageName;
    params.OutAssetData = (TArray<FAssetData>)OutAssetData;
    params.bIncludeOnlyOnDiskAssets = (bool)bIncludeOnlyOnDiskAssets;
    ProcessEvent(func, &params);
    OutAssetData = params.OutAssetData;
    return (bool)params.ReturnValue;
}
bool UAssetRegistry::GetAssetsByClass(FName ClassName, TArray<FAssetData>& OutAssetData, bool bSearchSubClasses) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AssetRegistry.AssetRegistry.GetAssetsByClass"));
    struct Params_GetAssetsByClass {
        FName ClassName; // 0x0
        TArray<FAssetData> OutAssetData; // 0x8
        bool bSearchSubClasses; // 0x18
        bool ReturnValue; // 0x19
    }; // Size: 0x1a
    Params_GetAssetsByClass params{};
    params.ClassName = (FName)ClassName;
    params.OutAssetData = (TArray<FAssetData>)OutAssetData;
    params.bSearchSubClasses = (bool)bSearchSubClasses;
    ProcessEvent(func, &params);
    OutAssetData = params.OutAssetData;
    return (bool)params.ReturnValue;
}
void UAssetRegistry::GetAllCachedPaths(TArray<FString>& OutPathList) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AssetRegistry.AssetRegistry.GetAllCachedPaths"));
    struct Params_GetAllCachedPaths {
        TArray<FString> OutPathList; // 0x0
    }; // Size: 0x10
    Params_GetAllCachedPaths params{};
    params.OutPathList = (TArray<FString>)OutPathList;
    ProcessEvent(func, &params);
    OutPathList = params.OutPathList;
}
bool UAssetRegistry::GetAssets(FARFilter& Filter, TArray<FAssetData>& OutAssetData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AssetRegistry.AssetRegistry.GetAssets"));
    struct Params_GetAssets {
        FARFilter Filter; // 0x0
        TArray<FAssetData> OutAssetData; // 0xf0
        bool ReturnValue; // 0x100
    }; // Size: 0x101
    Params_GetAssets params{};
    params.Filter = (FARFilter)Filter;
    params.OutAssetData = (TArray<FAssetData>)OutAssetData;
    ProcessEvent(func, &params);
    Filter = params.Filter;
    OutAssetData = params.OutAssetData;
    return (bool)params.ReturnValue;
}
FAssetData UAssetRegistry::GetAssetByObjectPath(FName ObjectPath, bool bIncludeOnlyOnDiskAssets) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AssetRegistry.AssetRegistry.GetAssetByObjectPath"));
    struct Params_GetAssetByObjectPath {
        FName ObjectPath; // 0x0
        bool bIncludeOnlyOnDiskAssets; // 0x8
        char pad_9[0x7];
        FAssetData ReturnValue; // 0x10
    }; // Size: 0x70
    Params_GetAssetByObjectPath params{};
    params.ObjectPath = (FName)ObjectPath;
    params.bIncludeOnlyOnDiskAssets = (bool)bIncludeOnlyOnDiskAssets;
    ProcessEvent(func, &params);
    return (FAssetData)params.ReturnValue;
}
bool UAssetRegistry::GetAllAssets(TArray<FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AssetRegistry.AssetRegistry.GetAllAssets"));
    struct Params_GetAllAssets {
        TArray<FAssetData> OutAssetData; // 0x0
        bool bIncludeOnlyOnDiskAssets; // 0x10
        bool ReturnValue; // 0x11
    }; // Size: 0x12
    Params_GetAllAssets params{};
    params.OutAssetData = (TArray<FAssetData>)OutAssetData;
    params.bIncludeOnlyOnDiskAssets = (bool)bIncludeOnlyOnDiskAssets;
    ProcessEvent(func, &params);
    OutAssetData = params.OutAssetData;
    return (bool)params.ReturnValue;
}
