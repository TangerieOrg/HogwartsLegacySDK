#pragma once
#include <cstdint>
#include "UMaterialExpressionParameter.hpp"
#pragma pack(push, 1)
class UMaterialExpressionStaticComponentMaskParameter : public UMaterialExpressionParameter {
public:
    uint8_t DefaultR : 1; // 0x58
    uint8_t DefaultG : 1; // 0x58
    uint8_t DefaultB : 1; // 0x58
    uint8_t DefaultA : 1; // 0x58
    uint8_t pad_bitfield_58_4 : 4;
    char pad_59[0x7];
    static UMaterialExpressionStaticComponentMaskParameter* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
