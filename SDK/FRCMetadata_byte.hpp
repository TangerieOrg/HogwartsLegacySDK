#pragma once
#include <cstdint>
#include "FRCFieldMetadata.hpp"
#pragma pack(push, 1)
struct FRCMetadata_byte : public FRCFieldMetadata {
    uint8_t Min; // 0x8
    uint8_t Max; // 0x9
    uint8_t DefaultValue; // 0xa
    char pad_b[0x5];
}; // Size: 0x10
#pragma pack(pop)
