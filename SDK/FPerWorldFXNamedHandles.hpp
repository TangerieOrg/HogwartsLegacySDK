#pragma once
#include <cstdint>
#include "FFXNamedHandles.hpp"
#pragma pack(push, 1)
struct FPerWorldFXNamedHandles {
    FFXNamedHandles Global; // 0x0
    char pad_50[0x50];
}; // Size: 0xa0
#pragma pack(pop)
