#pragma once
#include <cstdint>
class UAkAcousticTexture;
#pragma pack(push, 1)
struct FAkSurfacePoly {
    UAkAcousticTexture* Texture; // 0x0
    float Occlusion; // 0x8
    bool EnableSurface; // 0xc
    char pad_d[0x3];
    float SurfaceArea; // 0x10
    char pad_14[0x4];
}; // Size: 0x18
#pragma pack(pop)
