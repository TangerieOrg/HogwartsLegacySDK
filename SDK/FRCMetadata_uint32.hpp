#pragma once
#include <cstdint>
#include "FRCFieldMetadata.hpp"
#pragma pack(push, 1)
struct FRCMetadata_uint32 : public FRCFieldMetadata {
    uint32_t Min; // 0x8
    uint32_t Max; // 0xc
    uint32_t DefaultValue; // 0x10
    char pad_14[0x4];
}; // Size: 0x18
#pragma pack(pop)
