#pragma once
#include <cstdint>
#include "UObject.hpp"
class UTexture2D;
#pragma pack(push, 1)
class UPerceptionTextureCacheItem : public UObject {
public:
    UTexture2D* Texture; // 0x28
    float FOV; // 0x30
    char pad_34[0xc];
    static UPerceptionTextureCacheItem* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
