#pragma once
#include <cstdint>
#include "UInteractiveToolPropertySet.hpp"
class UTexture2D;
#pragma pack(push, 1)
class UBakedTexture2DImageProperties : public UInteractiveToolPropertySet {
public:
    UTexture2D* SourceTexture; // 0x60
    int32_t UVLayer; // 0x68
    char pad_6c[0x4];
    static UBakedTexture2DImageProperties* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
