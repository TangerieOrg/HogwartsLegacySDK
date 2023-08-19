#pragma once
#include <cstdint>
#include "FAssetMapping.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UAssetMappingTable : public UObject {
public:
    TArray<FAssetMapping> MappedAssets; // 0x28
    static UAssetMappingTable* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
