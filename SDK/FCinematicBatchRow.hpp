#pragma once
#include <cstdint>
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FCinematicBatchRow : public FTableRowBase {
    char pad_8[0x28];
    bool bEnabled; // 0x30
    char pad_31[0x7];
}; // Size: 0x38
#pragma pack(pop)
