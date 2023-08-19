#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UAssetRegistryImpl : public UObject {
public:
    char pad_28[0x828];
    static UAssetRegistryImpl* StaticClass();
}; // Size: 0x850
#pragma pack(pop)
