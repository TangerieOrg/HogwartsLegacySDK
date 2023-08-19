#pragma once
#include <cstdint>
#include "FGearName.hpp"
#pragma pack(push, 1)
struct FHouseGear {
    FGearName Gryffindor; // 0x0
    FGearName Hufflepuff; // 0x10
    FGearName Ravenclaw; // 0x20
    FGearName Slytherin; // 0x30
}; // Size: 0x40
#pragma pack(pop)
