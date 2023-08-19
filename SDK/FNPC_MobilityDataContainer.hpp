#pragma once
#include <cstdint>
#include "ENPC_Mobility.hpp"
#include "FNPC_MobilityData.hpp"
#pragma pack(push, 1)
struct FNPC_MobilityDataContainer {
    ENPC_Mobility Mode; // 0x0
    char pad_1[0x7];
    FNPC_MobilityData Data; // 0x8
}; // Size: 0xb8
#pragma pack(pop)
