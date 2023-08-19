#pragma once
#include <cstdint>
#include "FMaterialQualityOverrides.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UShaderPlatformQualitySettings : public UObject {
public:
    FMaterialQualityOverrides QualityOverrides[4]; // 0x28
    char pad_4c[0x14];
    static UShaderPlatformQualitySettings* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
