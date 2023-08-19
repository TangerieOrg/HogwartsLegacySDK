#pragma once
#include <cstdint>
#include "FRCFieldMetadata.hpp"
#pragma pack(push, 1)
struct FRCMetadata_int8 : public FRCFieldMetadata {
    int8_t Min; // 0x8
    int8_t Max; // 0x9
    int8_t DefaultValue; // 0xa
    char pad_b[0x5];
}; // Size: 0x10
#pragma pack(pop)
