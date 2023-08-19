#pragma once
#include <cstdint>
#include "UTexture2D.hpp"
#pragma pack(push, 1)
class URuntimeVirtualTextureStreamingProxy : public UTexture2D {
public:
    static URuntimeVirtualTextureStreamingProxy* StaticClass();
}; // Size: 0x1a0
#pragma pack(pop)
