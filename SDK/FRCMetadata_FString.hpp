#pragma once
#include <cstdint>
#include "FRCFieldMetadata.hpp"
#pragma pack(push, 1)
struct FRCMetadata_FString : public FRCFieldMetadata {
    FString DefaultValue; // 0x8
}; // Size: 0x18
#pragma pack(pop)
