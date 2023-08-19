#pragma once
#include <cstdint>
#include "FGroomCacheImportSettings.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UGroomCacheImportOptions : public UObject {
public:
    FGroomCacheImportSettings ImportSettings; // 0x28
    static UGroomCacheImportOptions* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
