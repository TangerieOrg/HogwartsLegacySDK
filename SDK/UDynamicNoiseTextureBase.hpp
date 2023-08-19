#pragma once
#include <cstdint>
#include "UObject.hpp"
class UTexture2D;
#pragma pack(push, 1)
class UDynamicNoiseTextureBase : public UObject {
public:
    char pad_28[0x8];
    int32_t Width; // 0x30
    int32_t Height; // 0x34
    float UpdateInterval; // 0x38
    char pad_3c[0x4];
    UTexture2D* Texture; // 0x40
    float Age; // 0x48
    float NextUpdate; // 0x4c
    static UDynamicNoiseTextureBase* StaticClass();
    UTexture2D* GetDynamicTexture();
}; // Size: 0x50
#pragma pack(pop)
