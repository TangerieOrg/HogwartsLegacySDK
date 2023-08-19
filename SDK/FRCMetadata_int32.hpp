#pragma once
#include <cstdint>
#include "FRCFieldMetadata.hpp"
#pragma pack(push, 1)
struct FRCMetadata_int32 : public FRCFieldMetadata {
    int32_t Min; // 0x8
    int32_t Max; // 0xc
    int32_t DefaultValue; // 0x10
    char pad_14[0x4];
}; // Size: 0x18
#pragma pack(pop)
