#pragma once
#include <cstdint>
#include "UMaterialExpressionParameter.hpp"
#pragma pack(push, 1)
class UMaterialExpressionStaticBoolParameter : public UMaterialExpressionParameter {
public:
    uint8_t DefaultValue : 1; // 0x58
    uint8_t pad_bitfield_58_1 : 7;
    char pad_59[0x7];
    static UMaterialExpressionStaticBoolParameter* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
