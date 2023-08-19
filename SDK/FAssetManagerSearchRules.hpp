#pragma once
#include <cstdint>
class UClass;
#pragma pack(push, 1)
struct FAssetManagerSearchRules {
    TArray<FString> AssetScanPaths; // 0x0
    TArray<FString> IncludePatterns; // 0x10
    TArray<FString> ExcludePatterns; // 0x20
    UClass* AssetBaseClass; // 0x30
    bool bHasBlueprintClasses; // 0x38
    bool bForceSynchronousScan; // 0x39
    bool bSkipVirtualPathExpansion; // 0x3a
    bool bSkipManagerIncludeCheck; // 0x3b
    char pad_3c[0x14];
}; // Size: 0x50
#pragma pack(pop)
