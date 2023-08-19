#pragma once
#include <cstdint>
#include "FPrimaryAssetId.hpp"
#include "UAsyncActionLoadPrimaryAssetBase.hpp"
class UObject;
#pragma pack(push, 1)
class UAsyncActionChangePrimaryAssetBundles : public UAsyncActionLoadPrimaryAssetBase {
public:
    char pad_78[0x10];
    static UAsyncActionChangePrimaryAssetBundles* StaticClass();
    static UAsyncActionChangePrimaryAssetBundles* AsyncChangeBundleStateForPrimaryAssetList(UObject* WorldContextObject, TArray<FPrimaryAssetId>& PrimaryAssetList, TArray<FName>& AddBundles, TArray<FName>& RemoveBundles);
    static UAsyncActionChangePrimaryAssetBundles* AsyncChangeBundleStateForMatchingPrimaryAssets(UObject* WorldContextObject, TArray<FName>& NewBundles, TArray<FName>& OldBundles);
}; // Size: 0x88
#pragma pack(pop)
