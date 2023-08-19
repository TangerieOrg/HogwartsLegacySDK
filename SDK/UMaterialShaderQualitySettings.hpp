#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UMaterialShaderQualitySettings : public UObject {
public:
    char pad_28[0x50];
    static UMaterialShaderQualitySettings* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
