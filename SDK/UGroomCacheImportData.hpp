#pragma once
#include <cstdint>
#include "FGroomCacheImportSettings.hpp"
#include "UAssetImportData.hpp"
#pragma pack(push, 1)
class UGroomCacheImportData : public UAssetImportData {
public:
    FGroomCacheImportSettings Settings; // 0x28
    static UGroomCacheImportData* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
