#pragma once
#include <cstdint>
#include "FAssetManagerRedirect.hpp"
#include "FDirectoryPath.hpp"
#include "FPrimaryAssetRulesCustomOverride.hpp"
#include "FPrimaryAssetRulesOverride.hpp"
#include "FPrimaryAssetTypeInfo.hpp"
#include "UDeveloperSettings.hpp"
#pragma pack(push, 1)
class UAssetManagerSettings : public UDeveloperSettings {
public:
    TArray<FPrimaryAssetTypeInfo> PrimaryAssetTypesToScan; // 0x38
    TArray<FDirectoryPath> DirectoriesToExclude; // 0x48
    TArray<FPrimaryAssetRulesOverride> PrimaryAssetRules; // 0x58
    TArray<FPrimaryAssetRulesCustomOverride> CustomPrimaryAssetRules; // 0x68
    bool bOnlyCookProductionAssets; // 0x78
    bool bShouldManagerDetermineTypeAndName; // 0x79
    bool bShouldGuessTypeAndNameInEditor; // 0x7a
    bool bShouldAcquireMissingChunksOnLoad; // 0x7b
    char pad_7c[0x4];
    TArray<FAssetManagerRedirect> PrimaryAssetIdRedirects; // 0x80
    TArray<FAssetManagerRedirect> PrimaryAssetTypeRedirects; // 0x90
    TArray<FAssetManagerRedirect> AssetPathRedirects; // 0xa0
    char pad_b0[0x50];
    static UAssetManagerSettings* StaticClass();
}; // Size: 0x100
#pragma pack(pop)
