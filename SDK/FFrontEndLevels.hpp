#pragma once
#include <cstdint>
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FFrontEndLevels : public FTableRowBase {
    char pad_8[0x30];
}; // Size: 0x38
#pragma pack(pop)
