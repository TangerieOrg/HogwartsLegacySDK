#pragma once
#include <cstdint>
#include "UAssetImportData.hpp"
class UObject;
#pragma pack(push, 1)
class UUsdAssetImportData : public UAssetImportData {
public:
    FString PrimPath; // 0x28
    UObject* ImportOptions; // 0x38
    static UUsdAssetImportData* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
