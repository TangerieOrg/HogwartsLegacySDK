#pragma once
#include <cstdint>
#include "EShadowMapFlags.hpp"
#include "UTexture2D.hpp"
#pragma pack(push, 1)
class UShadowMapTexture2D : public UTexture2D {
public:
    EShadowMapFlags ShadowmapFlags; // 0x1a0
    char pad_1a1[0xf];
    static UShadowMapTexture2D* StaticClass();
}; // Size: 0x1b0
#pragma pack(pop)
