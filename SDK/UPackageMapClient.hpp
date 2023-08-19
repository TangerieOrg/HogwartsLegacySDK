#pragma once
#include <cstdint>
#include "UPackageMap.hpp"
#pragma pack(push, 1)
class UPackageMapClient : public UPackageMap {
public:
    char pad_e0[0x328];
    static UPackageMapClient* StaticClass();
}; // Size: 0x408
#pragma pack(pop)
