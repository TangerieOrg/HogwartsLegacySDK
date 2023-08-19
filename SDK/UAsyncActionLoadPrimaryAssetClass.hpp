#pragma once
#include <cstdint>
#include "FPrimaryAssetId.hpp"
#include "UAsyncActionLoadPrimaryAssetBase.hpp"
class UObject;
#pragma pack(push, 1)
class UAsyncActionLoadPrimaryAssetClass : public UAsyncActionLoadPrimaryAssetBase {
public:
    char pad_78[0x10];
    static UAsyncActionLoadPrimaryAssetClass* StaticClass();
    static UAsyncActionLoadPrimaryAssetClass* AsyncLoadPrimaryAssetClass(UObject* WorldContextObject, FPrimaryAssetId PrimaryAsset, TArray<FName>& LoadBundles);
}; // Size: 0x88
#pragma pack(pop)
