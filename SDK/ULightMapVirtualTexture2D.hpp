#pragma once
#include <cstdint>
#include "UTexture2D.hpp"
#pragma pack(push, 1)
class ULightMapVirtualTexture2D : public UTexture2D {
public:
    TArray<int8_t> TypeToLayer; // 0x1a0
    char pad_1b0[0x10];
    static ULightMapVirtualTexture2D* StaticClass();
}; // Size: 0x1c0
#pragma pack(pop)
