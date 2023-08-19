#pragma once
#include <cstdint>
#include "UDeveloperSettings.hpp"
#pragma pack(push, 1)
class URendererOverrideSettings : public UDeveloperSettings {
public:
    uint8_t bSupportAllShaderPermutations : 1; // 0x38
    uint8_t bForceRecomputeTangents : 1; // 0x38
    uint8_t pad_bitfield_38_2 : 6;
    char pad_39[0x7];
    static URendererOverrideSettings* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
