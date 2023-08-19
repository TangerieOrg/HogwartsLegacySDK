#pragma once
#include <cstdint>
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FTransfigurationMovementStyleTableRow : public FTableRowBase {
    char pad_8[0x28];
}; // Size: 0x30
#pragma pack(pop)
