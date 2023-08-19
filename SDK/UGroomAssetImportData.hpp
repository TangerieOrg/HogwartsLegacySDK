#pragma once
#include <cstdint>
#include "UAssetImportData.hpp"
class UGroomImportOptions;
#pragma pack(push, 1)
class UGroomAssetImportData : public UAssetImportData {
public:
    UGroomImportOptions* ImportOptions; // 0x28
    static UGroomAssetImportData* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
