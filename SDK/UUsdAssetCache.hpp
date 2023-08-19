#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UUsdAssetCache : public UObject {
public:
    char pad_28[0xa0];
    bool bAllowPersistentStorage; // 0xc8
    char pad_c9[0x11f];
    static UUsdAssetCache* StaticClass();
}; // Size: 0x1e8
#pragma pack(pop)
