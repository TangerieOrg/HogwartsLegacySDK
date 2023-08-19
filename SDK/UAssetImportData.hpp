#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UAssetImportData : public UObject {
public:
    static UAssetImportData* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
