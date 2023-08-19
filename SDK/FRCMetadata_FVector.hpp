#pragma once
#include <cstdint>
#include "FRCFieldMetadata.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRCMetadata_FVector : public FRCFieldMetadata {
    FVector DefaultValue; // 0x8
    FVector MinimumValue; // 0x14
    FVector MaximumValue; // 0x20
    char pad_2c[0x4];
}; // Size: 0x30
#pragma pack(pop)
