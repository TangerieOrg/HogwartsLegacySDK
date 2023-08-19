#pragma once
#include <cstdint>
#include "FVirtualTextureSpacePoolConfig.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UVirtualTexturePoolConfig : public UObject {
public:
    int32_t DefaultSizeInMegabyte; // 0x28
    char pad_2c[0x4];
    TArray<FVirtualTextureSpacePoolConfig> Pools; // 0x30
    static UVirtualTexturePoolConfig* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
