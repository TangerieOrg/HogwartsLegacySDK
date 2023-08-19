#pragma once
#include <cstdint>
#include "UObject.hpp"
class UTexture2D;
#pragma pack(push, 1)
class UTextureUtil : public UObject {
public:
    UTexture2D* TargetTexture; // 0x28
    char pad_30[0xc8];
    static UTextureUtil* StaticClass();
}; // Size: 0xf8
#pragma pack(pop)
