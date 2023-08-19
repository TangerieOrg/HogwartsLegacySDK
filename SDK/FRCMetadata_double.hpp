#pragma once
#include <cstdint>
#include "FRCFieldMetadata.hpp"
#pragma pack(push, 1)
struct FRCMetadata_double : public FRCFieldMetadata {
    double Min; // 0x8
    double Max; // 0x10
    double DefaultValue; // 0x18
}; // Size: 0x20
#pragma pack(pop)
