#pragma once
#include <cstdint>
#include "FRCFieldMetadata.hpp"
#pragma pack(push, 1)
struct FRCMetadata_float : public FRCFieldMetadata {
    float Min; // 0x8
    float Max; // 0xc
    float DefaultValue; // 0x10
    char pad_14[0x4];
}; // Size: 0x18
#pragma pack(pop)
