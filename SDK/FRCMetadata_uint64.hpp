#pragma once
#include <cstdint>
#include "FRCFieldMetadata.hpp"
#pragma pack(push, 1)
struct FRCMetadata_uint64 : public FRCFieldMetadata {
    uint64_t Min; // 0x8
    uint64_t Max; // 0x10
    uint64_t DefaultValue; // 0x18
}; // Size: 0x20
#pragma pack(pop)
