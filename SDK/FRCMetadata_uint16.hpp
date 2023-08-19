#pragma once
#include <cstdint>
#include "FRCFieldMetadata.hpp"
#pragma pack(push, 1)
struct FRCMetadata_uint16 : public FRCFieldMetadata {
    uint16_t Min; // 0x8
    uint16_t Max; // 0xa
    uint16_t DefaultValue; // 0xc
    char pad_e[0x2];
}; // Size: 0x10
#pragma pack(pop)
