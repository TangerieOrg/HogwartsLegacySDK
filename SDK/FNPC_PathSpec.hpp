#pragma once
#include <cstdint>
#include "ENPC_PathSpec.hpp"
#include "FOdcPathSpec.hpp"
#pragma pack(push, 1)
struct FNPC_PathSpec {
    ENPC_PathSpec Type; // 0x0
    char pad_1[0x7];
    FOdcPathSpec PathSpec; // 0x8
}; // Size: 0x58
#pragma pack(pop)
