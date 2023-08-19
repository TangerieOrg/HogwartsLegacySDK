#pragma once
#include <cstdint>
#include "FRCFieldMetadata.hpp"
#pragma pack(push, 1)
struct FRCMetadata_int16 : public FRCFieldMetadata {
    int16_t Min; // 0x8
    int16_t Max; // 0xa
    int16_t DefaultValue; // 0xc
    char pad_e[0x2];
}; // Size: 0x10
#pragma pack(pop)
