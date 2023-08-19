#pragma once
#include <cstdint>
#include "FGroomCacheInfo.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UGroomCache : public UObject {
public:
    char pad_28[0x8];
    FGroomCacheInfo GroomCacheInfo; // 0x30
    char pad_58[0x10];
    static UGroomCache* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
