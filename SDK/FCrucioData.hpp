#pragma once
#include <cstdint>
#include "FDOTData.hpp"
#pragma pack(push, 1)
struct FCrucioData : public FDOTData {
    char pad_60[0x18];
}; // Size: 0x78
#pragma pack(pop)
