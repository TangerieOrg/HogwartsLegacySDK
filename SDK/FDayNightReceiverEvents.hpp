#pragma once
#include <cstdint>
#include "FDayNightEventTrackers.hpp"
#pragma pack(push, 1)
struct FDayNightReceiverEvents : public FDayNightEventTrackers {
    char pad_10[0x8];
}; // Size: 0x18
#pragma pack(pop)
