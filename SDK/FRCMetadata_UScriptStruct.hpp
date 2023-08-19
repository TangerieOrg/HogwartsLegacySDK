#pragma once
#include <cstdint>
#include "FRCFieldMetadata.hpp"
#pragma pack(push, 1)
struct FRCMetadata_UScriptStruct : public FRCFieldMetadata {
    char pad_8[0x28];
}; // Size: 0x30
#pragma pack(pop)
