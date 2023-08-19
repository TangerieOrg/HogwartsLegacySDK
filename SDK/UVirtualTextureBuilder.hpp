#pragma once
#include <cstdint>
#include "UObject.hpp"
class UVirtualTexture2D;
#pragma pack(push, 1)
class UVirtualTextureBuilder : public UObject {
public:
    UVirtualTexture2D* Texture; // 0x28
    uint64_t BuildHash; // 0x30
    static UVirtualTextureBuilder* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
