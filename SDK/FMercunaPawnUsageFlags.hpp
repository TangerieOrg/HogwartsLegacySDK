#pragma once
#include <cstdint>
#include "FMercunaNavUsageTypes.hpp"
#pragma pack(push, 1)
struct FMercunaPawnUsageFlags {
    FMercunaNavUsageTypes RequiredUsageFlags; // 0x0
    FMercunaNavUsageTypes AllowedUsageFlags; // 0x4
}; // Size: 0x8
#pragma pack(pop)
