#pragma once
#include <cstdint>
#include "FMapFXData.hpp"
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FMapFXDataTable : public FTableRowBase {
    FMapFXData Overland; // 0x8
    FMapFXData Hogwarts; // 0x18
    FMapFXData Hogsmeade; // 0x28
    FMapFXData Dungeon; // 0x38
}; // Size: 0x48
#pragma pack(pop)
