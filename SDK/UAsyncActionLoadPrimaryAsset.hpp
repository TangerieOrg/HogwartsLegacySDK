#pragma once
#include <cstdint>
#include "FPrimaryAssetId.hpp"
#include "UAsyncActionLoadPrimaryAssetBase.hpp"
class UObject;
#pragma pack(push, 1)
class UAsyncActionLoadPrimaryAsset : public UAsyncActionLoadPrimaryAssetBase {
public:
    char pad_78[0x10];
    static UAsyncActionLoadPrimaryAsset* StaticClass();
    static UAsyncActionLoadPrimaryAsset* AsyncLoadPrimaryAsset(UObject* WorldContextObject, FPrimaryAssetId PrimaryAsset, TArray<FName>& LoadBundles);
}; // Size: 0x88
#pragma pack(pop)
