#pragma once
#include <cstdint>
class UTexture;
#pragma pack(push, 1)
struct FMaterialSwapTextureParameter {
    FName Name; // 0x0
    UTexture* Value; // 0x8
}; // Size: 0x10
#pragma pack(pop)
