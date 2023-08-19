#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EHoboType : uint8_t {
    AnyType = 0,
    DarkWizards = 1,
    Ghosts = 2,
    Students = 3,
    TownsPeople = 4,
    HouseElf = 5,
    Authority = 6,
    Worker = 7,
    Child = 8,
    YoungStudent = 9,
    AzkabanPrisoner = 10,
    Custom = 11,
    EHoboType_MAX = 12,
};
#pragma pack(pop)
