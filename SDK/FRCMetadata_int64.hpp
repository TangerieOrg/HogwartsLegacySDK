#pragma once
#include <cstdint>
#include "FRCFieldMetadata.hpp"
#pragma pack(push, 1)
struct FRCMetadata_int64 : public FRCFieldMetadata {
    int64_t Min; // 0x8
    int64_t Max; // 0x10
    int64_t DefaultValue; // 0x18
}; // Size: 0x20
#pragma pack(pop)
