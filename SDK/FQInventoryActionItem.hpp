#pragma once
#include <cstdint>
#include "FQActionItem.hpp"
#pragma pack(push, 1)
struct FQInventoryActionItem : public FQActionItem {
    char pad_c[0x14];
}; // Size: 0x20
#pragma pack(pop)
