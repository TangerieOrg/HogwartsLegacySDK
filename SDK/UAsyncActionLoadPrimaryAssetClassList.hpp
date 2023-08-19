#pragma once
#include <cstdint>
#include "FPrimaryAssetId.hpp"
#include "UAsyncActionLoadPrimaryAssetBase.hpp"
class UObject;
#pragma pack(push, 1)
class UAsyncActionLoadPrimaryAssetClassList : public UAsyncActionLoadPrimaryAssetBase {
public:
    char pad_78[0x10];
    static UAsyncActionLoadPrimaryAssetClassList* StaticClass();
    static UAsyncActionLoadPrimaryAssetClassList* AsyncLoadPrimaryAssetClassList(UObject* WorldContextObject, TArray<FPrimaryAssetId>& PrimaryAssetList, TArray<FName>& LoadBundles);
}; // Size: 0x88
#pragma pack(pop)
