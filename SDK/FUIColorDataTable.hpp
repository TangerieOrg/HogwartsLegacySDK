#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FUIColorDataTable : public FTableRowBase {
    FLinearColor NormalVision; // 0x8
    FLinearColor Protanopia; // 0x18
    FLinearColor Deuteranopia; // 0x28
    FLinearColor Tritanopia; // 0x38
    char pad_48[0x40];
}; // Size: 0x88
#pragma pack(pop)
