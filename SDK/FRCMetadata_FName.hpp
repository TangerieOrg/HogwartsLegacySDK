#pragma once
#include <cstdint>
#include "FRCFieldMetadata.hpp"
#pragma pack(push, 1)
struct FRCMetadata_FName : public FRCFieldMetadata {
    FName DefaultValue; // 0x8
}; // Size: 0x10
#pragma pack(pop)
