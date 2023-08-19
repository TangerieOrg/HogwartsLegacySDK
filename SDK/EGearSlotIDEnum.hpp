#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGearSlotIDEnum : uint8_t {
    HEAD = 0,
    OUTFIT = 1,
    BACK = 2,
    NECK = 3,
    HAND = 4,
    FACE = 5,
    Num = 6,
    EGearSlotIDEnum_MAX = 7,
};
#pragma pack(pop)
