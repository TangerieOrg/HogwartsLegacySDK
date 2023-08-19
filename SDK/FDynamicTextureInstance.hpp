#pragma once
#include <cstdint>
#include "FStreamableTextureInstance.hpp"
class UTexture2D;
#pragma pack(push, 1)
struct FDynamicTextureInstance : public FStreamableTextureInstance {
    UTexture2D* Texture; // 0x28
    bool bAttached; // 0x30
    char pad_31[0x3];
    float OriginalRadius; // 0x34
}; // Size: 0x38
#pragma pack(pop)
