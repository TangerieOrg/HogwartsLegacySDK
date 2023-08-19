#pragma once
#include <cstdint>
#include "FDayNightEventTrackers.hpp"
#pragma pack(push, 1)
struct FDayNightGlobalEvents : public FDayNightEventTrackers {
    char pad_10[0x10];
}; // Size: 0x20
#pragma pack(pop)
