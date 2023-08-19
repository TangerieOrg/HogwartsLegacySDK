#pragma once
#include <cstdint>
#include "FRCFieldMetadata.hpp"
#pragma pack(push, 1)
struct FRCMetadata_bool : public FRCFieldMetadata {
    bool DefaultValue; // 0x8
    char pad_9[0x7];
}; // Size: 0x10
#pragma pack(pop)
