#pragma once
#include <cstdint>
class UTexture;
#pragma pack(push, 1)
struct FCanvasIcon {
    UTexture* Texture; // 0x0
    float U; // 0x8
    float V; // 0xc
    float UL; // 0x10
    float VL; // 0x14
}; // Size: 0x18
#pragma pack(pop)
