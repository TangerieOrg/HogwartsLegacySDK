#pragma once
#include <cstdint>
#include "EPixelFormat.hpp"
#include "UTexture.hpp"
#pragma pack(push, 1)
class UTexture2DDynamic : public UTexture {
public:
    EPixelFormat Format; // 0x180
    char pad_181[0xf];
    static UTexture2DDynamic* StaticClass();
}; // Size: 0x190
#pragma pack(pop)
