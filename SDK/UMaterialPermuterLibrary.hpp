#pragma once
#include <cstdint>
#include "FMaterialPermuterCopyParameterOverrides.hpp"
#include "FMaterialPermuterKeyCache.hpp"
#include "UDataAsset.hpp"
class UMaterialPermuterInstanceHandCraftedLibrary;
class UMaterialPermuterLoadingStrategiesAsset;
#pragma pack(push, 1)
class UMaterialPermuterLibrary : public UDataAsset {
public:
    UMaterialPermuterInstanceHandCraftedLibrary* InstanceHandCraftedLibrary; // 0x30
    bool bEnableMIDCache; // 0x38
    char pad_39[0x3];
    float MIDCacheTimeoutSeconds; // 0x3c
    char pad_40[0x50];
    UMaterialPermuterLoadingStrategiesAsset* LoadingStrategiesAsset; // 0x90
    FMaterialPermuterCopyParameterOverrides CopyParameterOverrides; // 0x98
    char pad_b8[0x50];
    FMaterialPermuterKeyCache KeyCache; // 0x108
    static UMaterialPermuterLibrary* StaticClass();
}; // Size: 0x170
#pragma pack(pop)
