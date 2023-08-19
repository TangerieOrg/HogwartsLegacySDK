#pragma once
#include <cstdint>
#include "FDataTableRowHandle.hpp"
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FRarityColors : public FTableRowBase {
    FDataTableRowHandle Outline; // 0x8
    FDataTableRowHandle Glow; // 0x18
    FDataTableRowHandle Back; // 0x28
    FDataTableRowHandle Text; // 0x38
}; // Size: 0x48
#pragma pack(pop)
