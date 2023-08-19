#pragma once
#include <cstdint>
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FCharacterClassificationRow : public FTableRowBase {
    char pad_8[0x50];
}; // Size: 0x58
#pragma pack(pop)
