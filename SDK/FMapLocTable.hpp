#pragma once
#include <cstdint>
#include "FMapLocItem.hpp"
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FMapLocTable : public FTableRowBase {
    TArray<FMapLocItem> MapActions; // 0x8
}; // Size: 0x18
#pragma pack(pop)
