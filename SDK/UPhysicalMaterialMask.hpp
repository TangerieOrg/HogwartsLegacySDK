#pragma once
#include <cstdint>
#include "TextureAddress.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UPhysicalMaterialMask : public UObject {
public:
    int32_t UVChannelIndex; // 0x28
    TextureAddress AddressX; // 0x2c
    TextureAddress AddressY; // 0x2d
    char pad_2e[0xa];
    static UPhysicalMaterialMask* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
