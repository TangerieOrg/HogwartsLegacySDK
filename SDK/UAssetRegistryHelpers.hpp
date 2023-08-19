#pragma once
#include <cstdint>
#include "FARFilter.hpp"
#include "FAssetData.hpp"
#include "FSoftObjectPath.hpp"
#include "FTagAndValue.hpp"
#include "UObject.hpp"
class UClass;
#pragma pack(push, 1)
class UAssetRegistryHelpers : public UObject {
public:
    static UAssetRegistryHelpers* StaticClass();
    static FSoftObjectPath ToSoftObjectPath(FAssetData& InAssetData);
    static FARFilter SetFilterTagsAndValues(FARFilter& InFilter, TArray<FTagAndValue>& InTagsAndValues);
    static bool IsValid(FAssetData& InAssetData);
    static bool IsUAsset(FAssetData& InAssetData);
    static bool IsRedirector(FAssetData& InAssetData);
    static bool IsAssetLoaded(FAssetData& InAssetData);
    static bool GetTagValue(FAssetData& InAssetData, FName& InTagName, FString& OutTagValue);
    static bool GetTagKeys(FAssetData& InAssetData, TArray<FName>& OutTagKeys);
    static FString GetFullName(FAssetData& InAssetData);
    static FString GetExportTextName(FAssetData& InAssetData);
    static UClass* GetClass(FAssetData& InAssetData);
    static void GetAssetRegistry();
    static UObject* GetAsset(FAssetData& InAssetData);
    static FAssetData CreateAssetData(UObject* InAsset, bool bAllowBlueprintClass);
}; // Size: 0x28
#pragma pack(pop)
